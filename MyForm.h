#pragma once

namespace TABCONTROL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(18, 14);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(594, 392);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Click += gcnew System::EventHandler(this, &MyForm::tabControl1_Click);
			this->tabControl1->DoubleClick += gcnew System::EventHandler(this, &MyForm::tabControl1_DoubleClick);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LightBlue;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(586, 366);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"C++";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(18, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(547, 314);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LightGray;
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(586, 366);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Lua";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(15, 18);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(556, 331);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 420);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabControl1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "A linguagem C foi à base para a criação da linguagem C++, pois a mesma apesar de boa, continha problemas que surgiam de acordo com o aumento do número de linhas de código, sendo assim o C++ veio para solucionar esses e outros problemas menores."
		+ "O criador da linguagem C++ é o senhor Bjarne Stroustrup.";
}
private: System::Void tabControl1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	
	this->richTextBox2->Text = "Meta- tabelas nada mais é que um recurso que proporciona ao desenvolvedor modificar o comportamento de uma determinada tabela."
		+ "Quando trabalhamos com meta - tabelas podemos permitir que a linguagem seja capaz de usar a metodologia Orientada a Objetos, assunto este que veremos mais adiante e também podemos efetuar algumas operações que apesar de parecerem simples retornariam um erro de execução caso as meta - tabelas não fossem usadas.";

}
};
}
