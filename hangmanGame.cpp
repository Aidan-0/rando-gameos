 
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>

//Created and maintain by Aidan potteiger
//wait, how do you matain something like this?

int answer;

void gen(){
  std::cout << "Please wait while a number is generated";
  srand( time(NULL) );
  answer = rand() % 16;
}

int main() {
  
  int guess;

  if (answer == 0) {
    gen();
  }
  
  std::cout << "This is hangman,\n";
  std::cout << "Guess the number 1-15, you have 7 tries\n";

  for (int t = 1; t <= 7; t++) {
    
    std::cout << "Guess number " << t << ":\n";
    std::cin >> guess;
    
    if (guess == answer && t == 1) {
      
      std::cout << "Congradulations, you guessed the right number!\n";
      std::cout << "That only took " << t << " try!\n";
      break;
      
    }

    else if (guess == answer && t != 1) {

      std::cout << "Congradulations, you guessed the right number!\n";
      std::cout << "That only took " << t << " tries!\n";
      break;

    }

    else if (t == 7) {

      std::cout << "You failed, the correct answer was " << answer << ", but you can always try again because this is only a cpp file :)\n";
      break;

    }
    else {
      
      std::cout << "That's not it, try again!\n";
      switch(t) {
      case 1 :
        std::cout << "   O   \n";
        break;
      case 2 :
        std::cout << "   O   \n";
        std::cout << "   |   \n";
        std::cout << "   |   \n";
        break;
      case 3 :
        std::cout << "   O   \n";
        std::cout << "  /|    \n";
        std::cout << " / |    \n";
        break;
      case 4 :
        std::cout << "   O   \n";
        std::cout << "  /|\\   \n";
        std::cout << " / | \\  \n";
        break;
      case 5 :
        std::cout << "   O    \n";
        std::cout << "  /|\\   \n";
        std::cout << " / | \\  \n";
        std::cout << "  /     \n";
        std::cout << " /       \n";
        break;
      case 6 :
        std::cout << "   O    \n";
        std::cout << "  /|\\   \n";
        std::cout << " / | \\  \n";
        std::cout << "  / \\   \n";
        std::cout << " /   \\   \n";
        break;
      }
    }
  }
  
  
  
  
  
  
  
  
  
  
}
