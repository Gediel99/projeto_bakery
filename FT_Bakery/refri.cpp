#include <string>

#include "liquido.hpp"
#include "refri.hpp"

using namespace std;

Soda::Soda(string tipo, string marca, int unidades, double valor) : Liquid(unidades,valor)
{
    this->tipo = tipo;
    this->marca = marca;
};

string Soda::getDescricao()
{
    return ("Refrigerante "+ tipo +" - " + marca + " - " + Liquid::getDescricao());
};
