/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef COMIDA_H
   #define COMIDA_H

#include <string>

using namespace std;

class Food
   {
   protected:
      double valor;
      
   public:
      Food(double);
      virtual double getValor();

      virtual string getDescricao() = 0;
   };
   
#endif
   
/* fim de arquivo */