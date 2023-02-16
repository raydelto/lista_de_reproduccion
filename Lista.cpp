#include <iostream>
#include "Lista.h"

Lista::Lista() : _primer(nullptr), _ultimo(nullptr)
{
    std::cout << "Está naciendo el objeto lista" << std::endl;
}

Lista::~Lista()
{
    std::cout << "Está destruyéndose el objeto lista" << std::endl;
}

void Lista::Agregar(Elemento *elemento)
{
    if (_primer == nullptr) // Si la lista está vacía
    {
        _primer = elemento;
    }
    else
    {
        _ultimo->SetSiguiente(elemento);
    }

    _ultimo = elemento;
}