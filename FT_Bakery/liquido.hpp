/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef LIQUIDO_H
   #define LIQUIDO_H

#include <string>
#include "comida.hpp"

using namespace std;

class Liquid : public Food
   {
   private:
      int unidades;
      
   public:
      Liquid(int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */