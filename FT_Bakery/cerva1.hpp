/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef CERVA1_H
    #define CERVA1_H

#include <string>
#include "cerveja.hpp"

class Beer1 : public Beer
    {   
        private:
            string tipo;
        public:
            Beer1(string,string,int,double);
            virtual string getDescricao();
    };

#endif

/* fim de arquivo */