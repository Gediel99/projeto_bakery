
/* Unicamp - Universidade Estadual de Campinas
    FT - Faculdade de Tecnologia
    Limeira - SP
    Prof. Dr. Andre F. de Angelis
    Mar/2016
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
        case 1:
        {
            listItems();
        };
        break;
        case 2:
        {
            insertItems();
        };
        break;
        case 3:
        {
            clearAll();
        };
        break;
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

    Menu menu("Insert Items", {"Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella"});
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:
        {
            insertBread();
        };
        break;
        case 2:
        {
            insertCheese();
        };
        break;
        case 3:
        {
            insertCottageCheese();
        };
        break;
        case 4:
        {
            insertCracker();
        };
        break;
        case 5:
        {
            insertFilledWafer();
        };
        break;
        case 6:
        {
            insertHam();
        };
        break;
        case 7:
        {
            insertMortadella();
        };
        break;
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




MyProgram::MyProgram()
{
    this->verboseMode = NULL;
    this->shortMessageMode = NULL;
}

MyBooleanClass * MyProgram::getVerboseMode () const{
    return verboseMode;
}

MyBooleanClass * MyProgram::setVerboseMode(MyBooleanClass*setVerboseMode){
    this->verboseMode = setVerboseMode;
}   

MyBooleanClass *MyProgram::getShortMessageMode() const
{
    return shortMessageMode;
}

MyBooleanClass * MyProgram::setShortMessageMode(MyBooleanClass*setShortMessageMode){
    this->shortMessageMode = setShortMessageMode;
}

MyProgram::~MyProgram()
{
    delete MyProgram::verboseMode;
    delete MyProgram::shortMessageMode;
}
