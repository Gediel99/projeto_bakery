/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef CERVEJA_H
    #define CERVEJA_H

    #include <string>
    #include "liquido.hpp"

    using namespace std;

    class Beer : public Liquid
    {
    private:
        string marca;
    public: 
        Beer(string, int, double);
        virtual string getDescricao();
    };
#endif

/* fim de arquivo */