#include <string>
#include "cerveja.hpp"

using namespace std;

Beer::Beer(string marca, int unidades, double valor) : Liquid (unidades, valor)
    {
    this->marca = marca;
    };

string Beer::getDescricao()
    {
        return (marca + " - " + Liquid::getDescricao());
    }; 
