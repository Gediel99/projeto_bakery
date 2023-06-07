#include <string>

#include "cerveja.hpp"
#include "cerva3.hpp"

using namespace std;

Beer3::Beer3(string tipo, string marca, int unidades, double valor) : Beer(marca,unidades,valor)
    {
        this->tipo = "Cerveja3";
    };

string Beer3::getDescricao()
    {
        return (tipo + " - " + Beer::getDescricao());
    };