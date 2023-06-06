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
   return ("Leite " + tipo + " - "); 
   };
   
/* fim de arquivo */