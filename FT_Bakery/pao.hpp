/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef A02EX03_C_H
   #define A02EX03_C_H

#include <string>
#include "comida.hpp"

using namespace std;

class Bread : public Food
   {
   private:
      string tipo;
      float peso;
      
   public:
      Bread(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */