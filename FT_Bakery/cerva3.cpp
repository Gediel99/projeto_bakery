/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

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

/* fim de arquivo */