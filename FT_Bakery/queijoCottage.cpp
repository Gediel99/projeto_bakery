/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "queijo.hpp"
#include "queijoCottage.hpp"

using namespace std;

CottageCheese::CottageCheese(string tipo, string marca, int unidades, double valor) : Cheese(tipo, unidades, valor)
   {
   this->marca = marca;
   };
   
string CottageCheese::getDescricao()
   { 
   return ("Queijo Cottage" + marca + " - " + Cheese::getDescricao()); 
   };
   
/* fim de arquivo */