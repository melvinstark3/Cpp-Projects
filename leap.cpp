#include <iostream>
using namespace std;
int main() {
  int year;
  cout << "Enter the year = \n";
  cin >> year;
  
  if (year % 4 == 0 && year%100 != 0){
   
    cout << year << " is a Leap year\n";
  }
  else if(year%100 == 0){
     if(year%400 == 0){
     cout << year << "is a Leap year\n";
     } else {
      cout << year << " is not a Leap year\n";
     }
  }
}
