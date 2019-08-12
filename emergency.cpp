#include <iostream>

// Defined void function with string parameter. here emergency_number is the parameter
void get_emergency_number(std::string emergency_number) {
  
  //print and return
  std::cout << "Dial " << emergency_number;
  
}

int main() {
  
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // new number
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  //call the function 
  get_emergency_number(new_emergency_number); //here new_emergency_number in the argument
  
}
