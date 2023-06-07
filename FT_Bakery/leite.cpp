/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include "leite.hpp"
#include "liquido.hpp"

using namespace std;

Milk::Milk(string tipo, string marca, int unidades, double valor) : Liquid(unidades, valor)
   {
    this->tipo= tipo;
    this->marca = marca;
   };
   
string Milk::getDescricao()
   { 
   return ("Leite " + tipo + " - " + marca + " - " + Liquid::getDescricao()); 
   };
   
/* fim de arquivo */