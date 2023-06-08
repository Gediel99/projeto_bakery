/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include "queijo.hpp"
#include "queijoCottage.hpp"

using namespace std;

CottageCheese::CottageCheese( string tipo, string marca, float peso, double valor) : Cheese(tipo, marca, peso, valor)
   {
   this->marca = marca;
   };
   
string CottageCheese::getDescricao()
   { 
   return (Cheese::getDescricao()); 
   };
   
/* fim de arquivo */