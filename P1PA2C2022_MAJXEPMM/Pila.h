#pragma once
#include "Nodo.h"
#include "MyForm.h"

ref class Pila
{
public:
	Nodo^ cabeza;
	int tamaño = 0;
	bool Pilavacia();
	Nodo^ quitar();
	void insertar(Nodo^ decola);
	void ordenarascendenteart(Nodo^ p);
	void ordenarascendentecan(Nodo^ p);
};