#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  
  std::string reversed_text = ""; //Define empty string reversed_text
  
  //used .size() operator to get the size of the text and 
  //use for loop to fill up empty string by iterating the 
  //text from backwards
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i]; //fill up empty string
  }
  
  if (reversed_text == text) {
    return true; //true condition. Output will be 1
  }
  
  return false; //false condition. Output will be 0
  
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
