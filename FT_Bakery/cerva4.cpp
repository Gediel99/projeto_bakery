#include <string>

#include "cerveja.hpp"
#include "cerva4.hpp"

using namespace std;

Beer4::Beer4(string tipo, string marca, int unidades, double valor) : Beer(marca,unidades,valor)
    {
        this->tipo = "Cerveja4";
    };

string Beer4::getDescricao()
    {
        return(tipo + " - " + Beer::getDescricao());
    };