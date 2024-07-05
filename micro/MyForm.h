#pragma once

namespace MicrobiologyAnalysisApp {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:


    private: System::Windows::Forms::TextBox^ textBox_a;
    private: System::Windows::Forms::TextBox^ textBox_b;
    private: System::Windows::Forms::TextBox^ textBox_t;
    private: System::Windows::Forms::Button^ buttonCalculate;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBoxResult;
    private: System::Windows::Forms::ComboBox^ comboBoxPeriod;
    private: System::Windows::Forms::Label^ label4;














    private:
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->textBox_a = (gcnew System::Windows::Forms::TextBox());
            this->textBox_b = (gcnew System::Windows::Forms::TextBox());
            this->textBox_t = (gcnew System::Windows::Forms::TextBox());
            this->buttonCalculate = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
            this->comboBoxPeriod = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // textBox_a
            // 
            this->textBox_a->BackColor = System::Drawing::Color::MintCream;
            this->textBox_a->Cursor = System::Windows::Forms::Cursors::Default;
            this->textBox_a->Location = System::Drawing::Point(267, 96);
            this->textBox_a->Name = L"textBox_a";
            this->textBox_a->Size = System::Drawing::Size(193, 20);
            this->textBox_a->TabIndex = 1;
            this->textBox_a->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_a_KeyPress);
            // 
            // textBox_b
            // 
            this->textBox_b->BackColor = System::Drawing::Color::MintCream;
            this->textBox_b->Location = System::Drawing::Point(267, 158);
            this->textBox_b->Name = L"textBox_b";
            this->textBox_b->Size = System::Drawing::Size(193, 20);
            this->textBox_b->TabIndex = 2;
            this->textBox_b->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_b_KeyPress);
            // 
            // textBox_t
            // 
            this->textBox_t->BackColor = System::Drawing::Color::MintCream;
            this->textBox_t->Location = System::Drawing::Point(267, 218);
            this->textBox_t->Name = L"textBox_t";
            this->textBox_t->Size = System::Drawing::Size(193, 20);
            this->textBox_t->TabIndex = 3;
            this->textBox_t->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_t_KeyPress);
            // 
            // buttonCalculate
            // 
            this->buttonCalculate->Location = System::Drawing::Point(159, 276);
            this->buttonCalculate->Name = L"buttonCalculate";
            this->buttonCalculate->Size = System::Drawing::Size(167, 28);
            this->buttonCalculate->TabIndex = 4;
            this->buttonCalculate->Text = L"Расчет";
            this->buttonCalculate->UseVisualStyleBackColor = true;
            this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(12, 103);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(249, 15);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Количество колоний на чашке Петри (шт)";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(12, 152);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(165, 30);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Площадь чашки Петри\r\n( среднее значение 78 см2)";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(12, 225);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(176, 15);
            this->label3->TabIndex = 7;
            this->label3->Text = L"Ввремя экспозиции чашки (ч)";
            // 
            // textBoxResult
            // 
            this->textBoxResult->BackColor = System::Drawing::Color::MintCream;
            this->textBoxResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBoxResult->Location = System::Drawing::Point(13, 327);
            this->textBoxResult->Multiline = true;
            this->textBoxResult->Name = L"textBoxResult";
            this->textBoxResult->ReadOnly = true;
            this->textBoxResult->Size = System::Drawing::Size(461, 81);
            this->textBoxResult->TabIndex = 8;
            this->textBoxResult->Enter += gcnew System::EventHandler(this, &MyForm::textBoxResult_Enter);
            // 
            // comboBoxPeriod
            // 
            this->comboBoxPeriod->BackColor = System::Drawing::Color::MintCream;
            this->comboBoxPeriod->FormattingEnabled = true;
            this->comboBoxPeriod->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Летний период", L"Зимний период" });
            this->comboBoxPeriod->Location = System::Drawing::Point(268, 45);
            this->comboBoxPeriod->Name = L"comboBoxPeriod";
            this->comboBoxPeriod->Size = System::Drawing::Size(194, 21);
            this->comboBoxPeriod->TabIndex = 9;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(12, 53);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(135, 15);
            this->label4->TabIndex = 10;
            this->label4->Text = L"Выберите время года";
            // 
            // MyForm
            // 
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(484, 420);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->comboBoxPeriod);
            this->Controls->Add(this->textBoxResult);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->buttonCalculate);
            this->Controls->Add(this->textBox_t);
            this->Controls->Add(this->textBox_b);
            this->Controls->Add(this->textBox_a);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Name = L"MyForm";
            this->Text = L"Микробиологический анализа воздуха по методу Коха";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        // Event handler for the "Calculate" button




    

    
    
    
private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {

    try
    {
        // Получение значений ввода
        double a = Convert::ToDouble(textBox_a->Text);
        double b = Convert::ToDouble(textBox_b->Text);
        double t = Convert::ToDouble(textBox_t->Text);

        // Проверка ввода (пример)
        if (b == 0 || t == 0)
        {
            MessageBox::Show("b и t не могут быть равны нулю.");
            return;
        }

        // Вычисление x
        double x = (a * 100 * 1000 * 5) / (b * 10 * t);

        // Определение уровня загрязнения воздуха в зависимости от периода
        if (comboBoxPeriod->SelectedIndex == 0) // Летний период
        {
            if (x <= 1500)
            {
                textBoxResult->Text = String::Format("Общее количество микробов: {0:F2} в 1 куб.м. Воздух чистый.", x);
            }
            else if (x <= 2500)
            {
                textBoxResult->Text = String::Format("Общее количество микробов: {0:F2} в 1 куб.м. Воздух загрязнен.", x);
            }
            else
            {
                textBoxResult->Text = String::Format("Общее количество микробов: {0:F2} в 1 куб.м. Воздух сильно загрязнен.", x);
            }
        }
        else if (comboBoxPeriod->SelectedIndex == 1) // Зимний период
        {
            if (x <= 4500)
            {
                textBoxResult->Text = String::Format("Общее количество микробов: {0:F2} в 1 куб.м. Воздух чистый.", x);
            }
            else if (x <= 7000)
            {
                textBoxResult->Text = String::Format("Общее количество микробов: {0:F2} в 1 куб.м. Воздух загрязнен.", x);
            }
            else
            {
                textBoxResult->Text = String::Format("Общее количество микробов: {0:F2} в 1 куб.м. Воздух сильно загрязнен.", x);
            }
        }
    }
    catch (FormatException^)
    {
        MessageBox::Show("Пожалуйста, введите числовые значения для a, b и t.");
    }
}
private: System::Void textBox_a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }
}
private: System::Void textBox_b_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }
}
private: System::Void textBox_t_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }
}
private: System::Void textBoxResult_Enter(System::Object^ sender, System::EventArgs^ e) {
    textBoxResult->Enabled = false;
    textBoxResult->Enabled = true;
}

};
}