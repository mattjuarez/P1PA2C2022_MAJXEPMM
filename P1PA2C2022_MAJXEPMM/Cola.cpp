#include "Cola.h"
#include"Nodo.h"

void Cola::encolar(String^ artis, String^ song) {
	Nodo^ nuevo = gcnew Nodo();
	nuevo->artista = artis;
	nuevo->cancion = song;
	if (cabeza == nullptr)
	{
		cabeza = nuevo;
		cola = nuevo;
	}
	else
	{
		cola->siguiente = nuevo;
		cola = nuevo;
	}
}

Nodo^ Cola::desencolar() {
	Nodo^ retornar = gcnew Nodo();
	if (cabeza)
	{
		retornar->artista = cabeza->artista;
		retornar->cancion = cabeza->cancion;
		Nodo^ aux = cabeza;
		cabeza = cabeza->siguiente;
		if (cabeza == nullptr)
		{
			cola = nullptr;
		}
		delete (aux);
	}
	return retornar;
}

int Cola::tamaño() {
	int cantidad = 0;
	for (Nodo^ i = cabeza; i != nullptr; i = i->siguiente)
	{
		cantidad++;
	}
	return cantidad;
}

bool Cola::Colavacia() {
	return cabeza == nullptr;
}