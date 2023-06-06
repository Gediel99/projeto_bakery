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