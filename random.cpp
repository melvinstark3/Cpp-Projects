#include <iostream>

int main() {
  int the_amazing_random_number;
  // This seeds the random number generator
  srand (time(0));
  the_amazing_random_number = rand() % 30;  //rand() calls random number and between 0 to 30
  
  //Output the random number
  std::cout << the_amazing_random_number << "\n";
} 
