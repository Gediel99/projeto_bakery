/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

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
/* fim de arquivo */