#include <iostream>

//bool type function (note: we can return it as int too)
bool needs_it_support() {
  
  bool support;
  
  std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
  std::cin >> support;
  return support; //returned the value
  
}

int main() {
  
  //print the function's element by calling the function
  std::cout << needs_it_support();
  
}
