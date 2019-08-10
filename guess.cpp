#include <iostream>

int main() {

  int guess;
  
  int tries = 0;

  std::cout << "I have a number between 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  while (guess != 8 && tries < 50){
    std::cout << "Wrong Guess, Try again: ";
    std::cin >> guess;
    tries ++;
  }

  if (guess == 8) {
    std::cout << "You got it!\n";
  }  
}
