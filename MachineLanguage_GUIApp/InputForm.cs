using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;

namespace MachineLanguage_GUIApp
{
    public partial class InputForm : Form
    {
        private bool saveInputData;
        private List<string> userInstructionsInput = new List<string>();
        private int haltLocation;
        
        public InputForm()
        {
            userInstructionsInput.Clear();
            InitializeComponent();
            this.FormClosing += UserClosing;
        }

        private void UserClosing(object sender, FormClosingEventArgs  e)
        {
            if (e.CloseReason == CloseReason.UserClosing && !saveInputData)
            {
                DialogResult result = MessageBox.Show("Input is Not Saved !, are you sure you want to close ?","Input Not Saved"
                    ,MessageBoxButtons.YesNo,MessageBoxIcon.Exclamation,MessageBoxDefaultButton.Button2);

                if (result == DialogResult.No)
                {
                    e.Cancel = true;
                }
            }
        }
        
        public bool IsInputSaved()
        {
            return saveInputData;
        }

        private void btnSaveInput_Click(object sender, EventArgs e)
        {
            bool ableToSave = isInputCorrect(out List<string> userInput);
            if (ableToSave)
            {
                saveInputData = !saveInputData;
                btnSaveInput.BackColor = saveInputData == true ? Color.Green : default;
                userInstructionsInput = userInput;
            }
        }

        private bool isInputCorrect(out List<string> userInput)
        {
            List<char> validOperands = new List<char>()
            {
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
                'a',
                'b',
                'c',
                'd',
            };

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
            
            List<string> substrings = SplitIntoSubstrings(txtInput.Text);
            userInput = substrings;
            
            if (substrings.Count > 128)
            {
                MessageBox.Show("instruction input is too large, make sure its only 256 cell input",
                    "Input is too large", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                return false;
            }
            
            foreach (string s in substrings)
            {
                if (s.Length != 4)
                {
                    MessageBox.Show("inValid instruction Line length", "inValid Input", MessageBoxButtons.OK,
                        MessageBoxIcon.Exclamation);
                    return false;
                }

                foreach (char c in s)
                {
                    if (!validCharacters.Contains(c))
                    {
                        MessageBox.Show("inValid Characters, make sure to read the instructions List", "inValid Input", MessageBoxButtons.OK,
                            MessageBoxIcon.Exclamation);
                        return false;
                    }
                }
            }

            for (int i = 0; i < substrings.Count; i++)
            {
                if (!validOperands.Contains(substrings[i][0]))
                {
                    MessageBox.Show("inValid operand, make sure to read the instructions List", "inValid operand", MessageBoxButtons.OK,
                        MessageBoxIcon.Exclamation);
                    return false;
                }
            }

            bool foundValidHalt = false;
            int haltLocation = 0;
            foreach (string s in substrings)
            {
                haltLocation += 2;
                if (s[0] == 'c' || s[0] == 'C')
                {
                    foundValidHalt = true;
                    string ss = s.Substring(1);
                    if (ss != "000")
                    {
                        MessageBox.Show("inValid halt instruction, make sure to read the instructions List", "inValid halt", MessageBoxButtons.OK,
                            MessageBoxIcon.Exclamation);
                        return false;
                    }

                    this.haltLocation = haltLocation;
                    break;
                }
            }

            if (!foundValidHalt)
            {
                MessageBox.Show("you didn't add halt instruction", "no halt found", MessageBoxButtons.OK,
                    MessageBoxIcon.Exclamation);
                return false;
            }
            
            return true;
        }
        
        
        
        private List<string> SplitIntoSubstrings(string input)
        {
            List<string> substrings = new List<string>();

            if (string.IsNullOrEmpty(input))
            {
                return substrings; // Return an empty list for null or empty input
            }

            string newInput = "";
            foreach (var c in input)
            {
                if (c == 10 || c == 13)
                {
                    continue;
                }
                newInput += c;
            }
            
            int substringLength = 4;
            string subString = "";
            foreach (char c in newInput)
            {
                subString += c;
                if (subString.Length == substringLength)
                {
                    substrings.Add(subString);
                    subString = "";
                }
            }

            if (subString.Length != 0)
            {
                substrings.Add(subString);
            }

            return substrings;
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            txtInput.Text = "";
            if (saveInputData)
            {
                saveInputData = false;
                btnSaveInput.BackColor = default;
                userInstructionsInput.Clear();
            }
        }

        public List<string> GetUserInputInstructions()
        {
            return userInstructionsInput;
        }

        public int GetHaltLocation()
        {
            return haltLocation;
        }
    }
}