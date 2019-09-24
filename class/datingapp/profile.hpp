#include <iostream>
#include <vector>

class Profile{
  private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;

  public:
  //Constructor with parameters
  Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them");
  //function to view the Profile
  std::string view_profile();
  //function to add a hobby
  void add_hobby(std::string new_hobby);
};
