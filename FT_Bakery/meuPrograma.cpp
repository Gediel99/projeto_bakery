/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Criado por - Prof. Dr. Luciano Antonio Digiampietri
    Mar/2016
    Modificado por - Grupo A02 (Integrantes - Gediel, Filipe, Brenno, Pedro e Lucas)
    Jul/2023
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

#include "cabecalho.hpp"
#include "boolean.hpp"
#include "menu.hpp"
#include "comida.hpp"
#include "pao.hpp"
#include "bolacha.hpp"
#include "queijo.hpp"
#include "queijoCottage.hpp"
#include "mortadela.hpp"
#include "bolachaRecheada.hpp"
#include "presunto.hpp"
#include "meuPrograma.hpp"
#include "leite.hpp"
#include "agua.hpp"
#include "refri.hpp"
#include "cerveja.hpp"
#include "cerva1.hpp"
#include "cerva2.hpp"
#include "cerva3.hpp"
#include "cerva4.hpp"

using namespace std;

void MyProgram::start(int argc, char *argv[])
{
    myMainList.clear();
    Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
    process();
    Information::bye(shortMessageMode->getStatus());
    clearAll();
};

void MyProgram::process()
{
    vector<string> opcoes({"Exit", "List Database", "Insert Items", "Clear All"});
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:{ listItems();   };break;
        case 2:{ insertItems(); };break;
        case 3:{ clearAll();    };break;
        };
    };
};

void MyProgram::clearAll()
{
    myMainList.clear();

    vector<Food *>::iterator scan = myMainList.begin();

    while (scan != myMainList.end())
    {
        delete (*scan);
        *scan = NULL;
        scan++;
    };

    delete verboseMode;
    delete shortMessageMode;
    verboseMode = NULL;
    shortMessageMode = NULL;
};

void MyProgram::listItems()
{
    double total = 0.00;

    cout << "------------------------------\nItems in Database:\n------------------------------\n";
    vector<Food *>::iterator scan = myMainList.begin();

    while (scan != myMainList.end())
    {
        cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
        total += (*scan)->getValor();
        scan++;
    };
    cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};

void MyProgram::insertItems()
{
    cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items", {"Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella","Milk","Water","Soda","Beer"});
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:{ insertBread();         };break;
        case 2:{ insertCheese();        };break;
        case 3:{ insertCottageCheese(); };break;
        case 4:{ insertCracker();       };break;
        case 5:{ insertFilledWafer();   };break;
        case 6:{ insertHam();           };break;
        case 7:{ insertMortadella();    };break;
        case 8:{ insertMilk();          };break;
        case 9:{ insertWater();         };break;
        case 10:{ insertSoda();         };break;
        case 11:{ insertBeerItens();    };break;

        };
    };
};

void MyProgram::insertBread()
{
    Bread *bread;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    bread = new Bread(type, weight, cost);
    myMainList.insert(myMainList.end(), bread);

    cout << endl
         << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;
};

void MyProgram::insertCracker()
{
    Cracker *cracker;
    string buffer;
    string type;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cracker = new Cracker(type, amount, cost);
    myMainList.insert(myMainList.end(), cracker);

    cout << endl
         << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;
};

void MyProgram::insertCheese()
{
    Cheese *cheese;
    string buffer;
    string type;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cheese = new Cheese(type, amount, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl
         << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;
};

void MyProgram::insertCottageCheese()
{
    CottageCheese *cottageCheese;
    string buffer;
    string type;
    int amount;
    double cost;
    string marca;

    cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Marca .....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cottageCheese = new CottageCheese(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), cottageCheese);

    cout << endl
         << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getValor() << endl;
};

void MyProgram::insertMortadella()
{
    Mortadella *mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl
         << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;
};

void MyProgram::insertFilledWafer()
{
    FilledWafer *filledWafer;
    string buffer;
    string type;
    string filling;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, type);
    cout << "Filling ...: ";
    getline(cin, filling);
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    filledWafer = new FilledWafer(type, filling, amount, cost);
    myMainList.insert(myMainList.end(), filledWafer);

    cout << endl
         << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;
};

void MyProgram::insertHam()
{
    Ham *ham;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    ham = new Ham(type, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl
         << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;
};

void MyProgram::insertMilk()
{
    Milk *milk;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Milk:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Marca ....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    milk = new Milk(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), milk);

    cout <<endl<< milk->getDescricao() << " - US$ " << fixed << setprecision(2) << milk->getValor() << endl;
};

void MyProgram::insertWater()
{
    Water *water;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Marca ....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    water = new Water(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), water);

    cout <<endl<< water->getDescricao() << " - US$ " << fixed << setprecision(2) << water->getValor() << endl;
};

void MyProgram::insertSoda()
{
    Soda *soda;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Soda:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Marca ....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    soda = new Soda(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), soda);

    cout <<endl<< soda->getDescricao() << " - US$ " << fixed << setprecision(2) << soda->getValor() << endl;
};

void MyProgram::insertBeerItens()
{
    vector<string> opcoes({"Exit","Cerveja1", "Cerveja2", "Cerveja3", "Cerveja4"});
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:{ insertBeer1();   };break;
        case 2:{ insertBeer2();   };break;
        case 3:{ insertBeer3();   };break;
        case 4:{ insertBeer4();   };break;
        };
    };
};

void MyProgram::insertBeer1()
{
    Beer1 *beer1;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Beer1:\n------------------------------\n";
    cout << "Marca ....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beer1 = new Beer1(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beer1);

    cout <<endl<< beer1->getDescricao() << " - US$ " << fixed << setprecision(2) << beer1->getValor() << endl;
};

void MyProgram::insertBeer2()
{
    Beer2 *beer2;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Beer2:\n------------------------------\n";
    cout << "Marca ....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beer2 = new Beer2(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beer2);

    cout <<endl<< beer2->getDescricao() << " - US$ " << fixed << setprecision(2) << beer2->getValor() << endl;
};

void MyProgram::insertBeer3()
{
    Beer3 *beer3;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Beer3:\n------------------------------\n";
    cout << "Marca ....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beer3 = new Beer3(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beer3);

    cout <<endl<< beer3->getDescricao() << " - US$ " << fixed << setprecision(2) << beer3->getValor() << endl;
};

void MyProgram::insertBeer4()
{
    Beer4 *beer4;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Beer4:\n------------------------------\n";
    cout << "Marca ....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beer4 = new Beer4(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beer4);

    cout <<endl<< beer4->getDescricao() << " - US$ " << fixed << setprecision(2) << beer4->getValor() << endl;
};

MyProgram::MyProgram()
{
    this->verboseMode = NULL;
    this->shortMessageMode = NULL;
}

MyBooleanClass *MyProgram::getVerboseMode() const
{
    return verboseMode;
}

MyBooleanClass *MyProgram::setVerboseMode(MyBooleanClass *setVerboseMode)
{
    this->verboseMode = setVerboseMode;
}

MyBooleanClass *MyProgram::getShortMessageMode() const
{
    return shortMessageMode;
}

MyBooleanClass *MyProgram::setShortMessageMode(MyBooleanClass *setShortMessageMode)
{
    this->shortMessageMode = setShortMessageMode;
}

MyProgram::~MyProgram()
{
    delete MyProgram::verboseMode;
    delete MyProgram::shortMessageMode;
}

/* fim de arquivo */