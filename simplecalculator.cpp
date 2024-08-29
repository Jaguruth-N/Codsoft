// CodSoft Internship
// Task - 2(Simple Calculator)


#include<iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    
while(operation!='E'){
    cout << "Simple Calculator!" << endl;
    cout << "Enter the First Number: ";
    cin >> num1;
    cout << "Enter the Second Number: ";
    cin >> num2;

    cout << "Choose an operation\n+:Addition\n-:Subtraction\n*:Multiplication\n/:division\nE:exit:";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
            case 'E':
            break;
        default:
            cout << "Operation does not exist.Please choose a valid operation." << endl;
    }
}

    return 0;
}