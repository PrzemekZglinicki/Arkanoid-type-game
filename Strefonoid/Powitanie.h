#pragma once

#include "Gra.h"
#include "Autor.h"
#include "OAutorze2.h"

namespace Strefonoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Powitanie
	/// </summary>
	public ref class Powitanie : public System::Windows::Forms::Form
	{
	public:
		Powitanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Powitanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  OAutorze;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^  Graj;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Powitanie::typeid));
			this->OAutorze = (gcnew System::Windows::Forms::PictureBox());
			this->Graj = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OAutorze))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Graj))->BeginInit();
			this->SuspendLayout();
			// 
			// OAutorze
			// 
			this->OAutorze->BackColor = System::Drawing::Color::Transparent;
			this->OAutorze->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OAutorze->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OAutorze.Image")));
			this->OAutorze->Location = System::Drawing::Point(428, 303);
			this->OAutorze->Name = L"OAutorze";
			this->OAutorze->Size = System::Drawing::Size(169, 85);
			this->OAutorze->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->OAutorze->TabIndex = 0;
			this->OAutorze->TabStop = false;
			this->OAutorze->Click += gcnew System::EventHandler(this, &Powitanie::OAutorze_Click);
			// 
			// Graj
			// 
			this->Graj->BackColor = System::Drawing::Color::Transparent;
			this->Graj->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Graj->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Graj.Image")));
			this->Graj->Location = System::Drawing::Point(98, 302);
			this->Graj->Name = L"Graj";
			this->Graj->Size = System::Drawing::Size(169, 86);
			this->Graj->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Graj->TabIndex = 1;
			this->Graj->TabStop = false;
			this->Graj->Click += gcnew System::EventHandler(this, &Powitanie::Graj_Click);
			// 
			// Powitanie
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(702, 493);
			this->Controls->Add(this->Graj);
			this->Controls->Add(this->OAutorze);
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(720, 540);
			this->MinimumSize = System::Drawing::Size(720, 540);
			this->Name = L"Powitanie";
			this->Text = L"Arkanoid";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OAutorze))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Graj))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Graj_Click(System::Object^  sender, System::EventArgs^  e) {
		Gra^ Play = gcnew Gra;
		Play->Show();
		this->Close();

	}
	private: System::Void OAutorze_Click(System::Object^  sender, System::EventArgs^  e) {
		Autor^ autor = gcnew Autor;
		autor->Show();
	}
	};
}
