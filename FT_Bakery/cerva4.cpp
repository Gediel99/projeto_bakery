/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

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

/* fim de arquivo */