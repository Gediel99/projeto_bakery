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

Cheese::Cheese(string tipo, int unidades, double valor) : Food(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Cheese::getDescricao()
   { 
   return ("Queijo " + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */