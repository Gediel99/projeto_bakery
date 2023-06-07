/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef CERVA3_H
    #define CERVA3_H

#include <string>
#include "cerveja.hpp"

class Beer3 : public Beer
    {   
        private:
            string tipo;
        public:
            Beer3(string,string,int,double);
            virtual string getDescricao();
    };

#endif

/* fim de arquivo */