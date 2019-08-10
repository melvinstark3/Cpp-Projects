#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> last_jedi;
  
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");
  
  std::cout << last_jedi[0] << " \n";
  std::cout << last_jedi[1] << " \n";
  std::cout << last_jedi[2] << " \n";
  std::cout << last_jedi[3] << " \n";
  
    std::cout << "Total number of elements are " << last_jedi.size();
  
}
