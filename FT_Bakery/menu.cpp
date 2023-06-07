/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2015
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include <vector>
#include <iostream>

#include "menu.hpp"

using namespace std;

Menu::Menu(string titulo, vector<string> opcoes)
   {
   this->titulo = titulo;
   this->opcoes = opcoes;
   };
   
const int Menu::getEscolha()
   { 
   int result = -1;
   int auxiliar;
   string buffer;
   
   vector<string>::iterator varre = opcoes.begin();
   
   while((result < 0) || (result > opcoes.size() - 1))
      {
      varre = opcoes.begin();
      auxiliar = 0;
      cout << "\n------------------------------\n" << titulo << "\n------------------------------\n";

      while(varre != opcoes.end())
         {
	 cout << auxiliar << ". " << *varre << "\n";
         varre++;
         auxiliar++;
         }; 
      
      cout << "------------------------------\n" << "Escolha entre 0 e " << (auxiliar - 1) << "\n------------------------------\n";
      buffer = "0";
      getline(cin, buffer);
      result = stoi(buffer);
      };
   
   return (result); 
   };
  
   
/* fim de arquivo */