/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include "comida.hpp"

using namespace std;

Food::Food(double valor)
   {
   this->valor = valor;
   };
   
double Food::getValor()
   { 
   return (valor); 
   };
   
/* fim de arquivo */