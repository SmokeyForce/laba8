#pragma once
#include "Monitor.h"
#include "Mouse.h"
namespace yavtilte {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SelectDevices
	/// </summary>
	public ref class SelectDevices : public System::Windows::Forms::Form
	{
	public:
		List<Monitor^>^ monitors;
		List<Mouse^>^ mouses;
	public: Mouse^ selMouse;
	private: System::Windows::Forms::ListView^ listView3;
	public:
	private: System::Windows::Forms::ColumnHeader^ columnHeader14;
	private: System::Windows::Forms::ColumnHeader^ columnHeader15;
	private: System::Windows::Forms::ColumnHeader^ columnHeader16;
	private: System::Windows::Forms::ColumnHeader^ columnHeader17;
	private: System::Windows::Forms::ColumnHeader^ columnHeader18;
	private: System::Windows::Forms::ColumnHeader^ columnHeader21;
	public: Monitor^ selMon;
		
	public: SelectDevices(void)
		{
			InitializeComponent();
			StreamReader^ sr = gcnew StreamReader("monitors.txt");
			monitors = gcnew List<Monitor^>();
			while (!sr->EndOfStream)
			{
				Monitor^ m = gcnew Monitor();
				m->readFromFile(sr);
				monitors->Add(m);
				System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(9) {
					L"",m->brand,m->model,m->price.ToString(),m->hhz.ToString(),m->inch.ToString()
						
				}, -1));
				listView3->Items->Add(listViewItem1);
			}
			sr->Close();
			sr = gcnew StreamReader("mouses.txt");
			mouses = gcnew List<Mouse^>();
			while (!sr->EndOfStream)
			{
				Mouse^ mo = gcnew Mouse();
				mo->readFromFile(sr);
				mouses->Add(mo);
				System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(9) {
					L"", mo->brand, mo->model, mo->price.ToString(),mo->numOfButtons.ToString(),mo->backlight,mo->colour

				}, -1));
				listView2->Items->Add(listViewItem2);
			}
			sr->Close();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SelectDevices()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;










	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::ColumnHeader^ columnHeader13;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader21 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1021, 470);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 64);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SelectDevices::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(296, 470);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 64);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SelectDevices::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(280, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Select your Monitor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1043, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Select your Mouse";
			// 
			// listView2
			// 
			this->listView2->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader5, this->columnHeader6,
					this->columnHeader7, this->columnHeader10, this->columnHeader11, this->columnHeader12, this->columnHeader13
			});
			this->listView2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listView2->HideSelection = false;
			this->listView2->HoverSelection = true;
			this->listView2->Location = System::Drawing::Point(749, 112);
			this->listView2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listView2->MultiSelect = false;
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(663, 314);
			this->listView2->TabIndex = 7;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->ItemActivate += gcnew System::EventHandler(this, &SelectDevices::listView2_ItemActivate);
			// 
			// columnHeader5
			// 
			this->columnHeader5->DisplayIndex = 6;
			this->columnHeader5->Text = L"";
			this->columnHeader5->Width = 0;
			// 
			// columnHeader6
			// 
			this->columnHeader6->DisplayIndex = 0;
			this->columnHeader6->Text = L"Brand";
			this->columnHeader6->Width = 170;
			// 
			// columnHeader7
			// 
			this->columnHeader7->DisplayIndex = 1;
			this->columnHeader7->Text = L"Model";
			this->columnHeader7->Width = 140;
			// 
			// columnHeader10
			// 
			this->columnHeader10->DisplayIndex = 2;
			this->columnHeader10->Text = L"Price";
			this->columnHeader10->Width = 88;
			// 
			// columnHeader11
			// 
			this->columnHeader11->DisplayIndex = 3;
			this->columnHeader11->Text = L"Buttons";
			this->columnHeader11->Width = 135;
			// 
			// columnHeader12
			// 
			this->columnHeader12->DisplayIndex = 4;
			this->columnHeader12->Text = L"Backlight";
			this->columnHeader12->Width = 156;
			// 
			// columnHeader13
			// 
			this->columnHeader13->DisplayIndex = 5;
			this->columnHeader13->Text = L"Color";
			this->columnHeader13->Width = 100;
			// 
			// listView3
			// 
			this->listView3->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader14, this->columnHeader15,
					this->columnHeader16, this->columnHeader17, this->columnHeader18, this->columnHeader21
			});
			this->listView3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listView3->HideSelection = false;
			this->listView3->HoverSelection = true;
			this->listView3->Location = System::Drawing::Point(33, 112);
			this->listView3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listView3->MultiSelect = false;
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(663, 314);
			this->listView3->TabIndex = 8;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->ItemActivate += gcnew System::EventHandler(this, &SelectDevices::listView3_ItemActivate);
			// 
			// columnHeader14
			// 
			this->columnHeader14->DisplayIndex = 4;
			this->columnHeader14->Text = L"";
			this->columnHeader14->Width = 0;
			// 
			// columnHeader15
			// 
			this->columnHeader15->DisplayIndex = 0;
			this->columnHeader15->Text = L"Brand";
			this->columnHeader15->Width = 120;
			// 
			// columnHeader16
			// 
			this->columnHeader16->DisplayIndex = 1;
			this->columnHeader16->Text = L"Model";
			this->columnHeader16->Width = 127;
			// 
			// columnHeader17
			// 
			this->columnHeader17->DisplayIndex = 2;
			this->columnHeader17->Text = L"Price";
			this->columnHeader17->Width = 87;
			// 
			// columnHeader18
			// 
			this->columnHeader18->DisplayIndex = 3;
			this->columnHeader18->Text = L"HHz";
			this->columnHeader18->Width = 94;
			// 
			// columnHeader21
			// 
			this->columnHeader21->Text = L"Inch";
			this->columnHeader21->Width = 89;
			// 
			// SelectDevices
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1425, 624);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SelectDevices";
			this->Text = L"SelectDevices";
			this->Load += gcnew System::EventHandler(this, &SelectDevices::SelectDevices_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SelectDevices_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void listView2_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
	this->selMouse = this->mouses[listView2->SelectedIndices[0]];
	for each (ListViewItem ^ k in listView2->Items) {
		k->BackColor = SystemColors::Window;
	}
	listView2->Items[listView2->SelectedIndices[0]]->BackColor = Color::LightBlue;
	this->Refresh();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void listView3_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
	this->selMon = this->monitors[listView3->SelectedIndices[0]];
	for each (ListViewItem ^ k in listView3->Items) {
		k->BackColor = SystemColors::Window;
	}
	listView3->Items[listView3->SelectedIndices[0]]->BackColor = Color::LightBlue;
	this->Refresh();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
