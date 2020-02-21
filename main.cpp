#include <iostream>
#include "die.h"
#include <ctime>

int main() {
    srand(time(0));
    Die firstDie(6, 1, 1, "white", false, "Bone", 1);
    Die secondDie(6, 1, 1, "white", false, "Bone", 1);
    int rollOne, rollTwo, rollTotal1, rollTotal2, cash = 1000;
    int wager;
    char endCheck = 'y';

    std::cout << "Welcome to Craps \n";
    do {
        std::cout << "You have $" << cash << " Enter how much you would like to wager\n";
        do {
            std::cin >> wager;
        } while (wager < 0 || wager > cash);

        rollOne = firstDie.roll();
        rollTwo = secondDie.roll();
        rollTotal1 = rollOne + rollTwo;

        std::cout << "You rolled a " << rollOne << " and a " << rollTwo << std::endl << "Your total was " << rollTotal1
                  << std::endl;
        if (checkWin(rollTotal1)) {
            std::cout << "You won!\n";
            cash += wager * 2;
            std::cout << "Your new balance is $" << cash << std::endl;
        } else if (rollTotal1 == 2 || rollTotal1 == 3 || rollTotal1 == 12) {
            std::cout << "You lose :(\n";
            cash = cash - wager;
            std::cout << "Your new balance is $" << cash << std::endl;
        } else {
            std::cout << "Second Roll \n";
            rollOne = firstDie.roll();
            rollTwo = secondDie.roll();
            rollTotal2 = rollOne + rollTwo;
            std::cout << "Your second roll total is " << rollTotal2 << std::endl;

            if (checkWin2(rollTotal1, rollTotal2)) {
                std::cout << "Your totals match you win!\n";
                cash += wager * 2;
                std::cout << "Your new balance is $" << cash << std::endl;
            } else {
                std::cout << "You lose :(\n";
                cash = cash - wager;
                std::cout << "Your new balance is $" << cash << std::endl;
            }

        }
        std::cout << "Would you like to play again? (Y/N)";
        std::cin >> endCheck;
    }while (endCheck == 'y' || endCheck == 'Y');

    return 0;
}
