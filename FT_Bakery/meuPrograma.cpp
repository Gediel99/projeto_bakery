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
#include "refrigerante.hpp"
#include "cerveja.hpp"
#include "cervejaPilsen.hpp"
#include "cervejaLager.hpp"
#include "cervejaIpa.hpp"
#include "cervejaSour.hpp"

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

void MyProgram::insertCheese()
{
    Cheese *cheese;
    string buffer;
    string type;
    string brand;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Brand .....: ";
    getline(cin, buffer);
    brand = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cheese = new Cheese(type, brand, weight, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl
         << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;
};

void MyProgram::insertCottageCheese()
{
    CottageCheese *cottageCheese;
    string buffer;
    string type = "Cottage";
    int amount;
    double cost;
    string marca;

    cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
    cout << "Brand .....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Weight ....: ";
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

void MyProgram::insertFilledWafer()
{
    FilledWafer *filledWafer;
    string buffer;
    string type = "Recheada";
    string filling;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
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
    string brand;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Brand .....: ";
    getline(cin, buffer);
    brand = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    ham = new Ham(brand, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl
         << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;
};

void MyProgram::insertMortadella()
{
    Mortadella *mortadella;
    string buffer;
    string brand;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Mortadella\n------------------------------\n";
    cout << "Brand .....: ";
    getline(cin, buffer);
    brand = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(brand, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl
         << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;
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
    cout << "Brand .....: ";
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
    string brand;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Brand .....: ";
    getline(cin, buffer);
    brand = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    water = new Water(type, brand, amount, cost);
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
    cout << "Flavor ....: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Brand .....: ";
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
    vector<string> opcoes({"Exit","Pilsen Beer", "Lager Beer", "Ipa Beer", "Sour Beer"});
    Menu menu("Insert Beer", opcoes);
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha)
        {
        case 1:{ insertPilsenBeer();   };break;
        case 2:{ insertLagerBeer();    };break;
        case 3:{ insertIpaBeer();      };break;
        case 4:{ insertSourBeer();     };break;
        };
    };
};

void MyProgram::insertPilsenBeer()
{
    BeerPilsen *beerPilsen;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Pilsen Beer\n------------------------------\n";
    cout << "Brand .....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beerPilsen = new BeerPilsen(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beerPilsen);

    cout <<endl<< beerPilsen->getDescricao() << " - US$ " << fixed << setprecision(2) << beerPilsen->getValor() << endl;
};

void MyProgram::insertLagerBeer()
{
    BeerLager *beerLager;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Lager Beer:\n------------------------------\n";
    cout << "Brand .....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beerLager = new BeerLager(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beerLager);

    cout <<endl<< beerLager->getDescricao() << " - US$ " << fixed << setprecision(2) << beerLager->getValor() << endl;
};

void MyProgram::insertIpaBeer()
{
    BeerIpa *beerIpa;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Ipa Beer\n------------------------------\n";
    cout << "Brand .....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beerIpa = new BeerIpa(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beerIpa);

    cout <<endl<< beerIpa->getDescricao() << " - US$ " << fixed << setprecision(2) << beerIpa->getValor() << endl;
};

void MyProgram::insertSourBeer()
{
    BeerSour *beerSour;
    string buffer;
    string type;
    int amount;
    string marca;
    double cost;

    cout << "------------------------------\nInsert Sour Beer:\n------------------------------\n";
    cout << "Brand .....: ";
    getline(cin, buffer);
    marca = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    beerSour = new BeerSour(type, marca, amount, cost);
    myMainList.insert(myMainList.end(), beerSour);

    cout <<endl<< beerSour->getDescricao() << " - US$ " << fixed << setprecision(2) << beerSour->getValor() << endl;
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