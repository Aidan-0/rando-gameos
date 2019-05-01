 
#include <iostream>

//created by Aidan Potteiger

int main() {
  
  int guess;
  /* int answer = random;
     #Figure out how to do random stuff
  */
  std::cout << "This is hangman,\n";
  std::cout << "Guess the number between 1-20, you have 7 tries\n";

  for (int t = 1; t <= 7; t++) {
    
    std::cout << "Guess number " << t << ":\n";
    std::cin >> guess;
    
    if (guess == 14 && t == 1) {
      
      std::cout << "Congradulations, you guessed the right number!\n";
      std::cout << "That only took " << t << " try!\n";
      break;
      
    }

    else if (guess == 14 && t != 1) {

      std::cout << "Congradulations, you guessed the right number!\n";
      std::cout << "That only took " << t << " tries!\n";
      break;

    }

    else if (t == 7) {

      std::cout << "You failed, but you can always try again because this is only a cpp file :)\n";
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
