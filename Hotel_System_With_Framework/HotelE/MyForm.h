#pragma once

namespace HotelE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form         //so pg is dependent on windows
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();      //constructor to get database connectors
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();      //constructor for commands
		DataTable^ sqlDt = gcnew DataTable();               //new table creation
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();      //allows incompatible objects collaborate ie converts types in database to arguments that can be used here
		MySqlDataReader^ sqlRd;       //read from database

	//noticed u use connection string and comm to input  data to database
		
		Double SingleRoom = 5000;               //declaration of variables
		Double DoubleRoom = 10000;
		Double FamilyRoom = 15000;               //attributes

		Double OneMeal = 100;
		Double TwoMeal = 200;
		Double ThreeMeal = 300;

		Double iTax = 0.5;
		Double Total, Tax;
	


	public:                                            //initialising timer
		MyForm(void)                 //constructor initialises object of a class and allocates memory to an object of the class
		{
			InitializeComponent();
	
			timer1->Start();    //initialising timer
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()                    //destructor. deallocates memory of the object. called when object is deleted. cant't be overloaded
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox9;
	private: System::Windows::Forms::RichTextBox^ tstSearch;
	private: System::Windows::Forms::RichTextBox^ richTextBox11;
	private: System::Windows::Forms::RichTextBox^ richTextBox8;
	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RichTextBox^ richTextBox10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::RichTextBox^ txtCustomerRef;
	private: System::Windows::Forms::Label^ ID;



	private: System::Windows::Forms::RichTextBox^ txtFirstname;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ txtSurname;
	private: System::Windows::Forms::Label^ Surname;
	private: System::Windows::Forms::RichTextBox^ txtAddress;



	private: System::Windows::Forms::Label^ Address;



	private: System::Windows::Forms::RichTextBox^ txtPostCode;
	private: System::Windows::Forms::Label^ PostCode;


	private: System::Windows::Forms::RichTextBox^ txtMobile;
	private: System::Windows::Forms::Label^ Mobile;


	private: System::Windows::Forms::RichTextBox^ txtEmail;
	private: System::Windows::Forms::Label^ Email;
	private: System::Windows::Forms::Label^ Nationality;
	private: System::Windows::Forms::Label^ DateOfBirth;
	private: System::Windows::Forms::Label^ Gender;
	private: System::Windows::Forms::Label^ Prove;
	private: System::Windows::Forms::Label^ DateIn;
	private: System::Windows::Forms::Label^ Meal;









	private: System::Windows::Forms::ComboBox^ cobNationality;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ cobGender;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::ComboBox^ cobProve;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::ComboBox^ cobMeal;

	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ Firstname;
private: System::Windows::Forms::Label^ DateOut;




	private: System::Windows::Forms::Button^ button7;

	 private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::RichTextBox^ txtTotal;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ lblTime;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::RichTextBox^ txtTax;
	private: System::Windows::Forms::RichTextBox^ txtSearch;
	private: System::Windows::Forms::RichTextBox^ richTextBox18;
	private: System::Windows::Forms::RichTextBox^ txtNoOfdays;
	private: System::Windows::Forms::RichTextBox^ txtSubtotal;
	private: System::Windows::Forms::Button^ btnTotalAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;






































private: System::Windows::Forms::Label^ RmType;
private: System::Windows::Forms::Label^ labRmNoel29;


private: System::Windows::Forms::ComboBox^ cobRmType;
private: System::Windows::Forms::ComboBox^ cobRmNo;
private: System::Windows::Forms::Label^ Ext;





private: System::Windows::Forms::RichTextBox^ txtExt;
private: System::ComponentModel::IContainer^ components;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->tstSearch = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox11 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtCustomerRef = (gcnew System::Windows::Forms::RichTextBox());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->txtFirstname = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::RichTextBox());
			this->Surname = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::RichTextBox());
			this->Address = (gcnew System::Windows::Forms::Label());
			this->txtPostCode = (gcnew System::Windows::Forms::RichTextBox());
			this->PostCode = (gcnew System::Windows::Forms::Label());
			this->txtMobile = (gcnew System::Windows::Forms::RichTextBox());
			this->Mobile = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::RichTextBox());
			this->Email = (gcnew System::Windows::Forms::Label());
			this->Nationality = (gcnew System::Windows::Forms::Label());
			this->DateOfBirth = (gcnew System::Windows::Forms::Label());
			this->Gender = (gcnew System::Windows::Forms::Label());
			this->Prove = (gcnew System::Windows::Forms::Label());
			this->DateIn = (gcnew System::Windows::Forms::Label());
			this->Meal = (gcnew System::Windows::Forms::Label());
			this->cobNationality = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->cobGender = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->cobProve = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->cobMeal = (gcnew System::Windows::Forms::ComboBox());
			this->Firstname = (gcnew System::Windows::Forms::Label());
			this->DateOut = (gcnew System::Windows::Forms::Label());
			this->RmType = (gcnew System::Windows::Forms::Label());
			this->labRmNoel29 = (gcnew System::Windows::Forms::Label());
			this->cobRmType = (gcnew System::Windows::Forms::ComboBox());
			this->cobRmNo = (gcnew System::Windows::Forms::ComboBox());
			this->Ext = (gcnew System::Windows::Forms::Label());
			this->txtExt = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::RichTextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtTax = (gcnew System::Windows::Forms::RichTextBox());
			this->txtSearch = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox18 = (gcnew System::Windows::Forms::RichTextBox());
			this->txtNoOfdays = (gcnew System::Windows::Forms::RichTextBox());
			this->txtSubtotal = (gcnew System::Windows::Forms::RichTextBox());
			this->btnTotalAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScrollMargin = System::Drawing::Size(2, 2);
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->richTextBox9);
			this->panel1->Controls->Add(this->tstSearch);
			this->panel1->Controls->Add(this->richTextBox11);
			this->panel1->Controls->Add(this->richTextBox8);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->richTextBox10);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Location = System::Drawing::Point(-1, 649);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1479, 134);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1173, 21);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(149, 42);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1173, 69);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 42);
			this->button6->TabIndex = 0;
			this->button6->Text = L"button1";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1020, 69);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 42);
			this->button5->TabIndex = 0;
			this->button5->Text = L"button1";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(871, 69);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 42);
			this->button4->TabIndex = 0;
			this->button4->Text = L"button1";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(722, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 42);
			this->button3->TabIndex = 0;
			this->button3->Text = L"button1";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(573, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 42);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button1";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(420, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// richTextBox9
			// 
			this->richTextBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox9->Location = System::Drawing::Point(144, 46);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->Size = System::Drawing::Size(262, 31);
			this->richTextBox9->TabIndex = 2;
			this->richTextBox9->Text = L"";
			// 
			// tstSearch
			// 
			this->tstSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tstSearch->Location = System::Drawing::Point(573, 16);
			this->tstSearch->Name = L"tstSearch";
			this->tstSearch->Size = System::Drawing::Size(292, 47);
			this->tstSearch->TabIndex = 2;
			this->tstSearch->Text = L"";
			// 
			// richTextBox11
			// 
			this->richTextBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox11->Location = System::Drawing::Point(871, 16);
			this->richTextBox11->Name = L"richTextBox11";
			this->richTextBox11->Size = System::Drawing::Size(296, 47);
			this->richTextBox11->TabIndex = 2;
			this->richTextBox11->Text = L"";
			// 
			// richTextBox8
			// 
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox8->Location = System::Drawing::Point(144, 9);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(262, 31);
			this->richTextBox8->TabIndex = 2;
			this->richTextBox8->Text = L"";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(448, 16);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 25);
			this->label18->TabIndex = 3;
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(415, 16);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(124, 25);
			this->label19->TabIndex = 3;
			this->label19->Text = L"No of Days:";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(13, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 24);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Tax:";
			// 
			// richTextBox10
			// 
			this->richTextBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox10->Location = System::Drawing::Point(144, 80);
			this->richTextBox10->Name = L"richTextBox10";
			this->richTextBox10->Size = System::Drawing::Size(262, 31);
			this->richTextBox10->TabIndex = 2;
			this->richTextBox10->Text = L"";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(13, 46);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 24);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Subtotal:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(13, 80);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(56, 24);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Total:";
			// 
			// txtCustomerRef
			// 
			this->txtCustomerRef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCustomerRef->Location = System::Drawing::Point(143, 2);
			this->txtCustomerRef->Name = L"txtCustomerRef";
			this->txtCustomerRef->Size = System::Drawing::Size(230, 31);
			this->txtCustomerRef->TabIndex = 2;
			this->txtCustomerRef->Text = L"";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(12, 2);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(118, 24);
			this->ID->TabIndex = 3;
			this->ID->Text = L"Customer ID:";
			// 
			// txtFirstname
			// 
			this->txtFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstname->Location = System::Drawing::Point(143, 39);
			this->txtFirstname->Name = L"txtFirstname";
			this->txtFirstname->Size = System::Drawing::Size(230, 31);
			this->txtFirstname->TabIndex = 2;
			this->txtFirstname->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Firstname:";
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->Location = System::Drawing::Point(143, 76);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(230, 31);
			this->txtSurname->TabIndex = 2;
			this->txtSurname->Text = L"";
			// 
			// Surname
			// 
			this->Surname->AutoSize = true;
			this->Surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Surname->Location = System::Drawing::Point(12, 76);
			this->Surname->Name = L"Surname";
			this->Surname->Size = System::Drawing::Size(92, 24);
			this->Surname->TabIndex = 3;
			this->Surname->Text = L"Surname:";
			// 
			// txtAddress
			// 
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->Location = System::Drawing::Point(143, 113);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(230, 31);
			this->txtAddress->TabIndex = 2;
			this->txtAddress->Text = L"";
			// 
			// Address
			// 
			this->Address->AutoSize = true;
			this->Address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Address->Location = System::Drawing::Point(14, 113);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(85, 24);
			this->Address->TabIndex = 3;
			this->Address->Text = L"Address:";
			// 
			// txtPostCode
			// 
			this->txtPostCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPostCode->Location = System::Drawing::Point(143, 150);
			this->txtPostCode->Name = L"txtPostCode";
			this->txtPostCode->Size = System::Drawing::Size(230, 31);
			this->txtPostCode->TabIndex = 2;
			this->txtPostCode->Text = L"";
			// 
			// PostCode
			// 
			this->PostCode->AutoSize = true;
			this->PostCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostCode->Location = System::Drawing::Point(12, 150);
			this->PostCode->Name = L"PostCode";
			this->PostCode->Size = System::Drawing::Size(102, 24);
			this->PostCode->TabIndex = 3;
			this->PostCode->Text = L"Post Code:";
			// 
			// txtMobile
			// 
			this->txtMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMobile->Location = System::Drawing::Point(143, 187);
			this->txtMobile->Name = L"txtMobile";
			this->txtMobile->Size = System::Drawing::Size(230, 31);
			this->txtMobile->TabIndex = 2;
			this->txtMobile->Text = L"";
			// 
			// Mobile
			// 
			this->Mobile->AutoSize = true;
			this->Mobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mobile->Location = System::Drawing::Point(14, 190);
			this->Mobile->Name = L"Mobile";
			this->Mobile->Size = System::Drawing::Size(72, 24);
			this->Mobile->TabIndex = 3;
			this->Mobile->Text = L"Mobile:";
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(143, 224);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(230, 31);
			this->txtEmail->TabIndex = 2;
			this->txtEmail->Text = L"";
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->Location = System::Drawing::Point(14, 224);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(62, 24);
			this->Email->TabIndex = 3;
			this->Email->Text = L"Email:";
			// 
			// Nationality
			// 
			this->Nationality->AutoSize = true;
			this->Nationality->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nationality->Location = System::Drawing::Point(14, 265);
			this->Nationality->Name = L"Nationality";
			this->Nationality->Size = System::Drawing::Size(95, 24);
			this->Nationality->TabIndex = 3;
			this->Nationality->Text = L"Nationality";
			// 
			// DateOfBirth
			// 
			this->DateOfBirth->AutoSize = true;
			this->DateOfBirth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateOfBirth->Location = System::Drawing::Point(14, 300);
			this->DateOfBirth->Name = L"DateOfBirth";
			this->DateOfBirth->Size = System::Drawing::Size(115, 24);
			this->DateOfBirth->TabIndex = 3;
			this->DateOfBirth->Text = L"Date of Birth:";
			// 
			// Gender
			// 
			this->Gender->AutoSize = true;
			this->Gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gender->Location = System::Drawing::Point(14, 341);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(74, 24);
			this->Gender->TabIndex = 3;
			this->Gender->Text = L"Gender";
			// 
			// Prove
			// 
			this->Prove->AutoSize = true;
			this->Prove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prove->Location = System::Drawing::Point(12, 376);
			this->Prove->Name = L"Prove";
			this->Prove->Size = System::Drawing::Size(100, 24);
			this->Prove->TabIndex = 3;
			this->Prove->Text = L"Type of ID:";
			// 
			// DateIn
			// 
			this->DateIn->AutoSize = true;
			this->DateIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateIn->Location = System::Drawing::Point(14, 415);
			this->DateIn->Name = L"DateIn";
			this->DateIn->Size = System::Drawing::Size(73, 24);
			this->DateIn->TabIndex = 3;
			this->DateIn->Text = L"Date In:";
			// 
			// Meal
			// 
			this->Meal->AutoSize = true;
			this->Meal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Meal->Location = System::Drawing::Point(14, 493);
			this->Meal->Name = L"Meal";
			this->Meal->Size = System::Drawing::Size(56, 24);
			this->Meal->TabIndex = 3;
			this->Meal->Text = L"Meal:";
			// 
			// cobNationality
			// 
			this->cobNationality->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cobNationality->FormattingEnabled = true;
			this->cobNationality->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"America", L"Cameroon", L"Brazil", L"Kenya",
					L"Uganda", L"Tokyo", L"Nigeria", L"China", L"Japan", L"Chad"
			});
			this->cobNationality->Location = System::Drawing::Point(143, 261);
			this->cobNationality->Name = L"cobNationality";
			this->cobNationality->Size = System::Drawing::Size(230, 33);
			this->cobNationality->TabIndex = 4;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(143, 300);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(230, 31);
			this->dateTimePicker1->TabIndex = 5;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// cobGender
			// 
			this->cobGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cobGender->FormattingEnabled = true;
			this->cobGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cobGender->Location = System::Drawing::Point(143, 337);
			this->cobGender->Name = L"cobGender";
			this->cobGender->Size = System::Drawing::Size(230, 33);
			this->cobGender->TabIndex = 4;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker2->Location = System::Drawing::Point(143, 415);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(230, 31);
			this->dateTimePicker2->TabIndex = 5;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker2_ValueChanged);
			// 
			// cobProve
			// 
			this->cobProve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cobProve->FormattingEnabled = true;
			this->cobProve->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Student ID", L"Pilot Licence", L"Driving Licence",
					L"Passport"
			});
			this->cobProve->Location = System::Drawing::Point(143, 376);
			this->cobProve->Name = L"cobProve";
			this->cobProve->Size = System::Drawing::Size(230, 33);
			this->cobProve->TabIndex = 4;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker4->Location = System::Drawing::Point(143, 452);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(230, 31);
			this->dateTimePicker4->TabIndex = 5;
			this->dateTimePicker4->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker4_ValueChanged);
			// 
			// cobMeal
			// 
			this->cobMeal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cobMeal->FormattingEnabled = true;
			this->cobMeal->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Breakfast", L"Lunch", L"Dinner" });
			this->cobMeal->Location = System::Drawing::Point(143, 489);
			this->cobMeal->Name = L"cobMeal";
			this->cobMeal->Size = System::Drawing::Size(230, 33);
			this->cobMeal->TabIndex = 4;
			// 
			// Firstname
			// 
			this->Firstname->AutoSize = true;
			this->Firstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Firstname->Location = System::Drawing::Point(14, 39);
			this->Firstname->Name = L"Firstname";
			this->Firstname->Size = System::Drawing::Size(101, 24);
			this->Firstname->TabIndex = 3;
			this->Firstname->Text = L"FirstName:";
			// 
			// DateOut
			// 
			this->DateOut->AutoSize = true;
			this->DateOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateOut->Location = System::Drawing::Point(14, 452);
			this->DateOut->Name = L"DateOut";
			this->DateOut->Size = System::Drawing::Size(88, 24);
			this->DateOut->TabIndex = 3;
			this->DateOut->Text = L"Date Out:";
			// 
			// RmType
			// 
			this->RmType->AutoSize = true;
			this->RmType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RmType->Location = System::Drawing::Point(12, 528);
			this->RmType->Name = L"RmType";
			this->RmType->Size = System::Drawing::Size(114, 24);
			this->RmType->TabIndex = 3;
			this->RmType->Text = L"Room Type:";
			// 
			// labRmNoel29
			// 
			this->labRmNoel29->AutoSize = true;
			this->labRmNoel29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labRmNoel29->Location = System::Drawing::Point(12, 574);
			this->labRmNoel29->Name = L"labRmNoel29";
			this->labRmNoel29->Size = System::Drawing::Size(96, 24);
			this->labRmNoel29->TabIndex = 3;
			this->labRmNoel29->Text = L"Room No:";
			// 
			// cobRmType
			// 
			this->cobRmType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cobRmType->FormattingEnabled = true;
			this->cobRmType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Single", L"Double", L"Family" });
			this->cobRmType->Location = System::Drawing::Point(143, 528);
			this->cobRmType->Name = L"cobRmType";
			this->cobRmType->Size = System::Drawing::Size(230, 33);
			this->cobRmType->TabIndex = 4;
			// 
			// cobRmNo
			// 
			this->cobRmNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cobRmNo->FormattingEnabled = true;
			this->cobRmNo->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
				L"001", L"002", L"003", L"004", L"005", L"006", L"007",
					L"008", L"009", L"010", L"011", L"012", L"013", L"014", L"015", L"016", L"017", L"018", L"019", L"020", L"021", L"022", L"023",
					L"024", L"025", L"026", L"027", L"028", L"029", L"030", L"031", L"032", L"033", L"034", L"035", L"036", L"037", L"038", L"039",
					L"040"
			});
			this->cobRmNo->Location = System::Drawing::Point(143, 574);
			this->cobRmNo->Name = L"cobRmNo";
			this->cobRmNo->Size = System::Drawing::Size(66, 33);
			this->cobRmNo->TabIndex = 4;
			this->cobRmNo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cobRmNo_SelectedIndexChanged);
			// 
			// Ext
			// 
			this->Ext->AutoSize = true;
			this->Ext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ext->Location = System::Drawing::Point(225, 581);
			this->Ext->Name = L"Ext";
			this->Ext->Size = System::Drawing::Size(46, 24);
			this->Ext->TabIndex = 3;
			this->Ext->Text = L"Ext:";
			// 
			// txtExt
			// 
			this->txtExt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtExt->Location = System::Drawing::Point(286, 574);
			this->txtExt->Name = L"txtExt";
			this->txtExt->Size = System::Drawing::Size(87, 31);
			this->txtExt->TabIndex = 2;
			this->txtExt->Text = L"";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DarkCyan;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->Location = System::Drawing::Point(379, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1439, 644);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(13, 80);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 24);
			this->label25->TabIndex = 3;
			this->label25->Text = L"Total:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(13, 46);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(82, 24);
			this->label24->TabIndex = 3;
			this->label24->Text = L"Subtotal:";
			// 
			// txtTotal
			// 
			this->txtTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotal->Location = System::Drawing::Point(144, 80);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(262, 31);
			this->txtTotal->TabIndex = 2;
			this->txtTotal->Text = L"";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(13, 9);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(47, 24);
			this->label23->TabIndex = 3;
			this->label23->Text = L"Tax:";
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->Location = System::Drawing::Point(1485, 21);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(63, 25);
			this->lblTime->TabIndex = 3;
			this->lblTime->Text = L"Time";
			this->lblTime->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(1487, 79);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(61, 25);
			this->lblDate->TabIndex = 3;
			this->lblDate->Text = L"Date";
			this->lblDate->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(448, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 25);
			this->label17->TabIndex = 3;
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// txtTax
			// 
			this->txtTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTax->Location = System::Drawing::Point(144, 9);
			this->txtTax->Name = L"txtTax";
			this->txtTax->Size = System::Drawing::Size(262, 31);
			this->txtTax->TabIndex = 2;
			this->txtTax->Text = L"";
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(871, 16);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(296, 47);
			this->txtSearch->TabIndex = 2;
			this->txtSearch->Text = L"";
			this->txtSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtSearch_KeyPress);
			// 
			// richTextBox18
			// 
			this->richTextBox18->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->richTextBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox18->Location = System::Drawing::Point(1456, 57);
			this->richTextBox18->Name = L"richTextBox18";
			this->richTextBox18->Size = System::Drawing::Size(148, 10);
			this->richTextBox18->TabIndex = 2;
			this->richTextBox18->Text = L"";
			// 
			// txtNoOfdays
			// 
			this->txtNoOfdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNoOfdays->Location = System::Drawing::Point(573, 16);
			this->txtNoOfdays->Name = L"txtNoOfdays";
			this->txtNoOfdays->Size = System::Drawing::Size(292, 47);
			this->txtNoOfdays->TabIndex = 2;
			this->txtNoOfdays->Text = L"";
			// 
			// txtSubtotal
			// 
			this->txtSubtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSubtotal->Location = System::Drawing::Point(144, 46);
			this->txtSubtotal->Name = L"txtSubtotal";
			this->txtSubtotal->Size = System::Drawing::Size(262, 31);
			this->txtSubtotal->TabIndex = 2;
			this->txtSubtotal->Text = L"";
			// 
			// btnTotalAdd
			// 
			this->btnTotalAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotalAdd->Location = System::Drawing::Point(420, 69);
			this->btnTotalAdd->Name = L"btnTotalAdd";
			this->btnTotalAdd->Size = System::Drawing::Size(147, 42);
			this->btnTotalAdd->TabIndex = 0;
			this->btnTotalAdd->Text = L"Total/Add";
			this->btnTotalAdd->UseVisualStyleBackColor = true;
			this->btnTotalAdd->Click += gcnew System::EventHandler(this, &MyForm::btnTotalAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(573, 69);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->btnUpdate->Size = System::Drawing::Size(143, 42);
			this->btnUpdate->TabIndex = 0;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->AccessibleName = L"";
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(722, 69);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(143, 42);
			this->btnDelete->TabIndex = 0;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(871, 69);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(143, 42);
			this->btnReset->TabIndex = 0;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(1020, 69);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(147, 42);
			this->btnRefresh->TabIndex = 0;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(1173, 69);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(149, 42);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(1173, 21);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(149, 42);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Search";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// panel2
			// 
			this->panel2->AutoScrollMargin = System::Drawing::Size(2, 2);
			this->panel2->BackColor = System::Drawing::Color::DarkCyan;
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->btnExit);
			this->panel2->Controls->Add(this->btnRefresh);
			this->panel2->Controls->Add(this->btnReset);
			this->panel2->Controls->Add(this->btnDelete);
			this->panel2->Controls->Add(this->btnUpdate);
			this->panel2->Controls->Add(this->btnTotalAdd);
			this->panel2->Controls->Add(this->txtSubtotal);
			this->panel2->Controls->Add(this->txtNoOfdays);
			this->panel2->Controls->Add(this->richTextBox18);
			this->panel2->Controls->Add(this->txtSearch);
			this->panel2->Controls->Add(this->txtTax);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->lblDate);
			this->panel2->Controls->Add(this->lblTime);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->txtTotal);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Location = System::Drawing::Point(-1, 652);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1864, 263);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(429, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"No Of Days:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(1810, 830);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker4);
			this->Controls->Add(this->cobRmNo);
			this->Controls->Add(this->cobRmType);
			this->Controls->Add(this->cobMeal);
			this->Controls->Add(this->cobProve);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->cobGender);
			this->Controls->Add(this->cobNationality);
			this->Controls->Add(this->DateOut);
			this->Controls->Add(this->Ext);
			this->Controls->Add(this->labRmNoel29);
			this->Controls->Add(this->RmType);
			this->Controls->Add(this->Meal);
			this->Controls->Add(this->DateIn);
			this->Controls->Add(this->Prove);
			this->Controls->Add(this->Gender);
			this->Controls->Add(this->DateOfBirth);
			this->Controls->Add(this->Nationality);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->Mobile);
			this->Controls->Add(this->PostCode);
			this->Controls->Add(this->Firstname);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->Surname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtExt);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtMobile);
			this->Controls->Add(this->txtPostCode);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->txtFirstname);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->txtCustomerRef);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// begining of function=====================================================================================================================================
		//func 1  connects or calls database
		private: System::Void HotelConnected()            //private connecting method
		{
			sqlConn->ConnectionString = "datasource = localhost;port=3306; username=root; password=Family2022; database=hotele";
			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "Select * from hotele";
			sqlRd = sqlCmd->ExecuteReader();           //want command to be executed
			sqlDt->Load(sqlRd);
			sqlRd->Close();   //close reader
			sqlConn->Close();   //close connection
			dataGridView1->DataSource = sqlDt;
		}
      
			   //func 2
	private: System::Void RefreshDB() {        //refresh is placed here so u can use it at many instances like deleting
		try
		{
			sqlConn->ConnectionString = "datasource = localhost;port=3306; username=root; password=Family2022; database=hotele";

			sqlCmd->Connection = sqlConn;

			String^ ID = txtCustomerRef->Text;
			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("Select * from hotele", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

		   //func3
	private: System::Void NoOfDays() {             //returns days spent in hotel bcos it calculates usx checkin and checkout

		DateTime dbTime1 = Convert::ToDateTime(dateTimePicker2->Text);         //date in to hotel
		DateTime dbTime2 = Convert::ToDateTime(dateTimePicker4->Text);        //date out of hotel

		TimeSpan diff = dbTime2.Subtract(dbTime1);
		txtNoOfdays->Text = Convert::ToString(Convert::ToInt64(diff.Days));

	}

		//func 4
	 private: System::Void TotalCost() {        //calculates total cost by multiplying expenses and time spent in hotel

		 int NoOfDays = Int64::Parse(txtNoOfdays->Text->ToString());       //turnx No days spent to string

		 if (cobMeal->Text == "Breakfast" && cobRmType->Text == "Single")
		 {
			 Total = (OneMeal + SingleRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 else  if (cobMeal->Text == "Breakfast" && cobRmType->Text == "Double")
		 {
			 Total = (OneMeal + DoubleRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 else  if (cobMeal->Text == "Breakfast" && cobRmType->Text == "Family")
		 {
			 Total = (OneMeal + FamilyRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 if (cobMeal->Text == "Lunch" && cobRmType->Text == "Single")
		 {
			 Total = (TwoMeal + SingleRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 else  if (cobMeal->Text == "Lunch" && cobRmType->Text == "Double")
		 {
			 Total = (TwoMeal + DoubleRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 else  if (cobMeal->Text == "Lunch" && cobRmType->Text == "Family")
		 {
			 Total = (TwoMeal + FamilyRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 if (cobMeal->Text == "Dinner" && cobRmType->Text == "Single")
		 {
			 Total = (ThreeMeal + SingleRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 else  if (cobMeal->Text == "Dinner" && cobRmType->Text == "Double")
		 {
			 Total = (ThreeMeal + DoubleRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }

		 else  if (cobMeal->Text == "Dinner" && cobRmType->Text == "Family")
		 {
			 Total = (ThreeMeal + FamilyRoom) * NoOfDays;
			 Tax = (Total * iTax) / 100;
			 txtTax->Text = String::Format("{0:c2}", Tax);
			 txtSubtotal->Text = String::Format("{0:c2}", Total);
			 txtTotal->Text = String::Format("{0:c2}", Total + Tax);

		 }
	 }

	   //END OF FUNCTIONS============================================================================================================================================
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		HotelConnected();
	}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {      // func for date and time in the timer

	//implementing timer for date and time
	DateTime dt = DateTime::Now;
	DateTime da = DateTime::Now;
	lblTime->Text = dt.Now.ToLongTimeString();          //lbl means label time which was given in design
	lblDate->Text = dt.Now.ToLongDateString();

}
private: System::Void txtSearch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {   // search func using text box
	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("FirstName like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
		catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {            //search func using button

	try
	{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("FirstName like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {             //calling refresh  function
	RefreshDB();
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {                //exit function
	try
	{
		System::Windows::Forms::DialogResult iExit;

		iExit = MessageBox::Show("Please confirm if you wish to exit", "Hotel System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btnTotalAdd_Click(System::Object^ sender, System::EventArgs^ e) {                      //  func to add new client and see total
	try
	{

		sqlConn->ConnectionString = "datasource = localhost;port=3306; username=root; password=Family2022; database=hotele";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "insert into hotele (ID, Firstname, Surname, Address, PostCode, Mobile, Email, " +
			"Nationality, DateOfBirth, Gender, Prove, DateIn, DateOut, Meal, RmType, RmNo)" +
			"values('" + txtCustomerRef->Text + "', '" + txtFirstname->Text + "', '" +
			txtSurname->Text + "', '" + txtAddress->Text + "', '" + txtPostCode->Text + "', '" +
			txtMobile->Text + "', '" + txtEmail->Text + "', '" + cobNationality->Text + "', '" +
			dateTimePicker1->Text + "','" + cobGender->Text + "', '" + cobProve->Text + "', '" +
			dateTimePicker2->Text + "', '" + dateTimePicker4->Text + "', '" + cobMeal->Text + "', '" +
			cobRmType->Text + "', '" + cobRmNo->Text + "')";

		sqlCmd->ExecuteNonQuery();
		sqlConn->Close();
		HotelConnected();
		TotalCost();
	}

	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {                      //update except id bcos its primary key 


	sqlConn->ConnectionString = "datasource = localhost;port=3306; username=root; password=Family2022; database=hotele";
	
	sqlCmd->Connection = sqlConn;
	try
	{
		String^ ID = txtCustomerRef->Text;
		String^ Firstname = txtFirstname->Text;
		String^ Surname = txtSurname->Text;
		String^ Address = txtAddress->Text;
		String^ PostCode = txtPostCode->Text;
		String^ Mobile = txtMobile->Text;
		String^ Email = txtEmail->Text;
		String^ Nationality = cobNationality->Text;
		String^ DateOfBirth = dateTimePicker1->Text;
		String^ Gender = cobGender->Text;
		String^ Prove = cobProve->Text;
		String^ DateIn = dateTimePicker2->Text;
		String^ DateOut = dateTimePicker4->Text;
		String^ Meal = cobMeal->Text;
		String^ RmType = cobRmType->Text;
		String^ RmNo = cobRmNo->Text;

		sqlCmd->CommandText = "update hotele set ID = '" + ID + "', Firstname = '" + Firstname + "', Surname= '" + Surname + "', Address= '" + Address
			+ "', PostCode = '" + PostCode + "', Mobile= '" + Mobile + "', Email= '" + Email + "', Nationality = '" + Nationality + "', DateOfBirth= '" + DateOfBirth
			+ "', Gender= '" + Gender + "', Prove = '" + Prove + "', DateIn= '" + DateIn + "', DateOut= '" + DateOut + "', Meal = '" + Meal
			+ "', RmType= '" + RmType + "', RmNo= '" + RmNo + "' WHERE ID =" + ID + "", sqlConn;

		sqlConn->Open();
		sqlRd = sqlCmd->ExecuteReader();
		sqlConn->Close();
		HotelConnected();
		TotalCost();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	                                                                                                  // so when u type on a column the data can appear to be updated
	try
	{
		txtCustomerRef->Text =dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		txtFirstname->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		txtSurname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		txtAddress->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		txtPostCode->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		txtMobile->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		txtEmail->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		cobNationality->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		dateTimePicker1->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		cobGender->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		cobProve->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
        dateTimePicker2->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
		dateTimePicker4->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
		cobMeal->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();
		cobRmType->Text = dataGridView1->SelectedRows[0]->Cells[14]->Value->ToString();
		cobRmNo->Text = dataGridView1->SelectedRows[0]->Cells[15]->Value->ToString();
		TotalCost();
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {                     //reset function

	try
	{
		txtCustomerRef->Text = "";
		txtFirstname->Text = "";
		txtSurname->Text = "";
		txtAddress->Text = "";
		txtPostCode->Text = "";
		txtMobile->Text = "";
		txtEmail->Text = "";
		cobGender->Text = "";
		dateTimePicker1->ResetText();
		cobNationality->Text = "";
		cobProve->Text = "";
		dateTimePicker2->ResetText();
		dateTimePicker4->ResetText();
		cobMeal->Text = "";
		cobRmType->Text = "";
		cobRmNo->Text = "";
		txtExt->Text = "";
		txtSearch->Text = "";
		txtNoOfdays->Text = "";
		txtTax->Text = "";
		txtSubtotal->Text = "";
		txtTotal->Text = "";


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {                 //Delete function

	try
	{

		sqlConn->ConnectionString = "datasource = localhost;port=3306; username=root; password=Family2022; database=hotele";
		
		sqlCmd->Connection = sqlConn;
		String^ ID = txtCustomerRef->Text;
		MySqlCommand^ sqlCmd = gcnew MySqlCommand ("delete from hotele where ID =" + ID + "", sqlConn);
		sqlConn->Open();
			

		sqlRd = sqlCmd->ExecuteReader();

		MessageBox::Show("Record Deleted", "Hotel Database", MessageBoxButtons::OK, MessageBoxIcon::Information);
		sqlConn->Close();
		
	}

	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
		sqlConn->Close();
	}

	RefreshDB();
}
private: System::Void cobRmNo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//when u click on room no u see the extension
	try
	{
		if (cobRmNo->Text == "001") { txtExt->Text = "1001"; }
		if (cobRmNo->Text == "002") { txtExt->Text = "1002"; }
		if (cobRmNo->Text == "003") { txtExt->Text = "1003"; }
		if (cobRmNo->Text == "004") { txtExt->Text = "1004"; }
		if (cobRmNo->Text == "005") { txtExt->Text = "1005"; }
		if (cobRmNo->Text == "006") { txtExt->Text = "1006"; }
		if (cobRmNo->Text == "007") { txtExt->Text = "1007"; }
		if (cobRmNo->Text == "008") { txtExt->Text = "1008"; }
		if (cobRmNo->Text == "009") { txtExt->Text = "1009"; }
		if (cobRmNo->Text == "010") { txtExt->Text = "1010"; }
		
	}

	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
		sqlConn->Close();
	}
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	NoOfDays();
}
private: System::Void dateTimePicker4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	NoOfDays();

}
	   };
	   }
	   


