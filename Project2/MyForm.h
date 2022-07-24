#pragma once
#include "MyForm1.h"
#include <iostream>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <bitset>


//int BinaryCreated(int num)
//{
//	
//}


class Creator
{
private:
	
	int count = 1;
	int correctable;
	int numline_abs = 1;
	int borders_num;
	int count_bourders = 0;
	int mBorders;
	int numBorders = 0;
	int a = 1;
	int numQ = 0;
	int _characterNum = -1;
	int numerical_env;
	int num_ = 1;

	std::vector<std::string> Binary_data_All_In;
	std::vector<std::string> Binary_data_down_sorted;

	std::vector<int> _num_podschet_1;
	std::vector<int> _num_podschet_2;

	std::string previousNum;
	std::string convertdata;
	std::string zero1 = "0";
	std::string zero2 = "0";
	std::string one = "1";
	std::string _data_binary_voc = "1";
	std::string lastnum;
	std::string lastLineToCreateBinaryFile;
	std::string _super_data = "";
	std::string unifi;
	std::vector<std::string> Binary_data_top;
	bool stopper = true;

public:

	std::vector<std::string> vocabulary;
	std::vector<std::string> vocabulary_last;
	std::vector<int> v;
	std::vector<int> vv;
	std::vector<int> d;
	std::vector<int> dd;
	std::vector<int> ddd;
	std::vector<int> ddd_num_count;

	Creator();
	~Creator();
	int BinaryCreated(int num);
	void Create_binaryFile(std::vector<std::string> Binary_mid, std::vector<std::string> Binary_down);
	void Read_In_File(std::string line);
	void Chains_Down();
	void Sorted_base(std::vector<int> k);
	void create_Vocabulary(std::vector<std::string> vocabularys, std::vector<int> originalText, std::vector<std::string>& translated_text);
	void translater(std::vector<int> originalText, std::vector<std::string> vocabularys, std::vector<std::string> translated_text);

	void hhj() {
		std::cout << "Vector size: " << static_cast<int>(v.size()) << std::endl;

		for (int index = 0; index < static_cast<int>(_num_podschet_1.size()); ++index)
			std::cout << _num_podschet_1[index] << " - " << _num_podschet_2[index] << std::endl;
	}
};



namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Папка CD-1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 253);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(542, 23);
			this->progressBar1->TabIndex = 1;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(474, 39);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(84, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Статистика";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Маркер цепи, бит";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(261, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Отменить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(289, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(265, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Выполнить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(459, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(30, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 234);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Чтение данных";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(217, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Алгоритм";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(279, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(403, 233);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Запись результата";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(513, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"label7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 392);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		


		

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		std::vector<std::string> Binary_data_mid;
		std::vector<std::string> Binary_data_down;

		String^ Filename = textBox1->Text;
		std::string iis = msclr::interop::marshal_as<std::string>(Filename);
		Creator cr;
		cr.Read_In_File(iis);
		cr.Chains_Down();
		cr.Sorted_base(cr.v);
		cr.create_Vocabulary(cr.vocabulary,cr.vv,Binary_data_mid);
		cr.translater(cr.vv, cr.vocabulary, Binary_data_mid);
		cr.Sorted_base(cr.d);
		cr.create_Vocabulary(cr.vocabulary_last,cr.dd,Binary_data_down);
		cr.translater(cr.dd, cr.vocabulary_last, Binary_data_down);
		cr.Create_binaryFile(Binary_data_mid,Binary_data_down);
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	OpenFileDialog ofd;
	ofd.ShowDialog();
	textBox1->Text = ofd.FileName;
}
};
}
