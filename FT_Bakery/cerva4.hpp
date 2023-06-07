#ifndef CERVA4_H
#define CERVA4_H

#include <string>
#include "cerveja.hpp"

class Beer4 : public Beer
    {
        private:
            string tipo;
        public:
            Beer4(string,string,int,double);
            virtual string getDescricao();
    };

#endif