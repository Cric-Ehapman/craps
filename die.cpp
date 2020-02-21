//
// Created by erics on 2/14/2020.
//

#include "die.h"
#include <random>

Die::Die (int startingNumberOfSides, int startingIncrements, int firstStartingVal, std::string startingColor, bool startingIsSymbol, std::string startingMaterial, int startingValue) {
}

int Die::roll(){
    return rand() % 6 + 1;
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

bool checkWin(int totalRoll)
{
    if (totalRoll == 7 || totalRoll == 11)
    {
        return true;
    }
    else return false;
}

bool checkWin2(int totalRoll, int totalRoll2)
{
    if (totalRoll == totalRoll2)
        return true;
    else
        return false;
}