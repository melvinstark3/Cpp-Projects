#include <iostream>
#include <vector>

int main() {

//store adult fare   
  std::vector<double> subway_adult = {800, 1200, 1500};

//Store Child fare  
  std::vector<double> subway_child = {400, 600 ,750};
  
//access the data
  std::cout << "Ticket  Adult Child\n";
  std::cout << "24-hour " << subway_adult[0] << "   " << subway_child[0] << "\n";
  std::cout << "48-hour " << subway_adult[1] << "  " << subway_child[1] << "\n";
  std::cout << "72-hour " << subway_adult[2] << "  " << subway_child[2] << "\n";
}
