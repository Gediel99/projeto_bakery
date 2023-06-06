/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
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