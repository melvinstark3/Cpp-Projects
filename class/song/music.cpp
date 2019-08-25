#include <iostream>
#include "song.hpp"

int main() {

	//Create an Object
  Song electric_relaxation;
  
  electric_relaxation.add_title("Electric Relaxation");
  std::cout << electric_relaxation.get_title();
  
}
