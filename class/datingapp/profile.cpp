#include <iostream>
#include "profile.hpp"
#include <vector>

//contructor assigning the values to private attributes
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns){
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

//Function to display the profile
std::string Profile::view_profile() {
	std::string hobby_string = "Hobbies:\n";
  std::string bio;
  bio = "Name: ";
  bio = bio + name;
  bio = bio + "\nAge: ";
  bio = bio + std::to_string(age); //used to_string() to convert the integer into string
  bio = bio + "\nPronouns: " + pronouns;

  //range based for loop to add hobbies
  for (std::string hobby:hobbies){
     hobby_string += " - " + hobby + "\n";
  }

  return bio;
}

//function to push hobbies in the vector
void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}
