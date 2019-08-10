 #include <iostream>

int main() {

  int defpin=1541;
  int pin;
  int tries = 3;

  std::cout << "Lock Room\n"; //Message

  while (tries != 0 ) { //initialize loop
        std::cout << "Enter your PIN: "; //input by user
        std::cin >> pin;

    if (pin == defpin) { //Success condition

        std::cout << "PIN accepted!\n";
        std::cout << "You now have access.\n";
        break;
    }

    else { //failcase
                if (tries == 1){
                  std::cout << "User Locked for 24 hours\n";
                }
                else {
                std::cout << "Wrong Pin. Try Again\n";
              }
              }
        tries--;
 }
}
