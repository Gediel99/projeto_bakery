#ifndef MYPROGRAM_H
    #define MYPROGRAM_H

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
