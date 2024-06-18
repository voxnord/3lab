#pragma once

namespace My3lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для My3labForm
	/// </summary>
	public ref class My3labForm : public System::Windows::Forms::Form
	{
	public:
		My3labForm(void)
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
		~My3labForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Open;

	private: System::Windows::Forms::ToolStripMenuItem^ Save;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAs;
	private: System::Windows::Forms::ToolStripMenuItem^ Close;




	private: System::Windows::Forms::ToolStripMenuItem^ дополнительноToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ количествоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ повторениеToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ TextBox;





	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Close = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->дополнительноToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->количествоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->повторениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->дополнительноToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(947, 33);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->Open,
					this->Save, this->SaveAs, this->Close
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// Open
			// 
			this->Open->Name = L"Open";
			this->Open->Size = System::Drawing::Size(232, 34);
			this->Open->Text = L"Открыть";
			this->Open->Click += gcnew System::EventHandler(this, &My3labForm::Open_Click);
			// 
			// Save
			// 
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(232, 34);
			this->Save->Text = L"Сохранить";
			// 
			// SaveAs
			// 
			this->SaveAs->Name = L"SaveAs";
			this->SaveAs->Size = System::Drawing::Size(232, 34);
			this->SaveAs->Text = L"Сохранить как";
			// 
			// Close
			// 
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(232, 34);
			this->Close->Text = L"Закрыть";
			// 
			// дополнительноToolStripMenuItem
			// 
			this->дополнительноToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->количествоToolStripMenuItem,
					this->повторениеToolStripMenuItem
			});
			this->дополнительноToolStripMenuItem->Name = L"дополнительноToolStripMenuItem";
			this->дополнительноToolStripMenuItem->Size = System::Drawing::Size(156, 29);
			this->дополнительноToolStripMenuItem->Text = L"Дополнительно";
			// 
			// количествоToolStripMenuItem
			// 
			this->количествоToolStripMenuItem->Name = L"количествоToolStripMenuItem";
			this->количествоToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->количествоToolStripMenuItem->Text = L"Количество %";
			// 
			// повторениеToolStripMenuItem
			// 
			this->повторениеToolStripMenuItem->Name = L"повторениеToolStripMenuItem";
			this->повторениеToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->повторениеToolStripMenuItem->Text = L"Повторение";
			// 
			// TextBox
			// 
			this->TextBox->Location = System::Drawing::Point(12, 36);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(923, 577);
			this->TextBox->TabIndex = 3;
			// 
			// My3labForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 625);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"My3labForm";
			this->ShowIcon = false;
			this->Text = L"Lab 3 - Text Editor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Масштабирование текстового поля
		// Открытие файла
		// Сохранение файла
		// Сохранение файла как
		// Закрытие программы
		// Подсчёт %
		// Повторение слов

private: System::Void Open_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
};
}
