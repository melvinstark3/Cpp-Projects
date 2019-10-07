#include <iostream>

int main() 
{
  
  int i = 0,n;
  int square = 0;
  
  //Get input from users
  std::cout<<"Enter the ending numbers : \n";
  std::cin>>n;
  
  //Code to show squares
  while (i <=n)
  {
    square = i*i;
    std::cout << "Square of " << i <<" : " <<square << "\n";
    i++;
  }
  
  return 0;
}
