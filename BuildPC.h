#pragma once

namespace yavtilte {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ BuildPC
	/// </summary>
	public ref class BuildPC : public System::Windows::Forms::Form
	{
	public:
		BuildPC(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~BuildPC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(211, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 90);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Build";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(96, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 90);
			this->button2->TabIndex = 1;
			this->button2->Text = L"System Unit";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(325, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 90);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Devices";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// BuildPC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 455);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"BuildPC";
			this->Text = L"BuildPC";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
