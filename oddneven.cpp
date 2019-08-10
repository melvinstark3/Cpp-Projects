#include <iostream>
#include <vector>

int main(){
    
    int even=0,odd=1;
    
  //Store the values in a vector
  std::vector<int> num = {2,4,3,6,1,9};
  
  //for loop that iterates the vector
  for (int i = 0; i < num.size(); i++ ){
      
      if (num[i]%2==0){  //checks if number is odd
          even = even + num[i]; //add up the even numbers
      }
      
      else {
           odd = odd * num [i] ; //products the odd number
      }
  }
  //Output
  std::cout << "Sum of even numbers is " << even << "\n";
  std::cout << "Product of odd numbers is " << odd;
}
