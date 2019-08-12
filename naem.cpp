
//string=name and int=number as parameter
void name_x_times(std::string name, int x){
    //loop to print name
  while (x > 0){
    std::cout << name << "\n";
    x--;
  }
}

//main
int main() {
  int some_number;
  char my_name[100];
  std::cout << "Enter Your name= \n"; //name input
  std::cin >> my_name;
  
  std::cout << "Enter the number of time you want to display the name \n"; //display count
  std::cin >> some_number;

  name_x_times(my_name, some_number); //my_name and some_number as arguments 
  
}
