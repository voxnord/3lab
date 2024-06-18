#pragma once

namespace My3lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::IO;
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
	private: System::Windows::Forms::ToolStripMenuItem^ PercentCount;
	private: System::Windows::Forms::ToolStripMenuItem^ RepeatCount;


	private: System::Windows::Forms::TextBox^ TextBox;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;





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
			this->PercentCount = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RepeatCount = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
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
			this->Save->Click += gcnew System::EventHandler(this, &My3labForm::Save_Click);
			// 
			// SaveAs
			// 
			this->SaveAs->Name = L"SaveAs";
			this->SaveAs->Size = System::Drawing::Size(232, 34);
			this->SaveAs->Text = L"Сохранить как";
			this->SaveAs->Click += gcnew System::EventHandler(this, &My3labForm::SaveAs_Click);
			// 
			// Close
			// 
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(232, 34);
			this->Close->Text = L"Закрыть";
			this->Close->Click += gcnew System::EventHandler(this, &My3labForm::Close_Click);
			// 
			// дополнительноToolStripMenuItem
			// 
			this->дополнительноToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->PercentCount,
					this->RepeatCount
			});
			this->дополнительноToolStripMenuItem->Name = L"дополнительноToolStripMenuItem";
			this->дополнительноToolStripMenuItem->Size = System::Drawing::Size(156, 29);
			this->дополнительноToolStripMenuItem->Text = L"Дополнительно";
			// 
			// PercentCount
			// 
			this->PercentCount->Name = L"PercentCount";
			this->PercentCount->Size = System::Drawing::Size(229, 34);
			this->PercentCount->Text = L"Количество %";
			this->PercentCount->Click += gcnew System::EventHandler(this, &My3labForm::PercentCount_Click);
			// 
			// RepeatCount
			// 
			this->RepeatCount->Name = L"RepeatCount";
			this->RepeatCount->Size = System::Drawing::Size(229, 34);
			this->RepeatCount->Text = L"Повторение";
			this->RepeatCount->Click += gcnew System::EventHandler(this, &My3labForm::RepeatCount_Click);
			// 
			// TextBox
			// 
			this->TextBox->Location = System::Drawing::Point(12, 36);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(923, 577);
			this->TextBox->TabIndex = 3;
			/*// 
			// openFileDialog При открытии окна проводника в поле ввода вводит текст в ""
			// 
			this->openFileDialog->FileName = L"Пасхалко";*/
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
			this->Resize += gcnew System::EventHandler(this, &My3labForm::My3lab_Resize);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void My3lab_Resize(System::Object^ sender, System::EventArgs^ e) // Масштабирование текстового поля
		{
			TextBox->Width = this->ClientSize.Width - 17;
			TextBox->Height = this->ClientSize.Height - 32;
		}

		private: System::Void Open_Click(System::Object^ sender, System::EventArgs^ e) // Открытие файла
		{
			openFileDialog->Filter = "All files (*.*)|*.*|txt files (*.txt)|*.txt|html file (*.html)|*.html|reg file (*.reg)|*.reg"; // Виды расширений, которые отображаются в окне

			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ FilePath = openFileDialog->FileName;
				TextBox->Text = File::ReadAllText(FilePath);
			}
		}

		private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e) // Сохранение файла
		{
			if (!String::IsNullOrEmpty(openFileDialog->FileName))
			{
				File::WriteAllText(openFileDialog->FileName, TextBox->Text);
			}
			else
			{
				SaveAs_Click(sender, e);
			}
		}

		private: System::Void SaveAs_Click(System::Object^ sender, System::EventArgs^ e) // Сохранение файла как
		{
			saveFileDialog->FileName = "TextFile"; // Изначальное имя для файла
			saveFileDialog->DefaultExt = "txt"; // Расширение, в котором сохраняется файл
			saveFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*|html file (*.html)|*.html|reg file (*.reg)|*.reg"; // Виды расширений, которые отображаются в окне
			/*saveFileDialog->FilterIndex = 2;
			saveFileDialog->RestoreDirectory = true;*/

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ FilePath = saveFileDialog->FileName;
				File::WriteAllText(saveFileDialog->FileName, TextBox->Text);
			}

		}

		private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) // Закрытие программы
		{
			Application::Exit();
		}

		private: System::Void PercentCount_Click(System::Object^ sender, System::EventArgs^ e) // Подсчёт %
		{

		}

		private: System::Void RepeatCount_Click(System::Object^ sender, System::EventArgs^ e) // Повторение слов
		{

		}







};
}
