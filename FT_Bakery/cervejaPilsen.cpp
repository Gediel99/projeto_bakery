/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>

#include "cerveja.hpp"
#include "cervejaPilsen.hpp"

using namespace std;

BeerPilsen::BeerPilsen(string tipo, string marca, int unidades, double valor) : Beer(marca,unidades,valor)
    {
        this->tipo = "Pilsen";
    };

string BeerPilsen::getDescricao()
    {
        return (tipo + " - " + Beer::getDescricao());
    };

/* fim de arquivo */