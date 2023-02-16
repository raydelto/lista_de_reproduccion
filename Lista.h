#pragma once
#include "Elemento.h"

class Lista
{
public:
    Lista();
    ~Lista();
    void Agregar(Elemento *elemento);
    Elemento *GetPrimer() { return _primer; }

private:
    Elemento *_primer;
    Elemento *_ultimo;
};