namespace MachineLanguage_GUIApp
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }

            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.TitleBar = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.DataGrp = new System.Windows.Forms.GroupBox();
            this.grpRegisters = new System.Windows.Forms.GroupBox();
            this.btnClearRegister = new System.Windows.Forms.Button();
            this.listView2 = new System.Windows.Forms.ListView();
            this.grpMemory = new System.Windows.Forms.GroupBox();
            this.btnClear = new System.Windows.Forms.Button();
            this.btnWrite = new System.Windows.Forms.Button();
            this.listView1 = new System.Windows.Forms.ListView();
            this.grbScreen = new System.Windows.Forms.GroupBox();
            this.btnTogglePrintChars = new System.Windows.Forms.Button();
            this.btnClearScreen = new System.Windows.Forms.Button();
            this.txtScreen = new System.Windows.Forms.TextBox();
            this.grpHold = new System.Windows.Forms.GroupBox();
            this.grpDescription = new System.Windows.Forms.GroupBox();
            this.label4 = new System.Windows.Forms.Label();
            this.txtDescription = new System.Windows.Forms.TextBox();
            this.txtY = new System.Windows.Forms.TextBox();
            this.txtX = new System.Windows.Forms.TextBox();
            this.txtR = new System.Windows.Forms.TextBox();
            this.lbY = new System.Windows.Forms.Label();
            this.lbX = new System.Windows.Forms.Label();
            this.lbR = new System.Windows.Forms.Label();
            this.txtOpCode = new System.Windows.Forms.TextBox();
            this.lbCode = new System.Windows.Forms.Label();
            this.lbOC = new System.Windows.Forms.Label();
            this.btnExecute = new System.Windows.Forms.Button();
            this.lbProgramCounter = new System.Windows.Forms.Label();
            this.lbInstructionRegister = new System.Windows.Forms.Label();
            this.btnDecode = new System.Windows.Forms.Button();
            this.btnRunOneCycle = new System.Windows.Forms.Button();
            this.btnRunUntillHalt = new System.Windows.Forms.Button();
            this.btnFetch = new System.Windows.Forms.Button();
            this.txtPC = new System.Windows.Forms.TextBox();
            this.txtIR = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.TitleBar.SuspendLayout();
            this.DataGrp.SuspendLayout();
            this.grpRegisters.SuspendLayout();
            this.grpMemory.SuspendLayout();
            this.grbScreen.SuspendLayout();
            this.grpHold.SuspendLayout();
            this.grpDescription.SuspendLayout();
            this.SuspendLayout();
            // 
            // TitleBar
            // 
            this.TitleBar.BackColor = System.Drawing.Color.SteelBlue;
            this.TitleBar.Controls.Add(this.label1);
            this.TitleBar.Controls.Add(this.button1);
            this.TitleBar.Dock = System.Windows.Forms.DockStyle.Top;
            this.TitleBar.Location = new System.Drawing.Point(0, 0);
            this.TitleBar.Name = "TitleBar";
            this.TitleBar.Size = new System.Drawing.Size(1177, 26);
            this.TitleBar.TabIndex = 0;
            this.TitleBar.MouseDown += new System.Windows.Forms.MouseEventHandler(this.TitleBar_MouseDown);
            this.TitleBar.MouseMove += new System.Windows.Forms.MouseEventHandler(this.TitleBar_MouseMove);
            this.TitleBar.MouseUp += new System.Windows.Forms.MouseEventHandler(this.TitleBar_MouseUp);
            // 
            // label1
            // 
            this.label1.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label1.Location = new System.Drawing.Point(12, 6);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(191, 16);
            this.label1.TabIndex = 1;
            this.label1.Text = "MachineLanguageSimulator";
            // 
            // button1
            // 
            this.button1.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button1.BackgroundImage")));
            this.button1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.button1.Dock = System.Windows.Forms.DockStyle.Right;
            this.button1.FlatAppearance.BorderSize = 0;
            this.button1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button1.Location = new System.Drawing.Point(1140, 0);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(37, 26);
            this.button1.TabIndex = 0;
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // DataGrp
            // 
            this.DataGrp.Controls.Add(this.grpRegisters);
            this.DataGrp.Controls.Add(this.grpMemory);
            this.DataGrp.Location = new System.Drawing.Point(529, 32);
            this.DataGrp.Name = "DataGrp";
            this.DataGrp.Size = new System.Drawing.Size(636, 611);
            this.DataGrp.TabIndex = 1;
            this.DataGrp.TabStop = false;
            // 
            // grpRegisters
            // 
            this.grpRegisters.Controls.Add(this.btnClearRegister);
            this.grpRegisters.Controls.Add(this.listView2);
            this.grpRegisters.Dock = System.Windows.Forms.DockStyle.Left;
            this.grpRegisters.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpRegisters.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.grpRegisters.Location = new System.Drawing.Point(3, 19);
            this.grpRegisters.Name = "grpRegisters";
            this.grpRegisters.Size = new System.Drawing.Size(295, 589);
            this.grpRegisters.TabIndex = 1;
            this.grpRegisters.TabStop = false;
            this.grpRegisters.Text = "Registers";
            // 
            // btnClearRegister
            // 
            this.btnClearRegister.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.btnClearRegister.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnClearRegister.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnClearRegister.Location = new System.Drawing.Point(3, 556);
            this.btnClearRegister.Name = "btnClearRegister";
            this.btnClearRegister.Size = new System.Drawing.Size(289, 30);
            this.btnClearRegister.TabIndex = 5;
            this.btnClearRegister.Text = "Clear";
            this.btnClearRegister.UseVisualStyleBackColor = true;
            this.btnClearRegister.Click += new System.EventHandler(this.btnClearRegister_Click);
            // 
            // listView2
            // 
            this.listView2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.listView2.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.listView2.FullRowSelect = true;
            this.listView2.HideSelection = false;
            this.listView2.Location = new System.Drawing.Point(6, 22);
            this.listView2.Name = "listView2";
            this.listView2.Size = new System.Drawing.Size(283, 528);
            this.listView2.TabIndex = 4;
            this.listView2.UseCompatibleStateImageBehavior = false;
            this.listView2.View = System.Windows.Forms.View.Details;
            // 
            // grpMemory
            // 
            this.grpMemory.Controls.Add(this.btnClear);
            this.grpMemory.Controls.Add(this.btnWrite);
            this.grpMemory.Controls.Add(this.listView1);
            this.grpMemory.Dock = System.Windows.Forms.DockStyle.Right;
            this.grpMemory.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpMemory.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.grpMemory.Location = new System.Drawing.Point(304, 19);
            this.grpMemory.Name = "grpMemory";
            this.grpMemory.Size = new System.Drawing.Size(329, 589);
            this.grpMemory.TabIndex = 0;
            this.grpMemory.TabStop = false;
            this.grpMemory.Text = "Memory";
            // 
            // btnClear
            // 
            this.btnClear.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnClear.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnClear.Location = new System.Drawing.Point(184, 552);
            this.btnClear.Name = "btnClear";
            this.btnClear.Size = new System.Drawing.Size(135, 30);
            this.btnClear.TabIndex = 5;
            this.btnClear.Text = "Clear";
            this.btnClear.UseVisualStyleBackColor = true;
            this.btnClear.Click += new System.EventHandler(this.btnClear_Click);
            // 
            // btnWrite
            // 
            this.btnWrite.Font = new System.Drawing.Font("Segoe UI", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnWrite.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnWrite.Location = new System.Drawing.Point(10, 553);
            this.btnWrite.Name = "btnWrite";
            this.btnWrite.Size = new System.Drawing.Size(140, 30);
            this.btnWrite.TabIndex = 4;
            this.btnWrite.Text = "Write Instructions";
            this.btnWrite.UseVisualStyleBackColor = true;
            this.btnWrite.Click += new System.EventHandler(this.btnWrite_Click);
            // 
            // listView1
            // 
            this.listView1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.listView1.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.listView1.FullRowSelect = true;
            this.listView1.HideSelection = false;
            this.listView1.Location = new System.Drawing.Point(6, 22);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(313, 525);
            this.listView1.TabIndex = 3;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.View = System.Windows.Forms.View.Details;
            // 
            // grbScreen
            // 
            this.grbScreen.Controls.Add(this.btnTogglePrintChars);
            this.grbScreen.Controls.Add(this.btnClearScreen);
            this.grbScreen.Controls.Add(this.txtScreen);
            this.grbScreen.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grbScreen.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.grbScreen.Location = new System.Drawing.Point(12, 32);
            this.grbScreen.Name = "grbScreen";
            this.grbScreen.Size = new System.Drawing.Size(511, 132);
            this.grbScreen.TabIndex = 6;
            this.grbScreen.TabStop = false;
            this.grbScreen.Text = "Screen";
            // 
            // btnTogglePrintChars
            // 
            this.btnTogglePrintChars.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnTogglePrintChars.Location = new System.Drawing.Point(283, 100);
            this.btnTogglePrintChars.Name = "btnTogglePrintChars";
            this.btnTogglePrintChars.Size = new System.Drawing.Size(225, 29);
            this.btnTogglePrintChars.TabIndex = 7;
            this.btnTogglePrintChars.Text = "TogglePrintChars";
            this.btnTogglePrintChars.UseVisualStyleBackColor = true;
            this.btnTogglePrintChars.Click += new System.EventHandler(this.btnTogglePrintChars_Click);
            // 
            // btnClearScreen
            // 
            this.btnClearScreen.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnClearScreen.Location = new System.Drawing.Point(6, 101);
            this.btnClearScreen.Name = "btnClearScreen";
            this.btnClearScreen.Size = new System.Drawing.Size(274, 26);
            this.btnClearScreen.TabIndex = 6;
            this.btnClearScreen.Text = "Clear";
            this.btnClearScreen.UseVisualStyleBackColor = true;
            this.btnClearScreen.Click += new System.EventHandler(this.btnClearScreen_Click);
            // 
            // txtScreen
            // 
            this.txtScreen.Location = new System.Drawing.Point(6, 19);
            this.txtScreen.MaxLength = 0;
            this.txtScreen.Multiline = true;
            this.txtScreen.Name = "txtScreen";
            this.txtScreen.ReadOnly = true;
            this.txtScreen.Size = new System.Drawing.Size(499, 78);
            this.txtScreen.TabIndex = 0;
            // 
            // grpHold
            // 
            this.grpHold.Controls.Add(this.grpDescription);
            this.grpHold.Controls.Add(this.btnExecute);
            this.grpHold.Controls.Add(this.lbProgramCounter);
            this.grpHold.Controls.Add(this.lbInstructionRegister);
            this.grpHold.Controls.Add(this.btnDecode);
            this.grpHold.Controls.Add(this.btnRunOneCycle);
            this.grpHold.Controls.Add(this.btnRunUntillHalt);
            this.grpHold.Controls.Add(this.btnFetch);
            this.grpHold.Controls.Add(this.txtPC);
            this.grpHold.Controls.Add(this.txtIR);
            this.grpHold.Location = new System.Drawing.Point(15, 167);
            this.grpHold.Name = "grpHold";
            this.grpHold.Size = new System.Drawing.Size(505, 463);
            this.grpHold.TabIndex = 7;
            this.grpHold.TabStop = false;
            // 
            // grpDescription
            // 
            this.grpDescription.Controls.Add(this.label4);
            this.grpDescription.Controls.Add(this.txtDescription);
            this.grpDescription.Controls.Add(this.txtY);
            this.grpDescription.Controls.Add(this.txtX);
            this.grpDescription.Controls.Add(this.txtR);
            this.grpDescription.Controls.Add(this.lbY);
            this.grpDescription.Controls.Add(this.lbX);
            this.grpDescription.Controls.Add(this.lbR);
            this.grpDescription.Controls.Add(this.txtOpCode);
            this.grpDescription.Controls.Add(this.lbCode);
            this.grpDescription.Controls.Add(this.lbOC);
            this.grpDescription.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grpDescription.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.grpDescription.Location = new System.Drawing.Point(234, 22);
            this.grpDescription.Name = "grpDescription";
            this.grpDescription.Size = new System.Drawing.Size(265, 202);
            this.grpDescription.TabIndex = 15;
            this.grpDescription.TabStop = false;
            this.grpDescription.Text = "InstructionDescription";
            // 
            // label4
            // 
            this.label4.Location = new System.Drawing.Point(6, 89);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(92, 20);
            this.label4.TabIndex = 10;
            this.label4.Text = "Description";
            // 
            // txtDescription
            // 
            this.txtDescription.Location = new System.Drawing.Point(6, 112);
            this.txtDescription.MaxLength = 0;
            this.txtDescription.Multiline = true;
            this.txtDescription.Name = "txtDescription";
            this.txtDescription.ReadOnly = true;
            this.txtDescription.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.txtDescription.Size = new System.Drawing.Size(253, 84);
            this.txtDescription.TabIndex = 9;
            // 
            // txtY
            // 
            this.txtY.Location = new System.Drawing.Point(227, 80);
            this.txtY.MaxLength = 0;
            this.txtY.Multiline = true;
            this.txtY.Name = "txtY";
            this.txtY.ReadOnly = true;
            this.txtY.Size = new System.Drawing.Size(32, 25);
            this.txtY.TabIndex = 8;
            // 
            // txtX
            // 
            this.txtX.Location = new System.Drawing.Point(227, 53);
            this.txtX.MaxLength = 0;
            this.txtX.Multiline = true;
            this.txtX.Name = "txtX";
            this.txtX.ReadOnly = true;
            this.txtX.Size = new System.Drawing.Size(32, 25);
            this.txtX.TabIndex = 7;
            // 
            // txtR
            // 
            this.txtR.Location = new System.Drawing.Point(227, 28);
            this.txtR.MaxLength = 0;
            this.txtR.Multiline = true;
            this.txtR.Name = "txtR";
            this.txtR.ReadOnly = true;
            this.txtR.Size = new System.Drawing.Size(32, 25);
            this.txtR.TabIndex = 6;
            // 
            // lbY
            // 
            this.lbY.Location = new System.Drawing.Point(198, 79);
            this.lbY.Name = "lbY";
            this.lbY.Size = new System.Drawing.Size(23, 26);
            this.lbY.TabIndex = 5;
            this.lbY.Text = "?";
            // 
            // lbX
            // 
            this.lbX.Location = new System.Drawing.Point(198, 53);
            this.lbX.Name = "lbX";
            this.lbX.Size = new System.Drawing.Size(23, 26);
            this.lbX.TabIndex = 4;
            this.lbX.Text = "?";
            // 
            // lbR
            // 
            this.lbR.Location = new System.Drawing.Point(198, 28);
            this.lbR.Name = "lbR";
            this.lbR.Size = new System.Drawing.Size(23, 26);
            this.lbR.TabIndex = 3;
            this.lbR.Text = "?";
            // 
            // txtOpCode
            // 
            this.txtOpCode.Location = new System.Drawing.Point(117, 28);
            this.txtOpCode.MaxLength = 0;
            this.txtOpCode.Multiline = true;
            this.txtOpCode.Name = "txtOpCode";
            this.txtOpCode.ReadOnly = true;
            this.txtOpCode.Size = new System.Drawing.Size(32, 25);
            this.txtOpCode.TabIndex = 2;
            // 
            // lbCode
            // 
            this.lbCode.Location = new System.Drawing.Point(30, 45);
            this.lbCode.Name = "lbCode";
            this.lbCode.Size = new System.Drawing.Size(81, 20);
            this.lbCode.TabIndex = 1;
            this.lbCode.Text = "????";
            this.lbCode.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lbOC
            // 
            this.lbOC.Location = new System.Drawing.Point(30, 25);
            this.lbOC.Name = "lbOC";
            this.lbOC.Size = new System.Drawing.Size(81, 20);
            this.lbOC.TabIndex = 0;
            this.lbOC.Text = "OpCode";
            // 
            // btnExecute
            // 
            this.btnExecute.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnExecute.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnExecute.Location = new System.Drawing.Point(62, 243);
            this.btnExecute.Name = "btnExecute";
            this.btnExecute.Size = new System.Drawing.Size(384, 26);
            this.btnExecute.TabIndex = 12;
            this.btnExecute.Text = "Execute";
            this.btnExecute.UseVisualStyleBackColor = true;
            this.btnExecute.Click += new System.EventHandler(this.btnExecute_Click);
            // 
            // lbProgramCounter
            // 
            this.lbProgramCounter.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbProgramCounter.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.lbProgramCounter.Location = new System.Drawing.Point(9, 19);
            this.lbProgramCounter.Name = "lbProgramCounter";
            this.lbProgramCounter.Size = new System.Drawing.Size(156, 18);
            this.lbProgramCounter.TabIndex = 4;
            this.lbProgramCounter.Text = "ProgramCounter";
            // 
            // lbInstructionRegister
            // 
            this.lbInstructionRegister.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbInstructionRegister.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.lbInstructionRegister.Location = new System.Drawing.Point(13, 142);
            this.lbInstructionRegister.Name = "lbInstructionRegister";
            this.lbInstructionRegister.Size = new System.Drawing.Size(156, 18);
            this.lbInstructionRegister.TabIndex = 9;
            this.lbInstructionRegister.Text = "InstructionRegister";
            // 
            // btnDecode
            // 
            this.btnDecode.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnDecode.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnDecode.Location = new System.Drawing.Point(12, 198);
            this.btnDecode.Name = "btnDecode";
            this.btnDecode.Size = new System.Drawing.Size(163, 26);
            this.btnDecode.TabIndex = 10;
            this.btnDecode.Text = "Decode";
            this.btnDecode.UseVisualStyleBackColor = true;
            this.btnDecode.Click += new System.EventHandler(this.btnDecode_Click);
            // 
            // btnRunOneCycle
            // 
            this.btnRunOneCycle.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnRunOneCycle.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnRunOneCycle.Location = new System.Drawing.Point(6, 373);
            this.btnRunOneCycle.Name = "btnRunOneCycle";
            this.btnRunOneCycle.Size = new System.Drawing.Size(493, 39);
            this.btnRunOneCycle.TabIndex = 14;
            this.btnRunOneCycle.Text = "RunOneCycle";
            this.btnRunOneCycle.UseVisualStyleBackColor = true;
            this.btnRunOneCycle.Click += new System.EventHandler(this.btnRunOneCycle_Click);
            // 
            // btnRunUntillHalt
            // 
            this.btnRunUntillHalt.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnRunUntillHalt.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnRunUntillHalt.Location = new System.Drawing.Point(6, 418);
            this.btnRunUntillHalt.Name = "btnRunUntillHalt";
            this.btnRunUntillHalt.Size = new System.Drawing.Size(493, 39);
            this.btnRunUntillHalt.TabIndex = 13;
            this.btnRunUntillHalt.Text = "RunUntillHalt";
            this.btnRunUntillHalt.UseVisualStyleBackColor = true;
            this.btnRunUntillHalt.Click += new System.EventHandler(this.btnRunUntillHalt_Click);
            // 
            // btnFetch
            // 
            this.btnFetch.ForeColor = System.Drawing.SystemColors.Desktop;
            this.btnFetch.Location = new System.Drawing.Point(9, 75);
            this.btnFetch.Name = "btnFetch";
            this.btnFetch.Size = new System.Drawing.Size(163, 26);
            this.btnFetch.TabIndex = 7;
            this.btnFetch.Text = "Fetch";
            this.btnFetch.UseVisualStyleBackColor = true;
            this.btnFetch.Click += new System.EventHandler(this.btnFetch_Click);
            // 
            // txtPC
            // 
            this.txtPC.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.txtPC.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtPC.Location = new System.Drawing.Point(9, 40);
            this.txtPC.MaxLength = 2;
            this.txtPC.Name = "txtPC";
            this.txtPC.Size = new System.Drawing.Size(160, 29);
            this.txtPC.TabIndex = 3;
            this.txtPC.Text = "00";
            this.txtPC.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.txtPC.TextChanged += new System.EventHandler(this.txtPC_TextChanged);
            this.txtPC.Enter += new System.EventHandler(this.txtPC_Enter);
            // 
            // txtIR
            // 
            this.txtIR.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.txtIR.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtIR.Location = new System.Drawing.Point(12, 163);
            this.txtIR.MaxLength = 4;
            this.txtIR.Name = "txtIR";
            this.txtIR.ReadOnly = true;
            this.txtIR.Size = new System.Drawing.Size(160, 29);
            this.txtIR.TabIndex = 8;
            this.txtIR.Text = "0000";
            this.txtIR.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2.ForeColor = System.Drawing.SystemColors.Desktop;
            this.button2.Location = new System.Drawing.Point(9, 214);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(381, 26);
            this.button2.TabIndex = 12;
            this.button2.Text = "Decode";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this.label2.Font = new System.Drawing.Font("Segoe UI", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label2.Location = new System.Drawing.Point(77, 656);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(1063, 21);
            this.label2.TabIndex = 8;
            this.label2.Text = "this app was developed in Faculty of Computers and Artificial intelligince, Cairo" + " University as part of CS213 under supervision of Dr. Mohamed El-Ramly.";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.ClientSize = new System.Drawing.Size(1177, 676);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.grpHold);
            this.Controls.Add(this.grbScreen);
            this.Controls.Add(this.DataGrp);
            this.Controls.Add(this.TitleBar);
            this.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Location = new System.Drawing.Point(15, 15);
            this.Name = "Form1";
            this.TitleBar.ResumeLayout(false);
            this.DataGrp.ResumeLayout(false);
            this.grpRegisters.ResumeLayout(false);
            this.grpMemory.ResumeLayout(false);
            this.grbScreen.ResumeLayout(false);
            this.grbScreen.PerformLayout();
            this.grpHold.ResumeLayout(false);
            this.grpHold.PerformLayout();
            this.grpDescription.ResumeLayout(false);
            this.grpDescription.PerformLayout();
            this.ResumeLayout(false);
        }

        private System.Windows.Forms.Label label2;

        private System.Windows.Forms.Button btnTogglePrintChars;

        private System.Windows.Forms.Button btnExecute;
        private System.Windows.Forms.Button btnRunUntillHalt;
        private System.Windows.Forms.Button btnRunOneCycle;

        private System.Windows.Forms.Button button2;

        private System.Windows.Forms.TextBox txtR;
        private System.Windows.Forms.TextBox txtX;
        private System.Windows.Forms.TextBox txtY;
        private System.Windows.Forms.TextBox txtDescription;
        private System.Windows.Forms.Label label4;

        private System.Windows.Forms.Label lbR;
        private System.Windows.Forms.Label lbX;
        private System.Windows.Forms.Label lbY;

        private System.Windows.Forms.TextBox txtOpCode;

        private System.Windows.Forms.Label lbCode;

        private System.Windows.Forms.Label lbOC;

        private System.Windows.Forms.GroupBox grpDescription;

        private System.Windows.Forms.Button btnDecode;

        private System.Windows.Forms.TextBox txtIR;
        private System.Windows.Forms.Label lbInstructionRegister;

        private System.Windows.Forms.Button btnFetch;

        private System.Windows.Forms.TextBox txtPC;
        private System.Windows.Forms.Label lbProgramCounter;

        private System.Windows.Forms.GroupBox grpHold;

        private System.Windows.Forms.GroupBox grbScreen;
        private System.Windows.Forms.Button btnClearScreen;
        private System.Windows.Forms.TextBox txtScreen;

        private System.Windows.Forms.Button btnClearRegister;

        private System.Windows.Forms.ListView listView2;

        private System.Windows.Forms.GroupBox grpRegisters;

        private System.Windows.Forms.Button btnClear;

        private System.Windows.Forms.Button btnWrite;

        private System.Windows.Forms.ListView listView1;

        private System.Windows.Forms.GroupBox grpMemory;

        private System.Windows.Forms.GroupBox DataGrp;

        private System.Windows.Forms.Label label1;

        private System.Windows.Forms.Button button1;

        private System.Windows.Forms.Panel TitleBar;

        #endregion
    }
}