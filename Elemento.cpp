#include <iostream>
#include "Elemento.h"

Elemento::Elemento(std::string nombre) : _nombre(nombre), _siguiente(nullptr)
{
    std::cout << "Está naciendo el elemento " << _nombre << std::endl;
}

Elemento::~Elemento()
{
    std::cout << "Está destruyéndose el elemento " << _nombre << std::endl;    
}