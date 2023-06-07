/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

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
/* fim de arquivo */