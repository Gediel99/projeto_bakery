/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2016
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#ifndef MEUPROGRAMA_H
    #define MEUPROGRAMA_H

    #include "boolean.hpp"
    #include <vector>
    #include "comida.hpp"
    
    using namespace std;

    class MyProgram
    {
    private:
        MyBooleanClass * verboseMode       ;
        MyBooleanClass * shortMessageMode  ;
        vector<Food *> myMainList;
        void process();
        void clearAll();
        void listItems();
        void insertItems();
        void insertBread();
        void insertCracker();
        void insertCheese();
        void insertCottageCheese();
        void insertMortadella();
        void insertFilledWafer();
        void insertHam();
        void insertMilk();
        void insertWater();
        void insertSoda();
        void insertBeerItens();
        void insertPilsenBeer();
        void insertLagerBeer(); 
        void insertIpaBeer(); 
        void insertSourBeer();
    public:
        MyProgram();
        MyBooleanClass *getVerboseMode(void) const;
        MyBooleanClass *setVerboseMode(MyBooleanClass *);
        MyBooleanClass *getShortMessageMode(void) const;
        MyBooleanClass *setShortMessageMode(MyBooleanClass *);       
        void start(int, char* []);       
        ~MyProgram();
    };
    

#endif
/* fim de arquivo */