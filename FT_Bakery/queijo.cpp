/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include "comida.hpp"
#include "queijo.hpp"

using namespace std;

Cheese::Cheese(string type, string marca, float peso, double valor) : Food(valor)
   {
   this->tipo = type;
   this->marca = marca;
   this->peso = peso;
   };
   
string Cheese::getDescricao()
   { 
   return ("Queijo " + tipo + " - " + marca + " - " + to_string(peso) + " g."); 
   };
   
/* fim de arquivo */