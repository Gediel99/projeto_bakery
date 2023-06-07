#include <string>

#include "cerveja.hpp"
#include "cerva1.hpp"

using namespace std;

Beer1::Beer1(string tipo, string marca, int unidades, double valor) : Beer(marca,unidades,valor)
    {
        this->tipo = "Cerveja3";
    };

string Beer1::getDescricao()
    {
        return (tipo + " - " + Beer::getDescricao());
    };