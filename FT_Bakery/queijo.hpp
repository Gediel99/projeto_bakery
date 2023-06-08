/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef QUEIJO_H
   #define QUEIJO_H

#include <string>
#include "comida.hpp"

using namespace std;

class Cheese : public Food
   {
   private:
      string tipo;
      string marca;
      float peso;
      
   public:
      Cheese(string, string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */