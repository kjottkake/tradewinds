//
// Created by Jason Ji on 4/11/21.
//

#include <iostream>
#include "LesData2.h"
#include <iostream>                //  cout, cin
#include <iomanip>                 //  setw
#include <string>                  //  string
#include <vector>

using namespace std;

class Locations{
private:
    string name;
    bool hasBank;
    bool hasShipyard;
    bool hasMoneyLender;
    bool hasAlehouse;
public:
    void setAttrib(string n, bool b, bool s, bool m, bool a){
    name = n;
    hasBank = b;
    hasShipyard = s;
    hasMoneyLender = m;
    hasAlehouse = a;
    }
    void marketPlace(){
        cout << "Welcome to the market place." << endl;
        cout << "Options: " << endl;
        cout << "(B)uy (S)ell" << endl;
        cout << "Food Arms Silk Dream Dust" << endl;
    }

    void tavern(){
        cout << "Welcome to the tavern." << endl;
        cout << "Options: " << endl;
        cout << "(B)uy Drinks (G)ossip" << endl;
    }
    void bank(){
        cout << "Deposit" << endl;
        cout << "Withdraw" << endl;
    }

    void shipyard(){
        cout << "What can I do ya for? " << endl;
    }
};

void setLocations(){
    Locations jiaChing, tanchon, edamame, lamaSut, shangrila;
    jiaChing.setAttrib("Jia Ching", true, true, true, true);
    tanchon.setAttrib("Tanchon", true, false, true, true);
    edamame.setAttrib("Edamame", false, true, false, true);
    lamaSut.setAttrib("Lama Sut", true, false, false, false);
    shangrila.setAttrib("Shangri-La", false, true, true, true);
}

void printMenu(){
    cout << "(S)hipyard (B)ank (M)oneylender (T)avern (P)ort Authority (M)arketplace (W)arehouse" << endl;
}

#ifndef BOATSNHOES_MAP_H
#define BOATSNHOES_MAP_H

#endif //BOATSNHOES_MAP_H
