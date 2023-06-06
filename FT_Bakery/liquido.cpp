#include <string>
#include "comida.hpp"
#include "liquido.hpp"

using namespace std;

Liquid::Liquid(int unidades, double valor) : Food(valor)
   {
   this->unidades = unidades;
   };
   
string Liquid::getDescricao()
   { 
   return (to_string(unidades) + " un/pacote"); 
   };
   