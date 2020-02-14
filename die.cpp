//
// Created by erics on 2/14/2020.
//

#include "die.h"
#include <random>

Die (int startingNumberOfSides, int startingIncrements=1, int firstStartingVal=1, std::string startingColor = "white", bool startingIsSymbol=false, std::string startingMaterial="Bone", int startingValue=1);


int Die::roll(){
    value = 2;
}

void Die::setNumberOfSides(int newNumberOfSides){
    numberOfSides = newNumberofSides;
}

int Die::getNumberOfSides(){

}

void Die::setIncrement(int newIncrement){

}
int Die::getIncrement(){

}
void Die::setStartingValue(int newStartingSide){

}
int Die::getStartingValue(){

}
void Die::setValue(int newValue){

}
int Die::getValue(){

}
void Die::setColor(std::string newColor){

}
std::string Die::getColor(){

}
void Die::setIsSymbol(bool newIsSymbol){

}
bool Die::isSymbol(){

}
void Die::setMaterial(std::string newMaterial){

}
std::string Die::getMaterial(){

}