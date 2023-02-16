#include "Lista.h"
#include <iostream>

int main()
{
    Lista lista;
    Elemento cancion1("Cancion 1");
    Elemento cancion2("Cancion 2");
    Elemento cancion3("Cancion 3");
    Elemento cancion4("Cancion 4");
    Elemento *cancion5 = new Elemento("Cancion 5");
    lista.Agregar(&cancion1);
    lista.Agregar(&cancion2);
    lista.Agregar(&cancion3);
    lista.Agregar(&cancion4);
    lista.Agregar(cancion5);

    Elemento *i = lista.GetPrimer();

    while (i != nullptr)
    {
        std::cout << i->GetNombre() << std::endl;
        i = i->GetSiguiente();
    }

    delete cancion5;
    return 0;
}
