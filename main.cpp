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
    Locations map;
    Player player1;
    player1.name = "Douglas MacArthur";
    player1.goldInventory = 500;
    setLocations();     //sets locations

    Ship* ship;
    ship = new Ship;
    ship->setData("Endevour", Junk, 2, 3.0f, 4, 25);
    gShip.push_back(ship);
    ship = new Ship;
    ship->setData("Challenger", Junk, 2, 3.0f, 4, 25);
    gShip.push_back(ship);

    player1.playerOwnedShips.push_back(ship);

    gShip[0]->printData();
    gShip[1]->printData();


    cout <<"Player owned ships: " << player1.playerOwnedShips.size() <<endl;

    player1.playerOwnedShips[0]->printData();

    cout << "Welcome to Tradewinds, a game of trading and exploration." << endl;

    char selection;

    selection = lesChar("select action");

    while (selection != 'Q'){
        switch (selection) {
            case 'P': cout << "Port Authority." << endl; break;
            case 'M': map.marketPlace(); break;
            case 'B': map.bank(); break;
            case 'S': map.shipyard(); break;
            case 'T': map.tavern(); break;
            case 'I':
                //show inventory?
                 break;
            case 'J':
                //set sail?
                break;
            case 'C':
                //show stats
                break;
            default: cout << "Invalid selection try again." << endl; break;
        }
        selection = lesChar("select action");
    }



    return 0;
}
