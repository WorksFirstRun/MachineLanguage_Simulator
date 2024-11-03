using System.ComponentModel;

namespace MachineLanguage_GUIApp
{
    partial class InputForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private IContainer components = null;

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
            this.btnSaveInput = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.lbStartMemoryAddress = new System.Windows.Forms.Label();
            this.txtMemoryAddress = new System.Windows.Forms.TextBox();
            this.btnClear = new System.Windows.Forms.Button();
            this.txtInput = new System.Windows.Forms.TextBox();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // btnSaveInput
            // 
            this.btnSaveInput.Location = new System.Drawing.Point(3, 447);
            this.btnSaveInput.Name = "btnSaveInput";
            this.btnSaveInput.Size = new System.Drawing.Size(107, 30);
            this.btnSaveInput.TabIndex = 0;
            this.btnSaveInput.Text = "SaveInput";
            this.btnSaveInput.UseVisualStyleBackColor = true;
            this.btnSaveInput.Click += new System.EventHandler(this.btnSaveInput_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.lbStartMemoryAddress);
            this.groupBox1.Controls.Add(this.txtMemoryAddress);
            this.groupBox1.Controls.Add(this.btnClear);
            this.groupBox1.Controls.Add(this.txtInput);
            this.groupBox1.Controls.Add(this.btnSaveInput);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.Location = new System.Drawing.Point(12, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(347, 483);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "GiveInput";
            // 
            // lbStartMemoryAddress
            // 
            this.lbStartMemoryAddress.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbStartMemoryAddress.Location = new System.Drawing.Point(116, 428);
            this.lbStartMemoryAddress.Name = "lbStartMemoryAddress";
            this.lbStartMemoryAddress.Size = new System.Drawing.Size(122, 17);
            this.lbStartMemoryAddress.TabIndex = 5;
            this.lbStartMemoryAddress.Text = "StartMemoryAddress";
            // 
            // txtMemoryAddress
            // 
            this.txtMemoryAddress.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.txtMemoryAddress.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtMemoryAddress.Location = new System.Drawing.Point(116, 448);
            this.txtMemoryAddress.MaxLength = 2;
            this.txtMemoryAddress.Name = "txtMemoryAddress";
            this.txtMemoryAddress.Size = new System.Drawing.Size(112, 29);
            this.txtMemoryAddress.TabIndex = 4;
            this.txtMemoryAddress.Text = "00";
            this.txtMemoryAddress.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.txtMemoryAddress.TextChanged += new System.EventHandler(this.txtPC_TextChanged);
            this.txtMemoryAddress.Enter += new System.EventHandler(this.txtPC_Enter);
            // 
            // btnClear
            // 
            this.btnClear.Location = new System.Drawing.Point(234, 447);
            this.btnClear.Name = "btnClear";
            this.btnClear.Size = new System.Drawing.Size(107, 30);
            this.btnClear.TabIndex = 2;
            this.btnClear.Text = "Clear";
            this.btnClear.UseVisualStyleBackColor = true;
            this.btnClear.Click += new System.EventHandler(this.btnClear_Click);
            // 
            // txtInput
            // 
            this.txtInput.Dock = System.Windows.Forms.DockStyle.Top;
            this.txtInput.Font = new System.Drawing.Font("Courier New", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtInput.Location = new System.Drawing.Point(3, 22);
            this.txtInput.MaxLength = 2000;
            this.txtInput.Multiline = true;
            this.txtInput.Name = "txtInput";
            this.txtInput.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.txtInput.Size = new System.Drawing.Size(341, 403);
            this.txtInput.TabIndex = 1;
            // 
            // InputForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(371, 507);
            this.Controls.Add(this.groupBox1);
            this.Name = "InputForm";
            this.Text = "InputForm";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
        }

        private System.Windows.Forms.TextBox txtMemoryAddress;
        private System.Windows.Forms.Label lbStartMemoryAddress;

        private System.Windows.Forms.Button btnClear;

        private System.Windows.Forms.TextBox txtInput;

        private System.Windows.Forms.GroupBox groupBox1;

        private System.Windows.Forms.Button btnSaveInput;

        #endregion
    }
}