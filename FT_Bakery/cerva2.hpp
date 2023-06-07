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