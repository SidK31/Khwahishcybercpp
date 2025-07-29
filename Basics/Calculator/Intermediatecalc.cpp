#include <iostream>
using namespace std;

int main(){
    cout <<"this is intermediate level calculator" << endl;
    int a, b;
    char operation;
    do {
        
        cout << "enter first number : " << endl;
        cin >>a;
        cout << "select operation: + , - , * , /, %" << endl;

        cin >> operation;
        while(operation !='+' && operation != '-' && operation != '*' && operation != '/' && operation != '%')
        {
        cout <<"Invalid Operation , please enter a valid operation ( + , - , * , /, % )" << endl;
        cin >> operation;
        }
        cout << "enter second number : " << endl;
        cin >> b;
        while (b==0 && operation=='/'){
            cout << "Error: Division by zero is not allowed." << endl;
            cout << "Please enter a valid second number: " << endl;
            cin >> b;
           
             }
            cout << "You entered: " << b << endl;
        
        switch(operation) {
            case '+':
                cout << a << "+" << b << "=" << a+b << endl;
                break;
            case '-':
                cout << a << "-" << b << "=" << a-b << endl;
                break;
            case '/':
                cout << a << "/" << b << "=" << a/b << endl;
                break;
            case '*':
                cout << a << "*" << b << "=" << a*b << endl;
                break;
            case '%':
                if (b == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                    break;
                }
                else{
                    cout << a << "%" << b << "=" << a%b << endl;
                }
                break;
                default:
                cout << "Invalid Operation" << endl;
                break;
            }
             cout << "Do you want to perform another operation? (y/n): ";
                char choice;
                cin >> choice;
                if (choice != 'y' && choice != 'Y') {
                    cout << "Exiting the calculator." << endl;
                    return 0;
                 }else{
                    cout << "Continuing with the calculator." << endl;
                    continue;
                 }

    } while(true);
    cout << "Thank you for using the calculator!" << endl;
    cout << "Exiting the calculator..." << endl;
     

    return 0;
}