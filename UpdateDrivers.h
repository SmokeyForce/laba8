#pragma once
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
	/// —водка дл€ UpdateDrivers
	/// </summary>
	public ref class UpdateDrivers : public System::Windows::Forms::Form
	{
	private:
		SystemUnit^ su;
		Monitor^ mon;
		Mouse^ mouse;
	public:
		UpdateDrivers(void)
		{
			InitializeComponent();
							
				
		}
		UpdateDrivers(SystemUnit^ _su, Monitor^ _mon, Mouse^ _mouse):UpdateDrivers()
		{
			su = _su;
			mon = _mon;
			mouse = _mouse;
			
			
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~UpdateDrivers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(125, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your System unit and Devices:";
			this->label1->Click += gcnew System::EventHandler(this, &UpdateDrivers::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 492);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 87);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Install Drivers";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateDrivers::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(45, 54);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(440, 411);
			this->label2->TabIndex = 2;
			// 
			// UpdateDrivers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 608);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UpdateDrivers";
			this->Text = L"UpdateDrivers";
			this->Load += gcnew System::EventHandler(this, &UpdateDrivers::UpdateDrivers_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateDrivers_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->label2->Text = "You have selected system unit:\n" +
			"Brand: " + su->brand + "\n" +
			"Model: " + su->model + "\n" +
			"Price: " + su->price.ToString() + "\n" +
			"Color: " + su->colour + "\n" +
			"CPU: " + su->cpu + "\n" +
			"Size: " + su->size + "\n" +
			"Motherboard: " + su->motherboard + "\n" +
			"Ram: " + su->ram + "GB \n" + "\n" +
			"Monitor:\n" +
			"Brand: " + mon->brand + "\n" +
			"Model: " + mon->model + "\n" +
			"Price: " + mon->price + "\n" +
			"HHz: " + mon->hhz.ToString() + "\n" +
			"Inch: " + mon->inch.ToString() + "\n\n" +
			"Mouse:\n" +
			"Brand: " + mouse->brand + "\n" +
			"Model: " + mouse->model + "\n" +
			"Price: " + mouse->price + "\n" +
			"Backlight: " + mouse->backlight + "\n" +
			"Color: " + mouse->colour + "\n" +
			"Num of buttons: " + mouse->numOfButtons + "\n";

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Drivers installed! Monitor and mouse connected to system unit!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
