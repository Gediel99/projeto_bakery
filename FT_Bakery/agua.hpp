/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef AGUA_H
#define AGUA_H

#include "liquido.hpp"

class Water: public Liquid
{
    private:
        string tipo;
        string marca;

    public:
        Water(string, string, int, double);
        virtual string getDescricao();
};
#endif
/* fim de arquivo */