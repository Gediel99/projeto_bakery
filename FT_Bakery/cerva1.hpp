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