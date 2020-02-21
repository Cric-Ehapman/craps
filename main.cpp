#include <iostream>
#include "die.h"
#include <ctime>

int main() {
    srand(time(0));
    Die firstDie(6, 1, 1, "white", false, "Bone", 1);
    Die secondDie(6, 1, 1, "white", false, "Bone", 1);
    int rollOne, rollTwo, rollTotal1, rollTotal2;
    std::string userResponse;

    std::cout << "Welcome to Craps \n Press enter to roll your two dice\n";
    std::cin >> userResponse;

    rollOne = firstDie.roll();
    rollTwo = secondDie.roll();
    rollTotal1 = rollOne + rollTwo;

    std::cout << "You rolled a " << rollOne << " and a " << rollTwo << std::endl << "Your total was " << rollTotal1 << std::endl;
    if (checkWin(rollTotal1))
    {
        std::cout << "You won!\n";
    }
    else if (rollTotal1 == 2 || rollTotal1 == 3 || rollTotal1 == 12)
    {
        std::cout << "You lose :(\n";
    }
    else
    {
        std::cout << "Second Roll \n";
        rollOne = firstDie.roll();
        rollTwo = secondDie.roll();
        rollTotal2 = rollOne + rollTwo;
        std::cout << "Your second roll total is " << rollTotal2 << std::endl;

        if (checkWin2(rollTotal1, rollTotal2))
        {
            std::cout << "Your totals match you win!\n";
        }
        else
            std::cout << "You lose :(\n";

    }

    return 0;
}
