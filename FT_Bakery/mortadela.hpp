/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef A02EX03_I_H
   #define A02EX03_I_H

#include <string>
#include "comida.hpp"

using namespace std;

class Mortadella : public Food
   {
   private:
      string tipo;
      float peso;
      
   public:
      Mortadella(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */