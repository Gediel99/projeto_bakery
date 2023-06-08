/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include "comida.hpp"
#include "presunto.hpp"

using namespace std;

Ham::Ham(string marca, float peso, double valor) : Food(valor)
   {
   this->marca = marca;
   this->peso = peso;
   };
   
string Ham::getDescricao()
   { 
   return ("Presunto - " + marca + " - " + to_string(peso) + " g."); 
   };
   
/* fim de arquivo */