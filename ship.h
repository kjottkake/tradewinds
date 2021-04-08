//
// Created by Jason Ji on 4/8/21.
//
#include <string>

using namespace std;

#ifndef BOATSNHOES_SHIP_H
#define BOATSNHOES_SHIP_H



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
    void printType();
    void setData(string nvn, Type t, int guns, float spd, int strength, int space);
    void printData();
    void printDetailData();

};

class PlayerShip : public Ship{
    int usedCargo;
};


#endif //BOATSNHOES_SHIP_H
