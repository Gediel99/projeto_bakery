/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef BOLHACHARECHEADA_H
   #define BOLHACHARECHEADA_H

#include <string>
#include "bolacha.hpp"

using namespace std;

class FilledWafer : public Cracker
   {
   private:
      string recheio;
      
   public:
      FilledWafer(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */