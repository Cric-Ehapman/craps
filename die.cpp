//
// Created by erics on 2/14/2020.
//

#include "die.h"
#include <random>

Die (int startingNumberOfSides = 6, int startingIncrements=1, int firstStartingVal=1, std::string startingColor = "white", bool startingIsSymbol=false, std::string startingMaterial="Bone", int startingValue=1);


int Die::roll(){
    value = 2;
}

void Die::setNumberOfSides(int newNumberOfSides){
    numberOfSides = newNumberOfSides;
}

int Die::getNumberOfSides(){
    return numberOfSides;
}

void Die::setIncrement(int newIncrement){
    increment = newIncrement;
}
int Die::getIncrement(){
    return increment;
}
void Die::setStartingValue(int firstStartingVal){
    startingVal = firstStartingVal;
}
int Die::getStartingValue(){
    return startingVal;
}
void Die::setValue(int newValue){
    value = newValue;
}
int Die::getValue(){
    return value;
}
void Die::setColor(std::string newColor){
    color = newColor;
}
std::string Die::getColor(){
    return color;
}
void Die::setIsSymbol(bool newIsSymbol){
    isSymbols = newIsSymbol;
}
bool Die::isSymbol(){
    return isSymbols;
}
void Die::setMaterial(std::string newMaterial){
    material = newMaterial;
}
std::string Die::getMaterial(){
    return material;
}