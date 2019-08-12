#include <iostream>
bool morning = true;

//a function that returns string
std::string make_sandwich(){
    std::string sandwich= "\n";
    sandwich = sandwich + "bread\n";
    if (morning==true){
        sandwich = sandwich + "eggs\n";
    }
    sandwich = sandwich + "cheese\n";
    sandwich = sandwich + "bread\n";
    return sandwich;
} 

int main(){
    std::cout << "Your sandwich now:  " << make_sandwich();
}
