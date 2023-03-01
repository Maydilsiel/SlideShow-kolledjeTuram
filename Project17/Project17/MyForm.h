#pragma once

namespace Project17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DirectoryInfo^ di;
			di = gcnew DirectoryInfo(Environment::GetFolderPath(Environment::SpecialFolder::MyPictures));
			aPath = di->FullName;
			this->Text = aPath;
			imageList = gcnew System::Collections::Generic::List<String^>;
			FileList(aPath);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: String^ aPath;
		   System::Collections::Generic::List<String^>^ imageList;
		   int cImg;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(751, 380);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 333);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(751, 47);
			this->panel1->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Right;
			this->button4->Location = System::Drawing::Point(676, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 47);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Right;
			this->button3->Location = System::Drawing::Point(409, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(267, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L">>";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->Location = System::Drawing::Point(75, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"<<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Left;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Папка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(751, 380);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"SlideShow";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ fb = gcnew FolderBrowserDialog();
		fb->Description = "Выберите папку, \n" + "В котором находится иллюстрации";
		fb->ShowNewFolderButton = false;
		fb->SelectedPath = aPath;
		if (fb->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			aPath = fb->SelectedPath;
			this->Text = aPath;
			if (!FileList(fb->SelectedPath))
				pictureBox1->Image = nullptr;
		}
	}

	private: void ShowPicture(String^ aPicture) {
		pictureBox1->Image = gcnew Bitmap(aPath + "\\" + imageList[cImg]);
		this->Text = "Слайд шоу:" + aPath + "\\" + imageList[cImg];
		pictureBox1->Visible = true;
	}

		   private: System::Boolean FileList(String^ aPath) {
			   DirectoryInfo^ di = gcnew DirectoryInfo(aPath);
			   array<FileInfo^>^ fi = di->GetFiles("*.jpg");
			   imageList->Clear();
			   button2->Enabled = true;
			   button3->Enabled = true;
			   for each (FileInfo ^fc in fi) {
				   imageList->Add(fc->Name);
			   }
			   this->Text = aPath;
			   if (imageList->Count == 0)
				   return false;
			   else
			   {
				   cImg = 0;
					   ShowPicture(aPath + "\\" + imageList[cImg]);
				   button2->Enabled = false;
				   if (imageList->Count == 1) button3->Enabled = false;
				   this->Text = "Слайд шоу:" + aPath + "\\" + imageList[cImg];
				   return true;
			   }
		   }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!button3->Enabled) button3->Enabled = true;
	if (cImg > 0) {
		cImg--;
		ShowPicture(aPath + "\\" + imageList[cImg]);
		if (cImg == 0) {
			button2->Enabled = false;
		}
	}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!button2->Enabled) button2->Enabled = true;
	if (cImg < imageList->Count) {
		cImg++;
		ShowPicture(aPath + "\\" + imageList[cImg]);
		if (cImg == imageList->Count - 1) {
			button3->Enabled = false;
		}
	}
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
