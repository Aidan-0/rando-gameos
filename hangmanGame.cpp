
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>

// Created and maintained by Aidan Potteiger

using namespace std;

int answer;
int guess;

// Change this to change the max number
int randMax = 15;
// Change this number to change the maximum tries
int tryMax = 7;

int main() {

  while (answer == 0) {
    cout << "Please wait while a number is generated";
    srand(time(NULL));
    // Change "% 16"
    answer = rand() % (randMax + 1);
  }

  cout << "This is hangman,\n";
  cout << "Guess the number 1-" << randMax << ", you have 7 tries\n";

  for (int tries = 1; tries <= 7; tries++) {
    cout << "Guess number " << tries << ":\n";
    cin >> guess;

    if (guess == answer && tries == 1) {
      cout << "Congratulations, you guessed the right number!\n";
      cout << "That only took 1 try!\n";
      break;
    }

    else if (guess == answer && tries != 1) {
      cout << "Congratulations, you guessed the right number!\n";
      cout << "That only took " << tries << " tries!\n";
      break;
    }

    else if (tries == 7) {
      cout << "You failed, the correct answer was " << answer << ", but you can always try again because this is only a cpp file :)\n";
      break;
    }
    else {
      cout << "That's not it, try again!\n";
      switch (tries) {
        case 1:
          cout << "   O   \n";
          break;

        case 2:
          cout << "   O   \n";
          cout << "   |   \n";
          cout << "   |   \n";
          break;

        case 3:
          cout << "   O   \n";
          cout << "  /|    \n";
          cout << " / |    \n";
          break;

        case 4:
          cout << "   O   \n";
          cout << "  /|\\   \n";
          cout << " / | \\  \n";
          break;

        case 5:
          cout << "   O    \n";
          cout << "  /|\\   \n";
          cout << " / | \\  \n";
          cout << "  /     \n";
          cout << " /       \n";
          break;

        case 6:
          cout << "   O    \n";
          cout << "  /|\\   \n";
          cout << " / | \\  \n";
          cout << "  / \\   \n";
          cout << " /   \\   \n";
          break;
      }
    }
  }
}
