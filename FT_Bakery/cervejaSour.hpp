/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef BEERSOUR_H
#define BEERSOUR_H

#include <string>
#include "cerveja.hpp"

class BeerSour : public Beer
    {
        private:
            string tipo;
        public:
            BeerSour(string,string,int,double);
            virtual string getDescricao();
    };

#endif

/* fim de arquivo */