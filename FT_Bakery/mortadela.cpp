/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "comida.hpp"
#include "mortadela.hpp"

using namespace std;

Mortadella::Mortadella(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string Mortadella::getDescricao()
   { 
   return ("Mortadela " + tipo + " - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */