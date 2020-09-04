#pragma once

namespace Project1MyfirstappinCPP {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnContinue;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button6;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->CausesValidation = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(82, -4);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 63);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CadetBlue;
			this->button1->Location = System::Drawing::Point(276, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"2014";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->CausesValidation = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(27, 49);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(401, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Marvel Cinematic Universe";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button2->Location = System::Drawing::Point(104, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(238, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Guardians of the Galaxy";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(24, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(379, 196);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(-3, 520);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 41);
			this->button4->TabIndex = 5;
			this->button4->Text = L"back";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// btnContinue
			// 
			this->btnContinue->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnContinue->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnContinue->Location = System::Drawing::Point(338, 520);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(115, 41);
			this->btnContinue->TabIndex = 6;
			this->btnContinue->Text = L"Continue";
			this->btnContinue->UseVisualStyleBackColor = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &MyForm::btnContinue_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(456, 282);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::CadetBlue;
			this->button6->Location = System::Drawing::Point(-3, 429);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(177, 36);
			this->button6->TabIndex = 8;
			this->button6->Text = L"‧ Sci-fi / Adventure";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(450, 560);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"Marvel App";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->VisibleChanged += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Hi";
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"venum")));
	}
	};
}

