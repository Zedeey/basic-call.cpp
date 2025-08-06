#include <iostream>
using namespace std;

int main() 
{
    double num1;
    double num2;
    char operation;
    
   cout << " Enter your first number:";
    cin >> num1;
    cout << "enter your operation:";
    cin >> operation;
   cout << "enter your second number:";
    cin >> num2;

    switch (operation) {
        case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;

        case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;

        case '/':
        cout << "Result: " << num1 / num2 << endl;
        break;
        
        case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
        
        default:
        cout << "invalid operation:" << operation << endl;
        
     } 

    return 0;
}