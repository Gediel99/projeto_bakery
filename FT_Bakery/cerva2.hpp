/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef CERVA2_H
    #define CERVA2_H

#include <string>
#include "cerveja.hpp"

class Beer2 : public Beer
    {   
        private:
            string tipo;
        public:
            Beer2(string,string,int,double);
            virtual string getDescricao();
    };

#endif

/* fim de arquivo */