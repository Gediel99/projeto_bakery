/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2016
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

using namespace std;

#ifndef BOOLEAN_H
   #define BOOLEAN_H

class MyBooleanClass
   {
   private: 
      bool booleanValue;
   
   public: 
      MyBooleanClass();
      MyBooleanClass(bool);
      ~MyBooleanClass();
   
      const bool getStatus(void);
   };
      
#endif

/* fim de arquivo */