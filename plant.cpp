#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent){
  if (days > 3 && is_succulent==false){
    return "Time to water the plant.";
  }
  
  else if (is_succulent=true && days <= 12){
    return "Don't water the plant!";
  }
  else if (is_succulent=true && days > 13){
    return "Go ahead and give the plant a little water.";
  }
  else {
    return "Don't water the Plant!";
  }
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
