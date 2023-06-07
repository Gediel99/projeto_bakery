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
#include "bolacha.hpp"

using namespace std;

Cracker::Cracker(string tipo, int unidades, double valor) : Food(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Cracker::getDescricao()
   { 
   return ("Bolacha " + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */