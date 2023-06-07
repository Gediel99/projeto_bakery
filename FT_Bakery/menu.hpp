/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef MENU_H
   #define MENU_H

#include <string>
#include <vector>

using namespace std;

class Menu
   {
   private:
      string titulo;
      vector<string> opcoes;

   public:
      Menu(string titulo, vector<string> opcoes);
      const virtual int getEscolha();
   };
   
#endif
   
/* fim de arquivo */