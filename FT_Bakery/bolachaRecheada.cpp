/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include "bolacha.hpp"
#include "bolachaRecheada.hpp"

using namespace std;

FilledWafer::FilledWafer(string tipo, string recheio, int unidades, double valor) : Cracker(tipo, unidades, valor)
   {
   this->recheio = recheio;
   };
   
string FilledWafer::getDescricao()
   { 
   return ("Bolacha Recheada com " + recheio + " - " + Cracker::getDescricao()); 
   };
   
/* fim de arquivo */