#pragma once
#include "Nodo.h"

ref class Cola
{
public:
	Nodo^ cabeza;
	Nodo^ cola;
public:
	int cout;
	void encolar(String^ arts, String^ song);
	Nodo^ desencolar();
	int tamaño();
	bool Colavacia();
};