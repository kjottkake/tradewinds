#include <iostream>
#include "LesData2.h"
#include <iostream>                //  cout, cin
#include <iomanip>                 //  setw
#include <string>                  //  string
#include <vector>

using namespace std;

enum Type {Junk, OneMastedSloop, TwoMastedSloop, Brigantine, Juggernaut};

class Ship {
private:
    string name;
    Type shipType;
    int numGuns;
    float speed;
    int hullStrength;
    int cargoSpace;
public:
    Ship(){
        name = "default";
        shipType = Junk;
        numGuns = 0;
        speed = 2;
        hullStrength = 4;
        cargoSpace = 25;
    }
    void printType(){
        switch (shipType) {
            case (Junk): cout << "Junk Boat"; break;
            case (OneMastedSloop): cout << "One-Masted Sloop"; break;
            case (TwoMastedSloop): cout << "Two-Masted Sloop"; break;
            case (Brigantine): cout << "Brigantine"; break;
            case (Juggernaut): cout << "Juggernaut"; break;
        }
    }
    void setData(string nvn, Type t, int guns, float spd, int strength, int space){
        name = nvn; shipType = t; numGuns = guns; speed = spd; hullStrength = strength; cargoSpace = space;
    }
    void printData(){
        cout << "\t\"" << name << "\" "; printType(); cout << endl;
        cout << "\t Speed: " << speed << " Guns: " << numGuns << endl;
    }
    void printDetailData(){
        cout << name << " " << shipType << " " << speed << " Guns: ";
        cout << numGuns << " hull strength: " << hullStrength << " Cargospace: " << cargoSpace << endl;
    }


};

class PlayerShip : public Ship{
    int usedCargo;
};

vector <Ship*> gShip;

int main() {
    Ship ship;
    ship.setData("Endevour", Junk, 2, 3.0f, 4, 25);
//    gShip.push_back(ship);
//    ship->setData("Challenger", Junk, 2, 3.0f, 4, 25);
//    gShip.push_back(ship);

    ship.printData();


    return 0;
}
