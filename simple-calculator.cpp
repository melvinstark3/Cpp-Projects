# include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Enter operation, either + or - or * or /: ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            // If operator entered is  other than +-*/
            cout << "Learn basic maths, you retard!";
            break;
    }
    return 0;
}
