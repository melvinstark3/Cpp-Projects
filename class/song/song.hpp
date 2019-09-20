#include<string>

class Song{
  std::string title;
  std::string artist;
public:
  //define constructer by using the Class name and defining parameters)
  Song(std::string new_title,std::string new_artist);
  std::string get_title();
  std::string get_artist();
};
