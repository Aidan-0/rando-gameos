 
#include <iostream>

//created by Aidan Potteiger
//now it's funkey
//MORE CHANGES

int main() {
  
  int guess;
  
  std::cout << "This is hangman,\n";
  std::cout << "Guess the number between 1-20, you have 7 tries\n";

  for (int t = 1; t <= 7; t++) {
    
    std::cout << "Guess number " << t << ":\n";
    std::cin >> guess;
    
    if (guess == 14) {
      
      std::cout << "Congradulations, you guessed the right number!\n";
      std::cout << "That only took " << t << " tries!\n";
      
    }
    else {
      
      std::cout << "That's not it, try again!";
      swtich(t);
      case 1 :
        std::cout << "   O   \n"
        break;
      case 2 :
        std::cout << "   O   \n"
        std::cout << "   |   \n"
        std::cout << "   |   \n"
        break;
      case 3 :
        std::cout << "   O   \n"
        std::cout << "  /|    \n"
        std::cout << " / |    \n"
        break;
      case 4 :
        std::cout << "   O   \n"
        std::cout << "  /|\   \n"
        std::cout << " / | \  \n"
        break;
      case 5 :
        std::cout << "   O    \n"
        std::cout << "  /|\   \n"
        std::cout << " / | \  \n"
        std::cout << "  /     \n"
        std::cout << " /       \n"
        break;
      case 6 :
        std::cout << "   O    \n"
        std::cout << "  /|\   \n"
        std::cout << " / | \  \n"
        std::cout << "  / \   \n"
        std::cout << " /   \   \n"
        break;
    }
  }
  
  
  
  
  
  
  
  
  
  
}
