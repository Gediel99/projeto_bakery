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
