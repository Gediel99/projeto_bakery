#ifndef CERVA3_H
    #define CERVA3_H

#include <string>
#include "cerveja.hpp"

class Beer3 : public Beer
    {   
        private:
            string tipo;
        public:
            Beer3(string,string,int,double);
            virtual string getDescricao();
    };

#endif