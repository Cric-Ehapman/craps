//
// Created by erics on 2/14/2020.
//
#include <iostream>
#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H

class Die {
private:
    int numberOfSides;
    int increment;
    int startingVal;
    std::string color;
    bool isSymbols;
    std::string material;
    int value;
public:
    Die (int startingNumberOfSides, int startingIncrements=1, int firstStartingVal=1, std::string startingColor = "white", bool startingIsSymbol=false, std::string startingMaterial="Bone", int startingValue=1);

    int roll();

    void setNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setStartingValue(int newStartingSide);
    int getStartingValue();
    void setValue(int newValue);
    int getValue();
    void setColor(std::string newColor);
    std::string getColor();
    void setIsSymbol(bool newIsSymbol);
    bool isSymbol();
    void setMaterial(std::string newMaterial);
    std::string getMaterial();

};

bool checkWin(int totalRoll);
bool checkWin2(int totalRoll, int totalRoll2);
#endif //CRAPS_DIE_H
