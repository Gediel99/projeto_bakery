/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2016
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include "boolean.hpp"

   MyBooleanClass::MyBooleanClass()            { booleanValue = false;  };
   MyBooleanClass::MyBooleanClass(bool value ) { booleanValue = value;  };
   MyBooleanClass::~MyBooleanClass()           { booleanValue = false;  };
   
   const bool MyBooleanClass::getStatus(void)  { return(booleanValue);  };

/* fim de arquivo */