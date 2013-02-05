#pragma once


namespace Open8055Demo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  cardDestination;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonConnect;

	private: System::Windows::Forms::Label^  connectedMessage;
	private: System::Windows::Forms::TextBox^  cardPassword;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  ADC1;
	private: System::Windows::Forms::TextBox^  ADC2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  I1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Counter1;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Debounce1;
	private: System::Windows::Forms::Button^  SetDebounce1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::CheckBox^  I2;

	private: System::Windows::Forms::TextBox^  Counter2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  Debounce2;
	private: System::Windows::Forms::Button^  SetDebounce2;
	private: System::Windows::Forms::Button^  SetDebounce3;

	private: System::Windows::Forms::TextBox^  Debounce3;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  Counter3;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::CheckBox^  I3;
	private: System::Windows::Forms::Button^  SetDebounce4;

	private: System::Windows::Forms::TextBox^  Debounce4;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  Counter4;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::CheckBox^  I4;
	private: System::Windows::Forms::Button^  SetDebounce5;
	private: System::Windows::Forms::TextBox^  Debounce5;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  Counter5;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::CheckBox^  I5;
	private: System::Windows::Forms::Button^  CounterReset1;
	private: System::Windows::Forms::Button^  CounterReset5;
	private: System::Windows::Forms::Button^  CounterReset4;
	private: System::Windows::Forms::Button^  CounterReset3;
	private: System::Windows::Forms::Button^  CounterReset2;





	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->cardDestination = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->connectedMessage = (gcnew System::Windows::Forms::Label());
			this->cardPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ADC1 = (gcnew System::Windows::Forms::TextBox());
			this->ADC2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->I1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Counter1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Debounce1 = (gcnew System::Windows::Forms::TextBox());
			this->SetDebounce1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->I2 = (gcnew System::Windows::Forms::CheckBox());
			this->Counter2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Debounce2 = (gcnew System::Windows::Forms::TextBox());
			this->SetDebounce2 = (gcnew System::Windows::Forms::Button());
			this->SetDebounce3 = (gcnew System::Windows::Forms::Button());
			this->Debounce3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Counter3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->I3 = (gcnew System::Windows::Forms::CheckBox());
			this->SetDebounce4 = (gcnew System::Windows::Forms::Button());
			this->Debounce4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Counter4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->I4 = (gcnew System::Windows::Forms::CheckBox());
			this->SetDebounce5 = (gcnew System::Windows::Forms::Button());
			this->Debounce5 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Counter5 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->I5 = (gcnew System::Windows::Forms::CheckBox());
			this->CounterReset1 = (gcnew System::Windows::Forms::Button());
			this->CounterReset5 = (gcnew System::Windows::Forms::Button());
			this->CounterReset4 = (gcnew System::Windows::Forms::Button());
			this->CounterReset3 = (gcnew System::Windows::Forms::Button());
			this->CounterReset2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cardDestination
			// 
			this->cardDestination->Location = System::Drawing::Point(104, 17);
			this->cardDestination->Name = L"cardDestination";
			this->cardDestination->Size = System::Drawing::Size(196, 20);
			this->cardDestination->TabIndex = 0;
			this->cardDestination->Text = L"card0";
			this->cardDestination->TextChanged += gcnew System::EventHandler(this, &Form1::cardDestination_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Card destination:";
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(306, 15);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(75, 23);
			this->buttonConnect->TabIndex = 2;
			this->buttonConnect->Text = L"Connect";
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &Form1::buttonConnect_Click);
			// 
			// connectedMessage
			// 
			this->connectedMessage->Location = System::Drawing::Point(387, 20);
			this->connectedMessage->Name = L"connectedMessage";
			this->connectedMessage->Size = System::Drawing::Size(426, 13);
			this->connectedMessage->TabIndex = 3;
			this->connectedMessage->Text = L"Not connected";
			// 
			// cardPassword
			// 
			this->cardPassword->Enabled = false;
			this->cardPassword->Location = System::Drawing::Point(104, 43);
			this->cardPassword->Name = L"cardPassword";
			this->cardPassword->PasswordChar = '*';
			this->cardPassword->Size = System::Drawing::Size(196, 20);
			this->cardPassword->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password:";
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"A1:";
			// 
			// ADC1
			// 
			this->ADC1->Enabled = false;
			this->ADC1->Location = System::Drawing::Point(41, 93);
			this->ADC1->Name = L"ADC1";
			this->ADC1->Size = System::Drawing::Size(57, 20);
			this->ADC1->TabIndex = 7;
			this->ADC1->Text = L"0";
			this->ADC1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// ADC2
			// 
			this->ADC2->Enabled = false;
			this->ADC2->Location = System::Drawing::Point(41, 119);
			this->ADC2->Name = L"ADC2";
			this->ADC2->Size = System::Drawing::Size(57, 20);
			this->ADC2->TabIndex = 8;
			this->ADC2->Text = L"0";
			this->ADC2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"A2:";
			// 
			// I1
			// 
			this->I1->AutoSize = true;
			this->I1->Enabled = false;
			this->I1->Location = System::Drawing::Point(41, 146);
			this->I1->Name = L"I1";
			this->I1->Size = System::Drawing::Size(15, 14);
			this->I1->TabIndex = 10;
			this->I1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"I1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(62, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Counter:";
			// 
			// Counter1
			// 
			this->Counter1->Enabled = false;
			this->Counter1->Location = System::Drawing::Point(115, 143);
			this->Counter1->Name = L"Counter1";
			this->Counter1->Size = System::Drawing::Size(57, 20);
			this->Counter1->TabIndex = 13;
			this->Counter1->Text = L"0";
			this->Counter1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(230, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Debounce (ms):";
			// 
			// Debounce1
			// 
			this->Debounce1->Location = System::Drawing::Point(318, 143);
			this->Debounce1->Name = L"Debounce1";
			this->Debounce1->Size = System::Drawing::Size(57, 20);
			this->Debounce1->TabIndex = 15;
			this->Debounce1->Text = L"2.0";
			this->Debounce1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// SetDebounce1
			// 
			this->SetDebounce1->Location = System::Drawing::Point(381, 141);
			this->SetDebounce1->Name = L"SetDebounce1";
			this->SetDebounce1->Size = System::Drawing::Size(32, 23);
			this->SetDebounce1->TabIndex = 16;
			this->SetDebounce1->Text = L"Set";
			this->SetDebounce1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 172);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"I2:";
			// 
			// I2
			// 
			this->I2->AutoSize = true;
			this->I2->Enabled = false;
			this->I2->Location = System::Drawing::Point(41, 172);
			this->I2->Name = L"I2";
			this->I2->Size = System::Drawing::Size(15, 14);
			this->I2->TabIndex = 18;
			this->I2->UseVisualStyleBackColor = true;
			// 
			// Counter2
			// 
			this->Counter2->Enabled = false;
			this->Counter2->Location = System::Drawing::Point(115, 169);
			this->Counter2->Name = L"Counter2";
			this->Counter2->Size = System::Drawing::Size(57, 20);
			this->Counter2->TabIndex = 19;
			this->Counter2->Text = L"0";
			this->Counter2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(62, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Counter:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(230, 172);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Debounce (ms):";
			// 
			// Debounce2
			// 
			this->Debounce2->Location = System::Drawing::Point(318, 169);
			this->Debounce2->Name = L"Debounce2";
			this->Debounce2->Size = System::Drawing::Size(57, 20);
			this->Debounce2->TabIndex = 22;
			this->Debounce2->Text = L"2.0";
			this->Debounce2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// SetDebounce2
			// 
			this->SetDebounce2->Location = System::Drawing::Point(381, 167);
			this->SetDebounce2->Name = L"SetDebounce2";
			this->SetDebounce2->Size = System::Drawing::Size(32, 23);
			this->SetDebounce2->TabIndex = 23;
			this->SetDebounce2->Text = L"Set";
			this->SetDebounce2->UseVisualStyleBackColor = true;
			// 
			// SetDebounce3
			// 
			this->SetDebounce3->Location = System::Drawing::Point(381, 194);
			this->SetDebounce3->Name = L"SetDebounce3";
			this->SetDebounce3->Size = System::Drawing::Size(32, 23);
			this->SetDebounce3->TabIndex = 30;
			this->SetDebounce3->Text = L"Set";
			this->SetDebounce3->UseVisualStyleBackColor = true;
			// 
			// Debounce3
			// 
			this->Debounce3->Location = System::Drawing::Point(318, 195);
			this->Debounce3->Name = L"Debounce3";
			this->Debounce3->Size = System::Drawing::Size(57, 20);
			this->Debounce3->TabIndex = 29;
			this->Debounce3->Text = L"2.0";
			this->Debounce3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(230, 198);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Debounce (ms):";
			// 
			// Counter3
			// 
			this->Counter3->Enabled = false;
			this->Counter3->Location = System::Drawing::Point(115, 195);
			this->Counter3->Name = L"Counter3";
			this->Counter3->Size = System::Drawing::Size(57, 20);
			this->Counter3->TabIndex = 27;
			this->Counter3->Text = L"0";
			this->Counter3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(62, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(47, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Counter:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 199);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"I3:";
			// 
			// I3
			// 
			this->I3->AutoSize = true;
			this->I3->Enabled = false;
			this->I3->Location = System::Drawing::Point(41, 199);
			this->I3->Name = L"I3";
			this->I3->Size = System::Drawing::Size(15, 14);
			this->I3->TabIndex = 24;
			this->I3->UseVisualStyleBackColor = true;
			// 
			// SetDebounce4
			// 
			this->SetDebounce4->Location = System::Drawing::Point(381, 219);
			this->SetDebounce4->Name = L"SetDebounce4";
			this->SetDebounce4->Size = System::Drawing::Size(32, 23);
			this->SetDebounce4->TabIndex = 37;
			this->SetDebounce4->Text = L"Set";
			this->SetDebounce4->UseVisualStyleBackColor = true;
			// 
			// Debounce4
			// 
			this->Debounce4->Location = System::Drawing::Point(318, 221);
			this->Debounce4->Name = L"Debounce4";
			this->Debounce4->Size = System::Drawing::Size(57, 20);
			this->Debounce4->TabIndex = 36;
			this->Debounce4->Text = L"2.0";
			this->Debounce4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(230, 224);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 13);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Debounce (ms):";
			// 
			// Counter4
			// 
			this->Counter4->Enabled = false;
			this->Counter4->Location = System::Drawing::Point(115, 221);
			this->Counter4->Name = L"Counter4";
			this->Counter4->Size = System::Drawing::Size(57, 20);
			this->Counter4->TabIndex = 34;
			this->Counter4->Text = L"0";
			this->Counter4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(62, 224);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Counter:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 224);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 13);
			this->label16->TabIndex = 32;
			this->label16->Text = L"I4:";
			// 
			// I4
			// 
			this->I4->AutoSize = true;
			this->I4->Enabled = false;
			this->I4->Location = System::Drawing::Point(41, 224);
			this->I4->Name = L"I4";
			this->I4->Size = System::Drawing::Size(15, 14);
			this->I4->TabIndex = 31;
			this->I4->UseVisualStyleBackColor = true;
			// 
			// SetDebounce5
			// 
			this->SetDebounce5->Location = System::Drawing::Point(381, 245);
			this->SetDebounce5->Name = L"SetDebounce5";
			this->SetDebounce5->Size = System::Drawing::Size(32, 23);
			this->SetDebounce5->TabIndex = 44;
			this->SetDebounce5->Text = L"Set";
			this->SetDebounce5->UseVisualStyleBackColor = true;
			// 
			// Debounce5
			// 
			this->Debounce5->Location = System::Drawing::Point(318, 247);
			this->Debounce5->Name = L"Debounce5";
			this->Debounce5->Size = System::Drawing::Size(57, 20);
			this->Debounce5->TabIndex = 43;
			this->Debounce5->Text = L"2.0";
			this->Debounce5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(230, 250);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 13);
			this->label17->TabIndex = 42;
			this->label17->Text = L"Debounce (ms):";
			// 
			// Counter5
			// 
			this->Counter5->Enabled = false;
			this->Counter5->Location = System::Drawing::Point(115, 247);
			this->Counter5->Name = L"Counter5";
			this->Counter5->Size = System::Drawing::Size(57, 20);
			this->Counter5->TabIndex = 41;
			this->Counter5->Text = L"0";
			this->Counter5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(62, 250);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 13);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Counter:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(12, 250);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 13);
			this->label19->TabIndex = 39;
			this->label19->Text = L"I5:";
			// 
			// I5
			// 
			this->I5->AutoSize = true;
			this->I5->Enabled = false;
			this->I5->Location = System::Drawing::Point(41, 250);
			this->I5->Name = L"I5";
			this->I5->Size = System::Drawing::Size(15, 14);
			this->I5->TabIndex = 38;
			this->I5->UseVisualStyleBackColor = true;
			// 
			// CounterReset1
			// 
			this->CounterReset1->Location = System::Drawing::Point(178, 141);
			this->CounterReset1->Name = L"CounterReset1";
			this->CounterReset1->Size = System::Drawing::Size(46, 23);
			this->CounterReset1->TabIndex = 45;
			this->CounterReset1->Text = L"Reset";
			this->CounterReset1->UseVisualStyleBackColor = true;
			// 
			// CounterReset5
			// 
			this->CounterReset5->Location = System::Drawing::Point(178, 245);
			this->CounterReset5->Name = L"CounterReset5";
			this->CounterReset5->Size = System::Drawing::Size(46, 23);
			this->CounterReset5->TabIndex = 46;
			this->CounterReset5->Text = L"Reset";
			this->CounterReset5->UseVisualStyleBackColor = true;
			// 
			// CounterReset4
			// 
			this->CounterReset4->Location = System::Drawing::Point(178, 219);
			this->CounterReset4->Name = L"CounterReset4";
			this->CounterReset4->Size = System::Drawing::Size(46, 23);
			this->CounterReset4->TabIndex = 47;
			this->CounterReset4->Text = L"Reset";
			this->CounterReset4->UseVisualStyleBackColor = true;
			// 
			// CounterReset3
			// 
			this->CounterReset3->Location = System::Drawing::Point(178, 194);
			this->CounterReset3->Name = L"CounterReset3";
			this->CounterReset3->Size = System::Drawing::Size(46, 23);
			this->CounterReset3->TabIndex = 48;
			this->CounterReset3->Text = L"Reset";
			this->CounterReset3->UseVisualStyleBackColor = true;
			// 
			// CounterReset2
			// 
			this->CounterReset2->Location = System::Drawing::Point(178, 167);
			this->CounterReset2->Name = L"CounterReset2";
			this->CounterReset2->Size = System::Drawing::Size(46, 23);
			this->CounterReset2->TabIndex = 49;
			this->CounterReset2->Text = L"Reset";
			this->CounterReset2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 373);
			this->Controls->Add(this->CounterReset2);
			this->Controls->Add(this->CounterReset3);
			this->Controls->Add(this->CounterReset4);
			this->Controls->Add(this->CounterReset5);
			this->Controls->Add(this->CounterReset1);
			this->Controls->Add(this->SetDebounce5);
			this->Controls->Add(this->Debounce5);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->Counter5);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->I5);
			this->Controls->Add(this->SetDebounce4);
			this->Controls->Add(this->Debounce4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Counter4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->I4);
			this->Controls->Add(this->SetDebounce3);
			this->Controls->Add(this->Debounce3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Counter3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->I3);
			this->Controls->Add(this->SetDebounce2);
			this->Controls->Add(this->Debounce2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Counter2);
			this->Controls->Add(this->I2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->SetDebounce1);
			this->Controls->Add(this->Debounce1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Counter1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->I1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ADC2);
			this->Controls->Add(this->ADC1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cardPassword);
			this->Controls->Add(this->connectedMessage);
			this->Controls->Add(this->buttonConnect);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cardDestination);
			this->Name = L"Form1";
			this->Text = L"Open8055Demo";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	static OPEN8055_HANDLE		cardHandle = NULL;


	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void cardDestination_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void buttonConnect_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Convert the card destination and password into C strings
				 char *destination = (char *)(void *)Marshal::StringToHGlobalAnsi(cardDestination->Text);
				 char *password = (char *)(void *)Marshal::StringToHGlobalAnsi(cardPassword->Text);

				 // Close any previously open card
				 if (cardHandle != NULL)
				 {
					 timer1->Enabled = false;
					 Open8055_Close(cardHandle);
					 cardHandle = NULL;
				 }
					
				 // Try to open the requested card
				 cardHandle = Open8055_Connect(destination, password);

				 // Free the C strings
				 Marshal::FreeHGlobal((System::IntPtr)destination);
				 Marshal::FreeHGlobal((System::IntPtr)password);
				 
				 // See if we actually found the requested card
				 if (cardHandle == NULL)
				 {
					 connectedMessage->Text = "Connection to '" + cardDestination->Text +
						 "' failed: " + 
						 Marshal::PtrToStringAnsi((System::IntPtr)Open8055_LastError(NULL));
				 } else {
					 connectedMessage->Text = "Connected to '" + cardDestination->Text + "'";
					 timer1->Enabled = true;
				 }
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 int	bits = Open8055_GetInputAll(cardHandle);

				 if (bits < 0)
				 {
					 connectedMessage->Text = "Connection lost";
					 timer1->Enabled = false;
				     return;
				 }

				 I1->Checked = (bits & 0x01) != 0;
				 I2->Checked = (bits & 0x02) != 0;
				 I3->Checked = (bits & 0x04) != 0;
				 I4->Checked = (bits & 0x08) != 0;
				 I5->Checked = (bits & 0x10) != 0;
			 }
	 };
}

