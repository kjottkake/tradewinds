#include <iostream>
#include "LesData2.h"
#include <iostream>                //  cout, cin
#include <iomanip>                 //  setw
#include <string>                  //  string
#include <vector>

#include "ship.h"
#include "ship.cpp"
#include "map.h"

using namespace std;

struct Player {
    string name;
    int goldInventory;
    int goldBank;
    int goldOwed;
    vector <Ship*> playerOwnedShips;
};

struct Items {
    string name;
    int minPrice;
    int maxPrice;
};

int main() {
    Player player1;
    player1.name = "Douglas MacArthur";
    player1.goldInventory = 500;

    Ship* ship;
    ship = new Ship;
    ship->setData("Endevour", Junk, 2, 3.0f, 4, 25);
    gShip.push_back(ship);
    ship = new Ship;
    ship->setData("Challenger", Junk, 2, 3.0f, 4, 25);
    gShip.push_back(ship);
//    gShip.push_back(ship);
//    ship->setData("Challenger", Junk, 2, 3.0f, 4, 25);
//    gShip.push_back(ship);

    player1.playerOwnedShips.push_back(ship);

    gShip[0]->printData();
    gShip[1]->printData();


    cout <<"Player owned ships: " << player1.playerOwnedShips.size() <<endl;

    player1.playerOwnedShips[0]->printData();

    return 0;
}
