/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

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

/* fim de arquivo */