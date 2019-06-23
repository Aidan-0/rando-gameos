#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void choice() {

     std::cout << "   |   |   \n";
     std::cout << " 1 | 2 | 3 \n";
     std::cout << "___|___|___\n";
     std::cout << "   |   |   \n";
     std::cout << " 4 | 5 | 6 \n";
     std::cout << "___|___|___\n";
     std::cout << "   |   |   \n";
     std::cout << " 7 | 8 | 9 \n";
     std::cout << "   |   |   \n";

    }
    
void number_gen() {

    srand ( time(NULL));
    int botN = rand() % 10;

    }

int main() {

    int userGuess;

    std::cout << "Hello and welcome to c++ tic tac toe!\n";
    std::cout << "If you don't know how to play, then you big dumb.\n\n";
    
    choice();
    
    std::cout << "\nNow please choose your answer: ";
    std::cin >> userGuess;


}