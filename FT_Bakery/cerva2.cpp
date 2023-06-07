#include <string>

#include "cerveja.hpp"
#include "cerva2.hpp"

using namespace std;

Beer2::Beer2(string tipo, string marca, int unidades, double valor) : Beer(marca,unidades,valor)
    {
        this->tipo = "Cerveja3";
    };

string Beer2::getDescricao()
    {
        return (tipo + " - " + Beer::getDescricao());
    };