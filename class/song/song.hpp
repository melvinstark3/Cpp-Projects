#include<string>

class Song{
  std::string title;

public:
  void add_title(std::string new_title);
  std::string get_title();  
};
