#pragma once
#include <string>

class Elemento
{
public:
    Elemento(std::string nombre);
    ~Elemento();
    std::string GetNombre() { return _nombre; }
    void SetSiguiente(Elemento *siguiente) { _siguiente = siguiente; }
    Elemento *GetSiguiente() { return _siguiente; }

private:
    std::string _nombre;
    Elemento *_siguiente;
};