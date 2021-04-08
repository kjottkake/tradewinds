//
// Created by Jason Ji on 4/8/21.
//
#include <iostream>
#include <string>
#include "ship.h"

void Ship :: printType(){
    switch (shipType) {
        case (Junk): cout << "Junk Boat"; break;
        case (OneMastedSloop): cout << "One-Masted Sloop"; break;
        case (TwoMastedSloop): cout << "Two-Masted Sloop"; break;
        case (Brigantine): cout << "Brigantine"; break;
        case (Juggernaut): cout << "Juggernaut"; break;
    }
}
void Ship ::  setData(string nvn, Type t, int guns, float spd, int strength, int space){
    name = nvn; shipType = t; numGuns = guns; speed = spd; hullStrength = strength; cargoSpace = space;
}
void Ship ::  printData(){
    cout << "\t\"" << name << "\" "; printType(); cout << endl;
    cout << "\t Speed: " << speed << " Guns: " << numGuns << endl;
}
void Ship :: printDetailData(){
    cout << name << " " << shipType << " " << speed << " Guns: ";
    cout << numGuns << " hull strength: " << hullStrength << " Cargospace: " << cargoSpace << endl;
}

vector <Ship*> gShip;
