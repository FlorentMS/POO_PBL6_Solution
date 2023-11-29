#pragma once
#include "CLservices.h"

namespace POOPBL6SOLUTION {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_adresse;



	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ firstName;
	private: System::Windows::Forms::Label^ lastName;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ adresse;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->firstName = (gcnew System::Windows::Forms::Label());
			this->lastName = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->adresse = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(16, 15);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(629, 185);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(544, 351);
			this->btn_load->Margin = System::Windows::Forms::Padding(4);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(100, 33);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(20, 351);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(100, 33);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(236, 351);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(100, 33);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(128, 351);
			this->btn_update->Margin = System::Windows::Forms::Padding(4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(100, 33);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(84, 292);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(70, 22);
			this->txt_id->TabIndex = 5;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_id_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(411, 243);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(233, 22);
			this->txt_nom->TabIndex = 6;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_nom_TextChanged);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(84, 243);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(233, 22);
			this->txt_prenom->TabIndex = 7;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_prenom_TextChanged);
			// 
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(243, 292);
			this->txt_adresse->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(402, 22);
			this->txt_adresse->TabIndex = 8;
			this->txt_adresse->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_adresse_TextChanged);
			// 
			// firstName
			// 
			this->firstName->AutoSize = true;
			this->firstName->Location = System::Drawing::Point(13, 246);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(64, 16);
			this->firstName->TabIndex = 9;
			this->firstName->Text = L"first name";
			// 
			// lastName
			// 
			this->lastName->AutoSize = true;
			this->lastName->Location = System::Drawing::Point(339, 246);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(65, 16);
			this->lastName->TabIndex = 10;
			this->lastName->Text = L"last name";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Location = System::Drawing::Point(57, 295);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(20, 16);
			this->ID->TabIndex = 11;
			this->ID->Text = L"ID";
			// 
			// adresse
			// 
			this->adresse->AutoSize = true;
			this->adresse->Location = System::Drawing::Point(179, 295);
			this->adresse->Name = L"adresse";
			this->adresse->Size = System::Drawing::Size(57, 16);
			this->adresse->TabIndex = 12;
			this->adresse->Text = L"adresse";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 409);
			this->Controls->Add(this->adresse);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->lastName);
			this->Controls->Add(this->firstName);
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text, this->txt_adresse->Text);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvc->supprimerUnePersonne(this->txt_id->Text);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvc->modifierUnePersonne(this->txt_id->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_adresse->Text);
	}

	private: System::Void txt_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_adresse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}