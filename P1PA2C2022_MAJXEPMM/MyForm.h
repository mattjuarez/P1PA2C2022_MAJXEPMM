#pragma once
#include<iostream>
#include <stdlib.h>
#include<fstream>
#include <infstr.h>
#include "Cola.h"
#include "Pila.h"
#include<string.h>

namespace P1PA2C2022MAJXEPMM {
	int b;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int i = 0;
		Cola^ cola1 = gcnew Cola();
		Pila^ pila1 = gcnew Pila();
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	public:
		Nodo^ nodoaux;
		MyForm(void)
		{
			InitializeComponent();
			Cola^ cola1 = gcnew Cola();
			Pila^ pila1 = gcnew Pila();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GOVOpcionesOrden;
	protected:
	private: System::Windows::Forms::TextBox^ inputartista;
	private: System::Windows::Forms::TextBox^ inputcancion;
	private: System::Windows::Forms::Button^ BtnOrdenCancion;
	private: System::Windows::Forms::Button^ BtnOrdenArtista;
	private: System::Windows::Forms::Button^ BtnExportarPlaylist;
	private: System::Windows::Forms::GroupBox^ GOVReproductor;
	private: System::Windows::Forms::TextBox^ TxtReproductorMusica;
	private: System::Windows::Forms::Button^ BtnReproducir;
	private: System::Windows::Forms::Label^ LblNombre;
	private: System::Windows::Forms::GroupBox^ GOVQueue;
	private: System::Windows::Forms::Button^ BtnAgregarCanciones;
	private: System::Windows::Forms::TextBox^ TxtQueue;
	private: System::Windows::Forms::GroupBox^ GOVPlaylist;
	private: System::Windows::Forms::TextBox^ TxtPlaylist;
	private: System::Windows::Forms::GroupBox^ GOVOpciones;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::TextBox^ TxtEliminarCancion;
	private: System::Windows::Forms::Label^ LblEliminarCancion;
	private: System::Windows::Forms::Button^ BtnAgregarAQueue;
	private: System::Windows::Forms::TextBox^ TxtCancion;
	private: System::Windows::Forms::TextBox^ TxtArtista;
	private: System::Windows::Forms::Label^ LblCancion;
	private: System::Windows::Forms::Label^ LblArtista;
	private: System::Windows::Forms::Button^ BtnImportarPlaylist;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->GOVOpcionesOrden = (gcnew System::Windows::Forms::GroupBox());
			this->BtnOrdenCancion = (gcnew System::Windows::Forms::Button());
			this->BtnOrdenArtista = (gcnew System::Windows::Forms::Button());
			this->BtnExportarPlaylist = (gcnew System::Windows::Forms::Button());
			this->GOVReproductor = (gcnew System::Windows::Forms::GroupBox());
			this->TxtReproductorMusica = (gcnew System::Windows::Forms::TextBox());
			this->BtnReproducir = (gcnew System::Windows::Forms::Button());
			this->LblNombre = (gcnew System::Windows::Forms::Label());
			this->GOVQueue = (gcnew System::Windows::Forms::GroupBox());
			this->BtnAgregarCanciones = (gcnew System::Windows::Forms::Button());
			this->TxtQueue = (gcnew System::Windows::Forms::TextBox());
			this->GOVPlaylist = (gcnew System::Windows::Forms::GroupBox());
			this->TxtPlaylist = (gcnew System::Windows::Forms::TextBox());
			this->GOVOpciones = (gcnew System::Windows::Forms::GroupBox());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->TxtEliminarCancion = (gcnew System::Windows::Forms::TextBox());
			this->LblEliminarCancion = (gcnew System::Windows::Forms::Label());
			this->BtnAgregarAQueue = (gcnew System::Windows::Forms::Button());
			this->TxtCancion = (gcnew System::Windows::Forms::TextBox());
			this->TxtArtista = (gcnew System::Windows::Forms::TextBox());
			this->LblCancion = (gcnew System::Windows::Forms::Label());
			this->LblArtista = (gcnew System::Windows::Forms::Label());
			this->BtnImportarPlaylist = (gcnew System::Windows::Forms::Button());
			this->GOVOpcionesOrden->SuspendLayout();
			this->GOVReproductor->SuspendLayout();
			this->GOVQueue->SuspendLayout();
			this->GOVPlaylist->SuspendLayout();
			this->GOVOpciones->SuspendLayout();
			this->SuspendLayout();
			// 
			// GOVOpcionesOrden
			// 
			this->GOVOpcionesOrden->Controls->Add(this->BtnOrdenCancion);
			this->GOVOpcionesOrden->Controls->Add(this->BtnOrdenArtista);
			this->GOVOpcionesOrden->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GOVOpcionesOrden->ForeColor = System::Drawing::SystemColors::Desktop;
			this->GOVOpcionesOrden->Location = System::Drawing::Point(1117, 639);
			this->GOVOpcionesOrden->Name = L"GOVOpcionesOrden";
			this->GOVOpcionesOrden->Size = System::Drawing::Size(337, 174);
			this->GOVOpcionesOrden->TabIndex = 11;
			this->GOVOpcionesOrden->TabStop = false;
			this->GOVOpcionesOrden->Text = L"Opciones de orden";
			// 
			// BtnOrdenCancion
			// 
			this->BtnOrdenCancion->Location = System::Drawing::Point(36, 101);
			this->BtnOrdenCancion->Name = L"BtnOrdenCancion";
			this->BtnOrdenCancion->Size = System::Drawing::Size(244, 35);
			this->BtnOrdenCancion->TabIndex = 1;
			this->BtnOrdenCancion->Text = L"Canción";
			this->BtnOrdenCancion->UseVisualStyleBackColor = true;
			this->BtnOrdenCancion->Click += gcnew System::EventHandler(this, &MyForm::BtnOrdenCancion_Click);
			// 
			// BtnOrdenArtista
			// 
			this->BtnOrdenArtista->Location = System::Drawing::Point(36, 46);
			this->BtnOrdenArtista->Name = L"BtnOrdenArtista";
			this->BtnOrdenArtista->Size = System::Drawing::Size(244, 37);
			this->BtnOrdenArtista->TabIndex = 0;
			this->BtnOrdenArtista->Text = L"Artista";
			this->BtnOrdenArtista->UseVisualStyleBackColor = true;
			this->BtnOrdenArtista->Click += gcnew System::EventHandler(this, &MyForm::BtnOrdenArtista_Click);
			// 
			// BtnExportarPlaylist
			// 
			this->BtnExportarPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnExportarPlaylist->Location = System::Drawing::Point(755, 670);
			this->BtnExportarPlaylist->Name = L"BtnExportarPlaylist";
			this->BtnExportarPlaylist->Size = System::Drawing::Size(175, 66);
			this->BtnExportarPlaylist->TabIndex = 6;
			this->BtnExportarPlaylist->Text = L"Exportar Playlist";
			this->BtnExportarPlaylist->UseVisualStyleBackColor = true;
			this->BtnExportarPlaylist->Click += gcnew System::EventHandler(this, &MyForm::BtnExportarPlaylist_Click);
			// 
			// GOVReproductor
			// 
			this->GOVReproductor->Controls->Add(this->TxtReproductorMusica);
			this->GOVReproductor->Controls->Add(this->BtnReproducir);
			this->GOVReproductor->Controls->Add(this->LblNombre);
			this->GOVReproductor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GOVReproductor->ForeColor = System::Drawing::SystemColors::Desktop;
			this->GOVReproductor->Location = System::Drawing::Point(86, 791);
			this->GOVReproductor->Name = L"GOVReproductor";
			this->GOVReproductor->Size = System::Drawing::Size(730, 163);
			this->GOVReproductor->TabIndex = 10;
			this->GOVReproductor->TabStop = false;
			this->GOVReproductor->Text = L"Reproductor";
			// 
			// TxtReproductorMusica
			// 
			this->TxtReproductorMusica->Location = System::Drawing::Point(51, 70);
			this->TxtReproductorMusica->Name = L"TxtReproductorMusica";
			this->TxtReproductorMusica->Size = System::Drawing::Size(364, 28);
			this->TxtReproductorMusica->TabIndex = 3;
			// 
			// BtnReproducir
			// 
			this->BtnReproducir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnReproducir.BackgroundImage")));
			this->BtnReproducir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BtnReproducir->Location = System::Drawing::Point(529, 38);
			this->BtnReproducir->Name = L"BtnReproducir";
			this->BtnReproducir->Size = System::Drawing::Size(108, 90);
			this->BtnReproducir->TabIndex = 2;
			this->BtnReproducir->UseVisualStyleBackColor = true;
			this->BtnReproducir->Click += gcnew System::EventHandler(this, &MyForm::BtnReproducir_Click);
			// 
			// LblNombre
			// 
			this->LblNombre->AutoSize = true;
			this->LblNombre->Location = System::Drawing::Point(60, 87);
			this->LblNombre->Name = L"LblNombre";
			this->LblNombre->Size = System::Drawing::Size(0, 21);
			this->LblNombre->TabIndex = 0;
			// 
			// GOVQueue
			// 
			this->GOVQueue->Controls->Add(this->BtnAgregarCanciones);
			this->GOVQueue->Controls->Add(this->TxtQueue);
			this->GOVQueue->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GOVQueue->ForeColor = System::Drawing::SystemColors::Desktop;
			this->GOVQueue->Location = System::Drawing::Point(1117, 72);
			this->GOVQueue->Name = L"GOVQueue";
			this->GOVQueue->Size = System::Drawing::Size(347, 527);
			this->GOVQueue->TabIndex = 8;
			this->GOVQueue->TabStop = false;
			this->GOVQueue->Text = L"Queue";
			// 
			// BtnAgregarCanciones
			// 
			this->BtnAgregarCanciones->Location = System::Drawing::Point(77, 408);
			this->BtnAgregarCanciones->Name = L"BtnAgregarCanciones";
			this->BtnAgregarCanciones->Size = System::Drawing::Size(203, 59);
			this->BtnAgregarCanciones->TabIndex = 7;
			this->BtnAgregarCanciones->Text = L"Agregar canciones a playlist";
			this->BtnAgregarCanciones->UseVisualStyleBackColor = true;
			this->BtnAgregarCanciones->Click += gcnew System::EventHandler(this, &MyForm::BtnAgregarCanciones_Click);
			// 
			// TxtQueue
			// 
			this->TxtQueue->Location = System::Drawing::Point(36, 37);
			this->TxtQueue->Multiline = true;
			this->TxtQueue->Name = L"TxtQueue";
			this->TxtQueue->Size = System::Drawing::Size(274, 336);
			this->TxtQueue->TabIndex = 1;
			// 
			// GOVPlaylist
			// 
			this->GOVPlaylist->Controls->Add(this->TxtPlaylist);
			this->GOVPlaylist->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GOVPlaylist->ForeColor = System::Drawing::SystemColors::Desktop;
			this->GOVPlaylist->Location = System::Drawing::Point(462, 72);
			this->GOVPlaylist->Name = L"GOVPlaylist";
			this->GOVPlaylist->Size = System::Drawing::Size(554, 566);
			this->GOVPlaylist->TabIndex = 7;
			this->GOVPlaylist->TabStop = false;
			this->GOVPlaylist->Text = L"Playlist";
			// 
			// TxtPlaylist
			// 
			this->TxtPlaylist->Location = System::Drawing::Point(27, 47);
			this->TxtPlaylist->Multiline = true;
			this->TxtPlaylist->Name = L"TxtPlaylist";
			this->TxtPlaylist->Size = System::Drawing::Size(498, 480);
			this->TxtPlaylist->TabIndex = 0;
			// 
			// GOVOpciones
			// 
			this->GOVOpciones->Controls->Add(this->BtnEliminar);
			this->GOVOpciones->Controls->Add(this->TxtEliminarCancion);
			this->GOVOpciones->Controls->Add(this->LblEliminarCancion);
			this->GOVOpciones->Controls->Add(this->BtnAgregarAQueue);
			this->GOVOpciones->Controls->Add(this->TxtCancion);
			this->GOVOpciones->Controls->Add(this->TxtArtista);
			this->GOVOpciones->Controls->Add(this->LblCancion);
			this->GOVOpciones->Controls->Add(this->LblArtista);
			this->GOVOpciones->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GOVOpciones->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GOVOpciones->ForeColor = System::Drawing::SystemColors::Desktop;
			this->GOVOpciones->Location = System::Drawing::Point(86, 33);
			this->GOVOpciones->Name = L"GOVOpciones";
			this->GOVOpciones->Size = System::Drawing::Size(318, 605);
			this->GOVOpciones->TabIndex = 5;
			this->GOVOpciones->TabStop = false;
			this->GOVOpciones->Text = L"Opciones";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Location = System::Drawing::Point(112, 491);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(93, 38);
			this->BtnEliminar->TabIndex = 11;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &MyForm::BtnEliminar_Click);
			// 
			// TxtEliminarCancion
			// 
			this->TxtEliminarCancion->Location = System::Drawing::Point(51, 447);
			this->TxtEliminarCancion->Name = L"TxtEliminarCancion";
			this->TxtEliminarCancion->Size = System::Drawing::Size(203, 28);
			this->TxtEliminarCancion->TabIndex = 10;
			// 
			// LblEliminarCancion
			// 
			this->LblEliminarCancion->AutoSize = true;
			this->LblEliminarCancion->Location = System::Drawing::Point(79, 402);
			this->LblEliminarCancion->Name = L"LblEliminarCancion";
			this->LblEliminarCancion->Size = System::Drawing::Size(159, 21);
			this->LblEliminarCancion->TabIndex = 9;
			this->LblEliminarCancion->Text = L"Eliminar canción";
			// 
			// BtnAgregarAQueue
			// 
			this->BtnAgregarAQueue->Location = System::Drawing::Point(51, 274);
			this->BtnAgregarAQueue->Name = L"BtnAgregarAQueue";
			this->BtnAgregarAQueue->Size = System::Drawing::Size(203, 70);
			this->BtnAgregarAQueue->TabIndex = 8;
			this->BtnAgregarAQueue->Text = L"Agregar a la fila de reproducción";
			this->BtnAgregarAQueue->UseVisualStyleBackColor = true;
			this->BtnAgregarAQueue->Click += gcnew System::EventHandler(this, &MyForm::BtnAgregarAQueue_Click);
			// 
			// TxtCancion
			// 
			this->TxtCancion->Location = System::Drawing::Point(51, 210);
			this->TxtCancion->Name = L"TxtCancion";
			this->TxtCancion->Size = System::Drawing::Size(203, 28);
			this->TxtCancion->TabIndex = 6;
			// 
			// TxtArtista
			// 
			this->TxtArtista->Location = System::Drawing::Point(51, 101);
			this->TxtArtista->Name = L"TxtArtista";
			this->TxtArtista->Size = System::Drawing::Size(203, 28);
			this->TxtArtista->TabIndex = 5;
			// 
			// LblCancion
			// 
			this->LblCancion->AutoSize = true;
			this->LblCancion->Location = System::Drawing::Point(108, 163);
			this->LblCancion->Name = L"LblCancion";
			this->LblCancion->Size = System::Drawing::Size(83, 21);
			this->LblCancion->TabIndex = 4;
			this->LblCancion->Text = L"Canción";
			// 
			// LblArtista
			// 
			this->LblArtista->AutoSize = true;
			this->LblArtista->Location = System::Drawing::Point(108, 61);
			this->LblArtista->Name = L"LblArtista";
			this->LblArtista->Size = System::Drawing::Size(69, 21);
			this->LblArtista->TabIndex = 3;
			this->LblArtista->Text = L"Artista";
			// 
			// BtnImportarPlaylist
			// 
			this->BtnImportarPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnImportarPlaylist->Location = System::Drawing::Point(548, 670);
			this->BtnImportarPlaylist->Name = L"BtnImportarPlaylist";
			this->BtnImportarPlaylist->Size = System::Drawing::Size(175, 66);
			this->BtnImportarPlaylist->TabIndex = 9;
			this->BtnImportarPlaylist->Text = L"Importar Playlist";
			this->BtnImportarPlaylist->UseVisualStyleBackColor = true;
			this->BtnImportarPlaylist->Click += gcnew System::EventHandler(this, &MyForm::BtnImportarPlaylist_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->ClientSize = System::Drawing::Size(1551, 986);
			this->Controls->Add(this->GOVOpcionesOrden);
			this->Controls->Add(this->BtnExportarPlaylist);
			this->Controls->Add(this->GOVReproductor);
			this->Controls->Add(this->GOVQueue);
			this->Controls->Add(this->GOVPlaylist);
			this->Controls->Add(this->GOVOpciones);
			this->Controls->Add(this->BtnImportarPlaylist);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->GOVOpcionesOrden->ResumeLayout(false);
			this->GOVReproductor->ResumeLayout(false);
			this->GOVReproductor->PerformLayout();
			this->GOVQueue->ResumeLayout(false);
			this->GOVQueue->PerformLayout();
			this->GOVPlaylist->ResumeLayout(false);
			this->GOVPlaylist->PerformLayout();
			this->GOVOpciones->ResumeLayout(false);
			this->GOVOpciones->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnImportarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
		Nodo^ auxiliarpila = gcnew Nodo;
		String^ artista;
		String^ cancion;

		openFileDialog1->Filter = "archivos (csv)| *.csv";
		openFileDialog1->FileName = "";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			array<String^>^ archivolineas = File::ReadAllLines(openFileDialog1->FileName);
			if (archivolineas->Length > 0)
			{

				for (int i = 0; i < archivolineas->Length; i++)
				{
					array<String^>^ archivoparejas = archivolineas[i]->Split(',');
					for (int j = 0; j < archivoparejas->Length; j++)
					{
						array<String^>^ archivocancionartista = archivoparejas[j]->Split('-');
						artista = archivocancionartista[0];
						cancion = archivocancionartista[1];
						validacionvacio(artista);
						auxiliarpila->artista = artista;
						auxiliarpila->cancion = cancion;
						pila1->insertar(auxiliarpila);
					}
				}
			}
			imprimirpila();
		}
	}
		   
private: System::Void BtnAgregarAQueue_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Artista;
	String^ cancion;
	Artista = inputartista->Text;
	cancion = inputcancion->Text;
	if (inputartista->Text == "")
	{
		Artista = "desconocido";
		cola1->encolar(Artista, cancion);
	}
	else
	{
		cola1->encolar(Artista, cancion);
	}

	TxtQueue->AppendText(Artista + "-" + cancion + Environment::NewLine);
	inputartista->Clear();
	inputcancion->Clear();
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	Nodo^ guardar;
	Nodo^ auxiliar;
	Nodo^ anterior;

	guardar = cola1->cabeza;
	if (cola1->cabeza->cancion != TxtEliminarCancion->Text)
	{
		while (cola1->cabeza->cancion != TxtEliminarCancion->Text)
		{
			anterior = cola1->desencolar();
			cola1->encolar(anterior->artista, anterior->cancion);
		}
		cola1->desencolar();
	}
	else
	{
		cola1->desencolar();
		guardar = cola1->cabeza;
	}
	if (cola1->cabeza != nullptr)
	{
		while (cola1->cabeza->cancion != guardar->cancion)
		{
			anterior = cola1->desencolar();
			cola1->encolar(anterior->artista, anterior->cancion);
		}
	}
	TxtEliminarCancion->Clear();
	TxtQueue->Clear();
	auxiliar = cola1->cabeza;
	while (auxiliar != nullptr)
	{
		TxtQueue->AppendText(auxiliar->artista + " - " + auxiliar->cancion + Environment::NewLine);
		auxiliar = auxiliar->siguiente;
	}
}
private: System::Void BtnExportarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
	Nodo^ auxiliar;
	auxiliar = pila1->cabeza;

	Stream^ fs = gcnew FileStream("./playlist.txt", FileMode::Create, FileAccess::Write);

	StreamWriter^ sr = gcnew StreamWriter(fs);
	int tamaño = pila1->tamaño;
	while (tamaño != 0)
	{
		sr->WriteLine(auxiliar->artista + "-" + auxiliar->cancion);
		auxiliar = auxiliar->siguiente;
		pila1->tamaño;
		tamaño--;
	}

	sr->Close();
	fs->Close();

	MessageBox::Show("Playlist exportada" + ",Archivo guardado en directorio del ejecutable de proyecto",
		"Archivo exportado", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void BtnAgregarCanciones_Click(System::Object^ sender, System::EventArgs^ e) {
	nodoaux = cola1->cabeza;

	TxtQueue->Clear();
	while (nodoaux != nullptr)
	{
		pila1->insertar(cola1->desencolar());
		TxtPlaylist->Text += nodoaux->artista + " - " + nodoaux->cancion + Environment::NewLine;
		nodoaux = nodoaux->siguiente;
	}
}
private: System::Void BtnReproducir_Click(System::Object^ sender, System::EventArgs^ e) {
	Nodo^ auxi;

	if (pila1->cabeza == nullptr)
	{
		if (cola1->cabeza == nullptr)
		{
			MessageBox::Show("Cola vacia" + "",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			pila1->insertar(cola1->desencolar());
			TxtReproductorMusica->Text = (pila1->cabeza->artista + " - " + pila1->cabeza->cancion);
		}
	}
	else
	{
		TxtReproductorMusica->Text = (pila1->cabeza->artista + " - " + pila1->cabeza->cancion);
	}
	TxtPlaylist->Clear();
	pila1->quitar();
	auxi = pila1->cabeza;
	while (auxi != nullptr)
	{
		TxtPlaylist->AppendText(auxi->artista + "-" + auxi->cancion + Environment::NewLine);
		auxi = auxi->siguiente;
	}
}
private: System::Void BtnOrdenArtista_Click(System::Object^ sender, System::EventArgs^ e) {
	pila1->ordenarascendenteart(pila1->cabeza);
	TxtPlaylist->Clear();
	imprimirpila();
}
private: System::Void BtnOrdenCancion_Click(System::Object^ sender, System::EventArgs^ e) {
	pila1->ordenarascendentecan(pila1->cabeza);
	TxtPlaylist->Clear();
	imprimirpila();
}
	   void validacionvacio(String^& artista) {
		   if (artista == "")
		   {
			   artista = "desconocido";
		   }
	   }
	   void imprimirpila() {

		   Nodo^ auxi = gcnew Nodo;
		   auxi = pila1->cabeza;

		   int tamaño = pila1->tamaño;
		   while (tamaño != 0)
		   {
			   TxtPlaylist->Text += auxi->artista + " - " + auxi->cancion + Environment::NewLine;
			   auxi = auxi->siguiente;
			   tamaño--;
		   }

	   }
};
}