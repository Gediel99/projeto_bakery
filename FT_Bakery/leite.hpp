#ifndef LEITE_H
#define LEITE_H

#include <string>
#include "liquido.hpp"

using namespace std;

class Milk : public Liquid
   {
   private:
      string tipo;
      string marca;
      
   public:
      Milk(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */