#include <iostream>
#include "LesData2.h"
#include <iostream>                //  cout, cin
#include <iomanip>                 //  setw
#include <string>                  //  string
#include <vector>

#include "ship.h"
#include "ship.cpp"

using namespace std;


int main() {
    Ship ship;
    ship.setData("Endevour", Junk, 2, 3.0f, 4, 25);
//    gShip.push_back(ship);
//    ship->setData("Challenger", Junk, 2, 3.0f, 4, 25);
//    gShip.push_back(ship);

    ship.printData();


    return 0;
}
