using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using MachineLanguageSimulatorLogicLibrary;

namespace MachineLanguage_GUIApp
{
    public struct Memory_RegisterListItems
    {
        public string address;
        public string binaryValue;
        public string hexValue;
    }
    
    public partial class Form1 : Form
    {
        private bool dragging = false;
        private bool isProgramTerminated;
        private Point dragCursorPoint;
        private Point dragFormPoint;
        private ManagedMachine ML;
        private string memoryCell1;
        private string memoryCell2;
        private char printedValue;
        private char operand;
        private int haltLocation;
        private string prevPRValue;

        private bool togglePrintChars;
        
        #region InitializeProgram_Region
        private void InitializeTheMachine()
        {
            ML = new ManagedMachine();
            ML.InitializeCPU();
            printedValue = (char) ML.GetPrintedValue();
            isProgramTerminated = ML.isTerminated();
        }
        
        private void LoadMemoryListView()
        {
            List<string> memoryValues = new List<string>();
            memoryValues = ML.RefreshMemoryValues();
            List<Memory_RegisterListItems> listItems = new List<Memory_RegisterListItems>();
            listView1.Items.Clear();
            listView1.Columns.Clear();
            listView1.View = View.Details;
            listView1.Columns.Add("Address",80,HorizontalAlignment.Left);
            listView1.Columns.Add("BinaryValue",100,HorizontalAlignment.Center);
            listView1.Columns.Add("Hex",110,HorizontalAlignment.Right);
            for (int i = 0 ; i < memoryValues.Count ; i++)
            {
                listItems.Add(new Memory_RegisterListItems()
                {
                    address = Convert.ToString(i,16),
                    binaryValue = Convert.ToString(Convert.ToInt32(memoryValues[i],16),2).PadLeft(8, '0'),
                    hexValue = memoryValues[i]
                });
            }

            foreach (var MR in listItems)
            {
                var item = new ListViewItem(MR.address);
                item.SubItems.Add(MR.binaryValue);
                item.SubItems.Add(MR.hexValue);

                listView1.Items.Add(item);
            }
        }

        private void LoadRegistersListView()
        {
            List<string> registersValue = new List<string>();
            registersValue = ML.RefreshRegistersValue();
            List<Memory_RegisterListItems> listItems = new List<Memory_RegisterListItems>();
            listView2.Items.Clear();
            listView2.Columns.Clear();
            listView2.View = View.Details;
            listView2.Columns.Add("Address",80,HorizontalAlignment.Left);
            listView2.Columns.Add("BinaryValue",100,HorizontalAlignment.Center);
            listView2.Columns.Add("Hex",90,HorizontalAlignment.Right);
            for (int i = 0 ; i < registersValue.Count ; i++)
            {
                listItems.Add(new Memory_RegisterListItems()
                {
                    address = Convert.ToString(i,16),
                    binaryValue = Convert.ToString(Convert.ToInt32(registersValue[i],16),2).PadLeft(8, '0'),
                    hexValue = registersValue[i]
                });
            }

            foreach (var MR in listItems)
            {
                var item = new ListViewItem(MR.address);
                item.SubItems.Add(MR.binaryValue);
                item.SubItems.Add(MR.hexValue);

                listView2.Items.Add(item);
            }
        }
        
        #endregion

        #region MLFunctions


        private void initalizeMemory(List<string> userInput)
        {
            ML.ClearMemory();
            for (int i = 0 ; i < userInput.Count ; i++)
            {
                userInput[i] = userInput[i].ToLower();
            }

            while (userInput.Count < 128)
            {
                userInput.Add("0000");
            }
            
            List<string> instructions = new List<string>();
            foreach (string s in userInput)
            {
                instructions.Add(s.Substring(0, 2));
                instructions.Add(s.Substring(2));
            }
            
            ML.InitializeMemory(instructions);
            LoadMemoryListView();
        }

        private bool TryChangeProgramCounterValue(string value)
        {
            List<char> validCharacters = new List<char>()
            {
                '0',
                '1',
                '2',
                '3',
                '4',
                '5',
                '6',
                '7',
                '8',
                '9',
                'A',
                'B',
                'C',
                'D',
                'E',
                'F',
                'a',
                'b',
                'c',
                'd',
                'e',
                'f'
            };
            
            if (validCharacters.Contains(value[0]) && validCharacters.Contains(value[1]))
            {
                ML.SetProgramCounterStartAddress(value);
                return true;
            }

            return false;
        }

        #endregion

        #region cpuCycles

        private void Fetch()
        {
            if (isProgramTerminated)
            {
                MessageBox.Show("program finished, reload the instruction to run it again", "program finished");
                return;
            }
            
            memoryCell1 = ML.ProgramCounterFetch();
            memoryCell2 = ML.ProgramCounterFetch();
            txtPC.Text = ML.GetProgramCounterByte();
            txtIR.Text = memoryCell1 + memoryCell2;
            if (Convert.ToInt32(ML.GetProgramCounterByte(), 16) > haltLocation)
            {
                isProgramTerminated = true;
            }
        }

        private void Decode()
        {
            if (isProgramTerminated)
            {
                MessageBox.Show("program finished, reload the instruction to run it again", "program finished");
                return;
            }
            operand =  memoryCell1[0];
            
            ML.InstructionRegisterDecode((sbyte) operand,memoryCell1,memoryCell2);
            
            txtOpCode.Text = memoryCell1[0].ToString();
            txtR.Text = memoryCell1[1].ToString();
            txtX.Text = memoryCell2[0].ToString();
            txtY.Text = memoryCell2[1].ToString();
            WriteInstructionDescriptionOnScree();
        }

        private void Execute()
        {
            if (isProgramTerminated)
            {
                MessageBox.Show("program finished, reload the instruction to run it again", "program finished");
                return;
            }

            
            ML.ExecuteInstruction();
            
            
            LoadRegistersListView();
            LoadMemoryListView();
            if (printedValue != ML.GetPrintedValue())
            {
                printedValue = (char) ML.GetPrintedValue();
                if (togglePrintChars)
                {
                     txtScreen.Text += (printedValue).ToString();
                }
                else
                {
                    txtScreen.Text += ((int)printedValue).ToString();
                }
            }

            isProgramTerminated = ML.isTerminated();
        }
        

        #endregion
        
        public Form1()
        {
            InitializeComponent();
            this.Load += Form1_Load;
            prevPRValue = txtPC.Text;
        }
        

        private void Form1_Load(object sender, EventArgs e)
        {
            this.BackColor = Color.FromArgb(10, 15, 30);
            InitializeTheMachine();
            LoadMemoryListView();
            LoadRegistersListView();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void TitleBar_MouseMove(object sender, MouseEventArgs e)
        {
            if (dragging)
            {
                Point diff = Point.Subtract(Cursor.Position, new Size(dragCursorPoint));
                this.Location = Point.Add(dragFormPoint, new Size(diff));
            }
        }

        private void TitleBar_MouseDown(object sender, MouseEventArgs e)
        {
            dragging = true;
            dragCursorPoint = Cursor.Position;
            dragFormPoint = this.Location;
        }

        private void TitleBar_MouseUp(object sender, MouseEventArgs e)
        {
            dragging = false;
        }


        private void btnWrite_Click(object sender, EventArgs e)
        {
            InputForm inputForm = new InputForm();
            inputForm.ShowDialog();

            if (inputForm.IsInputSaved())
            {
                initalizeMemory(inputForm.GetUserInputInstructions());
                isProgramTerminated = false;
                haltLocation = inputForm.GetHaltLocation();
                ML.SetisTerminated(false);
                printedValue = default;
            }
            
        }


        private void btnClear_Click(object sender, EventArgs e)
        {
            ML.ClearMemory();
            LoadMemoryListView();
            haltLocation = 0;
        }


        private void btnClearRegister_Click(object sender, EventArgs e)
        {
            ML.ClearRegisters();
            LoadRegistersListView();
        }

        private void btnExecute_Click(object sender, EventArgs e)
        {
            Execute();
        }

        private void btnDecode_Click(object sender, EventArgs e)
        {
            Decode();
        }

        private void btnFetch_Click(object sender, EventArgs e)
        {
            Fetch();
        }

        private void btnRunOneCycle_Click(object sender, EventArgs e)
        {
            Fetch();
            if (!isProgramTerminated)
            {
                Decode();
            }

            if (!isProgramTerminated)
            {
                Execute();
            }

        }

        private void btnRunUntillHalt_Click(object sender, EventArgs e)
        {
            while (!isProgramTerminated)
            {
               Fetch();
               if (!isProgramTerminated)
               {
                   Decode();
               }

               if (!isProgramTerminated)
               {
                   Execute();
               }
               
            }
            MessageBox.Show("program finished, reload the instruction to run it again", "program finished");
        }

        private void btnClearScreen_Click(object sender, EventArgs e)
        {
            txtScreen.Clear();
        }

        private void txtPC_TextChanged(object sender, EventArgs e)
        {
            if (txtPC.Text.Length == 2)
            {
                if (!TryChangeProgramCounterValue(txtPC.Text))
                {
                    txtPC.Text = prevPRValue;
                }
                else
                {
                    prevPRValue = txtPC.Text;
                }
            }
        }

        private void txtPC_Enter(object sender, EventArgs e)
        {
            prevPRValue = txtPC.Text;
        }

        private void WriteInstructionDescriptionOnScree()
        {
            Dictionary<char, Action> WriteDescription = new Dictionary<char, Action>()
            {
                {
                    '1', () =>
                    {
                        lbCode.Text = "1RXY";
                        lbR.Text = "R";
                        lbX.Text = "X";
                        lbY.Text = "Y";
                        txtDescription.Text = "Copy the content of RAM cell XY to register R.";
                    }
                },
                {
                    '2', () =>
                    {
                        lbCode.Text = "2RXY";
                        lbR.Text = "R";
                        lbX.Text = "X";
                        lbY.Text = "Y";
                        txtDescription.Text = "Copy the value XY to register R.";
                    }
                },
                {
                    '3', () =>
                    {
                        if (memoryCell2 == "00")
                        {
                            lbCode.Text = "3R00";
                            lbR.Text = "R";
                            lbX.Text = "0";
                            lbY.Text = "0";
                            txtDescription.Text = "Print the Value of Register R on Screen";
                        }
                        else
                        {
                            lbCode.Text = "3RXY";
                            lbR.Text = "R";
                            lbX.Text = "X";
                            lbY.Text = "Y";
                            txtDescription.Text = "Copy the content of register R to RAM cell XY.";
                        }
                        
                    }
                },
                {
                    '4', () =>
                    {
                        lbCode.Text = "4xRS";
                        lbR.Text = "x";
                        lbX.Text = "R";
                        lbY.Text = "S";
                        txtDescription.Text = "Copy the content of register R to register S.";
                    }
                },
                {
                    '5', () =>
                    {
                        lbCode.Text = "5RST";
                        lbR.Text = "R";
                        lbX.Text = "S";
                        lbY.Text = "T";
                        txtDescription.Text = "Add the content of register S and register T, and put the result in register R. Data is interpreted as integers in two's-complement notation.";
                    }
                },
                {
                '6', () =>
                {
                    lbCode.Text = "6RST";
                    lbR.Text = "R";
                    lbX.Text = "S";
                    lbY.Text = "T";
                    txtDescription.Text = "Add the content of register S and register T, and put the result in register R. Data is interpreted as floats in floating point notation.";
                }
                },
                {
                    '7', () =>
                    {
                        lbCode.Text = "7RST";
                        lbR.Text = "R";
                        lbX.Text = "S";
                        lbY.Text = "T";
                        txtDescription.Text = "Bitwise OR  the content of register S and T, and put the result in register R.";
                    }
                },
                {
                    '8', () =>
                    {
                        lbCode.Text = "8RST";
                        lbR.Text = "R";
                        lbX.Text = "S";
                        lbY.Text = "T";
                        txtDescription.Text = "Bitwise AND  the content of register S and T, and put the result in register R.";
                    }
                },
                {
                    '9', () =>
                    {
                        lbCode.Text = "9RST";
                        lbR.Text = "R";
                        lbX.Text = "S";
                        lbY.Text = "T";
                        txtDescription.Text = "Bitwise XOR the content of register S and T, and put the result in register R.";
                    }
                },
                {
                    'a', () =>
                    {
                        lbCode.Text = "ARxX";
                        lbR.Text = "R";
                        lbX.Text = "x";
                        lbY.Text = "X";
                        txtDescription.Text = "Rotate the content of register R cyclically right X steps.";
                    }
                },
                {
                    'b', () =>
                    {
                        lbCode.Text = "BRXY";
                        lbR.Text = "R";
                        lbX.Text = "X";
                        lbY.Text = "Y";
                        txtDescription.Text = "Jump to instruction in RAM cell XY if the content of register R equals the content of register 0.";
                    }
                },
                {
                    'c', () =>
                    {
                        lbCode.Text = "Cxxx";
                        lbR.Text = "x";
                        lbX.Text = "x";
                        lbY.Text = "x";
                        txtDescription.Text = "Halt execution.";
                    }
                },
                {
                    'd', () =>
                    {
                        lbCode.Text = "DRXY";
                        lbR.Text = "R";
                        lbX.Text = "X";
                        lbY.Text = "Y";
                        txtDescription.Text = "Jump to instruction in RAM cell XY if the content of register R is greater than (>) the content of register 0. Data is interpreted as integers in two's-complement notation.";
                    }
                }
            };

            WriteDescription[operand]();
        }

        private void btnTogglePrintChars_Click(object sender, EventArgs e)
        {
            togglePrintChars = !togglePrintChars;
            btnTogglePrintChars.BackColor = togglePrintChars ? Color.Green : Color.White;
        }
    }
}