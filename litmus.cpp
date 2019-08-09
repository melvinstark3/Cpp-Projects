#include <iostream>

int main() {
  
  double ph;
  
  //Ask user to input the ph level
  std::cout << "Enter the PH level = \n";
  std::cin >> ph;
  
  // check the Ph level
  if (ph>7){
    std::cout << "Basic\n";
  }
  
  else if (ph<7){
  	std::cout << "Acidic\n";
  }
  
  else {
    std::cout << "Neutral\n";
  }
}
