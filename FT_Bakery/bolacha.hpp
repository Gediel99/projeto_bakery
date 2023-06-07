/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef BOLHACHA_H
#define BOLHACHA_D_H

#include <string>
#include "comida.hpp"

using namespace std;

class Cracker : public Food
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Cracker(string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */