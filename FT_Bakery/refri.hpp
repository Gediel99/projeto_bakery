#ifndef REFRI_H
#define REFRI_H

#include "liquido.hpp"

class Soda : public Liquid
{
    private:
        string tipo;
        string marca;
    
    public:
        Soda(string, string, int, double);
        virtual string getDescricao();
};

#endif