/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef A02EX03_G_H
   #define A02EX03_G_H

#include <string>
#include "queijo.hpp"

using namespace std;

class CottageCheese : public Cheese
   {
   private:
      string marca;   
   public:
      CottageCheese(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */