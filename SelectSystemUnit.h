#pragma once
#include "SystemUnit.h"

namespace yavtilte {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SelectSystemUnit
	/// </summary>
	/// 
	
	public ref class SelectSystemUnit : public System::Windows::Forms::Form
	{

	private:
		List<SystemUnit^>^ systemunits;
	public:
		SystemUnit^ selSU;
		SelectSystemUnit(void)
		{
			InitializeComponent();
			StreamReader^ sr = gcnew StreamReader("su.txt");
			systemunits = gcnew List<SystemUnit^>();
			while (!sr->EndOfStream)
			{
				SystemUnit^ unit = gcnew SystemUnit();
				unit->readFromFile(sr);
				systemunits->Add(unit);
				System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(9) {
					L"",
						unit->brand, unit->model, unit->price.ToString(),
						unit->colour, unit->cpu, unit->size, unit->motherboard, unit->ram.ToString() + " GB"
				}, -1));
				listView1->Items->Add(listViewItem1);
			}
			sr->Close();
		}
		
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SelectSystemUnit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(217, 378);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SelectSystemUnit::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(775, 378);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 64);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SelectSystemUnit::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(422, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select your System Unit";
			this->label1->Click += gcnew System::EventHandler(this, &SelectSystemUnit::label1_Click);
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listView1->HideSelection = false;
			this->listView1->HoverSelection = true;
			this->listView1->Location = System::Drawing::Point(48, 95);
			this->listView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1021, 276);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemActivate += gcnew System::EventHandler(this, &SelectSystemUnit::listView1_ItemActivate);
			// 
			// columnHeader1
			// 
			this->columnHeader1->DisplayIndex = 8;
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 0;
			// 
			// columnHeader2
			// 
			this->columnHeader2->DisplayIndex = 0;
			this->columnHeader2->Text = L"Brand";
			this->columnHeader2->Width = 160;
			// 
			// columnHeader3
			// 
			this->columnHeader3->DisplayIndex = 1;
			this->columnHeader3->Text = L"Model";
			this->columnHeader3->Width = 160;
			// 
			// columnHeader4
			// 
			this->columnHeader4->DisplayIndex = 2;
			this->columnHeader4->Text = L"Price";
			this->columnHeader4->Width = 88;
			// 
			// columnHeader5
			// 
			this->columnHeader5->DisplayIndex = 3;
			this->columnHeader5->Text = L"Color";
			this->columnHeader5->Width = 103;
			// 
			// columnHeader6
			// 
			this->columnHeader6->DisplayIndex = 4;
			this->columnHeader6->Text = L"CPU";
			this->columnHeader6->Width = 200;
			// 
			// columnHeader7
			// 
			this->columnHeader7->DisplayIndex = 5;
			this->columnHeader7->Text = L"Size";
			this->columnHeader7->Width = 150;
			// 
			// columnHeader8
			// 
			this->columnHeader8->DisplayIndex = 6;
			this->columnHeader8->Text = L"Motherboard";
			this->columnHeader8->Width = 190;
			// 
			// columnHeader9
			// 
			this->columnHeader9->DisplayIndex = 7;
			this->columnHeader9->Text = L"Ram";
			this->columnHeader9->Width = 93;
			// 
			// SelectSystemUnit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1111, 494);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SelectSystemUnit";
			this->Text = L"SelectSystemUnit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listView1_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
		this->selSU = this->systemunits[listView1->SelectedIndices[0]];
		for each (ListViewItem^ k in listView1->Items){		
			k->BackColor = SystemColors::Window;
		}
		listView1->Items[listView1->SelectedIndices[0]]->BackColor = Color::LightBlue;
		this->Refresh();
	}
};
}
