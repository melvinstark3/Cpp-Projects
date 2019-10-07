#include <iostream>

int main() 
{

  int grade;
  
//Get input from the user
  std::cout << "Enter Your Marks=\n";
  std::cin >> grade;

//Check the grade
	
if (grade > 90) { std::cout << "Passed with O grade\n"; }
else if(grade >80){ std::cout<<"Passed with A grade\n"; }
else if(grade >70){ std::cout<<"Passed with B grade\n"; }
else if(grade >60){ std::cout<<"Passed with C grade\n"; }
else if(grade >50){ std::cout<<"Passed with D grade\n"; }
else { std::cout << "Fail\n"; }
   
return 0;
	
}
