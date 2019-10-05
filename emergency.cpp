#include <iostream>
#include <vector>

// Defined void function with string parameter. here emergency_number is the parameter
void get_emergency_number(int emergency_number) {
  
  //print and return
  std::cout << "Dial " << emergency_number;
  
}

int main() {
  srand(time(NULL));
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // new numbers within an indexed vector
  std::vector<int> new_emergency_number = {0118, 999, 881, 999, 119, 725, 3};
  
  //call the function 
  get_emergency_number(new_emergency_number[rand()]); //here new_emergency_number in the argument
  
}
