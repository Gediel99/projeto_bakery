
#include <string>
#include <vector>
#include <iostream>

#include "meuPrograma.hpp"
#include "FT_bakery.hpp"
using namespace std;

int main(int argc, char *argv[])
{
   MyProgram *myProgram = new MyProgram();
   verifyArguments(argc, argv, myProgram);
   myProgram->start(argc, argv);
   return (0);
};

void verifyArguments(int argc, char *argv[], MyProgram *myProgram)
{
   if (myProgram->getVerboseMode())
   {
      delete myProgram->getVerboseMode();
   };
   if (myProgram->getShortMessageMode())
   {
      delete myProgram->getShortMessageMode();
   };

   myProgram->setShortMessageMode(NULL);
   myProgram->setVerboseMode(NULL);

   for (int count = 1; count < argc; count++)
   {
      if (string(argv[count]) == "-v")
      {
         myProgram->setVerboseMode(new MyBooleanClass(true));
      };
      if (string(argv[count]) == "-s")
      {
         myProgram->setShortMessageMode(new MyBooleanClass(true));
      };
   };

   if (!myProgram->getVerboseMode())
   {
      myProgram->setVerboseMode(new MyBooleanClass());
   }; // default is false
   if (!myProgram->getShortMessageMode())
   {
      myProgram->setShortMessageMode(new MyBooleanClass());
   }; // default is false
};
