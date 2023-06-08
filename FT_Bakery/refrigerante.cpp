/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>

#include "liquido.hpp"
#include "refrigerante.hpp"

using namespace std;

Soda::Soda(string sabor, string marca, int unidades, double valor) : Liquid(unidades,valor)
{
    this->sabor = sabor;
    this->marca = marca;
};

string Soda::getDescricao()
{
    return ("Refrigerante de " + sabor + " - " + marca + " - " + Liquid::getDescricao());
};
/* fim de arquivo */