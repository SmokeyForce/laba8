#pragma once
#include "SelectDevices.h"
#include "SelectSystemUnit.h"
#include "UpdateDrivers.h"
#include "SystemUnit.h"
#include "Mouse.h"
#include "Monitor.h"
namespace yavtilte {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	/// 
	
	public ref class Main : public System::Windows::Forms::Form
	{
	public: static SystemUnit^ selSU;
		   static Monitor^ selMon;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public: static Mouse^ selMouse;
	public:
		Main(void)
		{
			InitializeComponent();
			StreamWriter^ sw = gcnew StreamWriter("su.txt");
			SystemUnit^ s = gcnew SystemUnit();
			s->setUnitInfo("Papucious1", "Vinnytsya", 100, "black", "mid-tower");
			s->setComponents("asusgromyako", "intelcorei14.1", 32);
			s->writeToFile(sw);
			s->setUnitInfo("Papuas", "Venecia", 100, "black", "full-tower");
			s->setComponents("asusgromyako", "intelcorei14.1", 32);
			s->writeToFile(sw);
			s->setUnitInfo("Vitold", "Rivia", 100, "black", "low-tower");
			s->setComponents("asusgromyako", "intelcorei14.1", 32);
			s->writeToFile(sw);
			sw->Close();
			sw = gcnew StreamWriter("mouses.txt");
			Mouse^ m = gcnew Mouse();
			m->setInfo("Razer", "Deathadder", 300);
			m->setMouseInfo(5, "black", "blue");
			m->writeToFile(sw);
			m->setInfo("Steelseries", "prikol", 300);
			m->setMouseInfo(5, "blue", "black");
			m->writeToFile(sw);
			m->setInfo("a4tech", "n7", 100);
			m->setMouseInfo(5, "black", "none");
			m->writeToFile(sw);
			sw->Close();
			sw = gcnew StreamWriter("monitors.txt");
			Monitor^ mo = gcnew Monitor();
			mo->setInfo("Samsung", "roflan300", 300);
			mo->setOtherInfo(69);
			mo->setResolution(27);
			mo->writeToFile(sw);
			mo->setInfo("Vitold", "iz Rivii", 300);
			mo->setOtherInfo(69);
			mo->setResolution(27);
			mo->writeToFile(sw);
			sw->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(134, 198);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 84);
			this->button1->TabIndex = 0;
			this->button1->Text = L"System Unit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(336, 198);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 84);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Devices";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(233, 304);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 84);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Build";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"This program created for selecting,uprating and connecting pieces ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"of your new,created PC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(371, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"This program created by Alexander Karpov\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(467, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"second year student of Khmelnitskyi National University";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(130, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(367, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Now, select your System Unit and Devices ";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 427);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Main";
			this->Text = L"Main";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectSystemUnit^ form = gcnew SelectSystemUnit();
		form->ShowDialog();
		selSU = form->selSU;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectDevices^ form = gcnew SelectDevices();
		form->ShowDialog();
		selMon = form->selMon;
		selMouse = form->selMouse;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selSU == nullptr || selMon == nullptr || selMouse == nullptr)
		{
			MessageBox::Show(this, "You have not selected one or more components", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			UpdateDrivers^ form = gcnew UpdateDrivers(selSU, selMon, selMouse);
			form->ShowDialog();
		}
}
};
}
