/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef PRESUNTO_H
   #define PRESUNTO_H

#include <string>
#include "comida.hpp"

using namespace std;

class Ham : public Food
   {
   private:
      string marca;
      float peso;
      
   public:
      Ham(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */