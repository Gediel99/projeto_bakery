#include <string>
#include "agua.hpp"
#include "liquido.hpp"

using namespace std;

Water::Water(string tipo, string marca, int unidades, double valor) : Liquid(unidades, valor)
    {
        this->tipo  = tipo;
        this->marca =marca;
    };

string Water::getDescricao()
    {
        return ("Agua " + tipo + " - Marca " + marca + " - " + Liquid::getDescricao());
    };
