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
    int name;
    bool hasBank;
    bool hasShipyard;
    bool hasMoneyLender;
    bool hasAlehouse;
public:
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


};


#ifndef BOATSNHOES_MAP_H
#define BOATSNHOES_MAP_H

#endif //BOATSNHOES_MAP_H
