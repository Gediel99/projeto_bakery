/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

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

/* fim de arquivo */