#include <iostream>

int main() {
  
  int day;
    std::cout << "Enter the Day Number = \n";
    std::cin >> day;

  if (day == 6 || day == 7){
    std::cout << "It's Weekend. Party Time";
  }

  else {
      std::cout << "Oh Shit!! It's Weekday";
  }
}
