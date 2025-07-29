#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    char operation;
    
   
    cin >> num1;
   
    cin >> num2;

    switch (operation){
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
        cout << "Result: " << num1 *num2 << endl;
        break;
        
        default:
        cout << "invalid operation:" << operation << endl;
        
     } 

    return 0;
}
