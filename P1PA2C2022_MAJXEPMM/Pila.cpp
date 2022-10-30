#include "Pila.h"
#include "Nodo.h"

bool Pila::Pilavacia() {
	if (cabeza == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Nodo^ Pila::quitar() {
	Nodo^ temp = gcnew Nodo;
	if (cabeza != nullptr)
	{
		temp->artista = cabeza->artista;
		temp->cancion = cabeza->cancion;
		Nodo^ aux = cabeza;
		cabeza = cabeza->siguiente;
		if (cabeza == nullptr)
		{
			delete(aux);
		}
	}
	return temp;
}

void Pila::insertar(Nodo^ nododecola) {
	tamaño++;
	Nodo^ nuevo = gcnew Nodo();
	nuevo->artista = nododecola->artista;
	nuevo->cancion = nododecola->cancion;
	if (cabeza == nullptr)
	{
		nuevo->siguiente = nullptr;
		cabeza = nuevo;
	}
	else
	{
		Nodo^ temp = cabeza;
		while (temp->siguiente)
		{
			temp = temp->siguiente;
		}
		temp->siguiente = nuevo;
	}
}

void Pila::ordenarascendenteart(Nodo^ cabeza) {
	Nodo^ pivote = gcnew Nodo();
	Nodo^ actual = gcnew Nodo();
	pivote = cabeza;
	int compare;
	String^ temp;
	String^ temp2;
	while (pivote != nullptr)
	{
		actual = pivote->siguiente;

		while (actual != nullptr)
		{
			compare = String::Compare(pivote->cancion, actual->cancion);
			if (compare == 1)
			{
				temp = pivote->cancion;
				temp2 = pivote->artista;
				pivote->cancion = actual->cancion;
				pivote->artista = actual->artista;
				actual->cancion = temp;
				actual->artista = temp2;
			}
			actual = actual->siguiente;
		}
		pivote = pivote->siguiente;
	}
}

void Pila::ordenarascendentecan(Nodo^ cabeza) {
	Nodo^ pivote = gcnew Nodo();
	Nodo^ actual = gcnew Nodo();
	pivote = cabeza;
	int compare;
	String^ temp;
	String^ temp2;
	while (pivote != nullptr)
	{
		actual = pivote->siguiente;
		while (actual != nullptr)
		{
			compare = String::Compare(pivote->artista, actual->artista);
			if (compare == 1)
			{
				temp = pivote->cancion;
				temp2 = pivote->artista;
				pivote->cancion = actual->cancion;
				pivote->artista = actual->artista;
				actual->cancion = temp;
				actual->artista = temp2;
			}
			actual = actual->siguiente;
		}
		pivote = pivote->siguiente;
	}
}