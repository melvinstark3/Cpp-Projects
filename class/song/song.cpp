#include <iostream>
#include "song.hpp"

//Defined Constructer (Constructer don't have any return type)
Song::Song(std::string new_title,std::string new_artist){
  title=new_title;
  artist=new_artist;
}

//destructor

Song::~Song(){
std::cout << "Goodbye " << title;
}

std::string Song::get_title(){
  return title;
}

std::string Song::get_artist() {
  return artist;
}
