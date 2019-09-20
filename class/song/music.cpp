#include <iostream>
#include "song.hpp"

int main() {
//Instaniated the object with attributes)
Song back_to_black("Back to Black","Amy Winehouse");

std::cout << back_to_black.get_title() << "\n";
std::cout << back_to_black.get_artist() << "\n";
return 0;
}
