#include <iostream>

int main() {

  int grade;
  
  std::cout << "Enter Your Marks=\n";
  std::cin >> grade;

  if (grade > 60) {

    std::cout << "Pass\n";
    
  }
	else {
    std::cout << "Fail\n";
  }
   
}
