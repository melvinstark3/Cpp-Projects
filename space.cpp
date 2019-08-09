#include <iostream>
using namespace std;
int main() {
  double w;
  int p;
  cout << "Enter your weight\n";
  cin >> w;
  cout << "Enter the Planet number\n";
  cin >> p;
  
  switch (p){
    case 1:
      w=w*0.78;
      cout << "Your weight on Venus will be " << w;
      break;
    case 2:
      w=w*0.39;
      cout << "Your weight on Mars will be " << w;
      break;
    case 3:
      w=w*2.65;
      cout << "Your weight on Jupiter will be " << w;
      break;
    case 4:
      w=w*1.17;
      cout << "Your weight on Saturn will be " << w;
      break;
    case 5:
      w=w*1.05;
      cout << "Your weight on Uranus will be " << w;
      break;
    default:
      cout << "Invalid Input\n";
      break;
  }
 
}
