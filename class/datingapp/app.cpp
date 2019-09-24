#include <iostream>
#include "profile.hpp"

int main() {
  //create a profile using constructor
Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
//output the profife
std::cout << "\n" << sam.view_profile() << "\n";
  return 0;
}
