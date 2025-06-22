#include <iostream>
using namespace std;

// Function Definitions
int addition(int a, int b) {
    return a + b;
}

int multiplication(int a, int b) {
    return a * b;
}

int subtraction(int a, int b) {
    return a - b;
}

int division(int a, int b) {
    if (b == 0) {
        cout << ">>> ERROR: Division by zero is not allowed!" << endl;
        return 0;
    }
    return a / b;
}

int remainder(int a, int b) {
    if (b == 0) {
        cout << ">>> ERROR: Cannot take remainder with divisor zero!" << endl;
        return 0;
    }
    return a % b;
}

int main() {
    int a, b, choice, choice2;

    cout << "\n*******************************************\n";
    cout << "*           WELCOME TO CALCULATOR         *\n";
    cout << "*******************************************\n";

    do {
        cout << "\n============= MENU =============" << endl;
        cout << "1. ➕ Addition" << endl;
        cout << "2. ✖️ Multiplication" << endl;
        cout << "3. ➖ Subtraction" << endl;
        cout << "4. ➗ Division" << endl;
        cout << "5. % Remainder" << endl;
        cout << "================================" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cout << "\nEnter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "\n------------ Result ------------" << endl;

        switch (choice) {
        case 1:
            cout << "Addition Result     = " << addition(a, b) << endl;
            break;
        case 2:
            cout << "Multiplication Result = " << multiplication(a, b) << endl;
            break;
        case 3:
            cout << "Subtraction Result   = " << subtraction(a, b) << endl;
            break;
        case 4:
            cout << "Division Result      = " << division(a, b) << endl;
            break;
        case 5:
            cout << "Remainder Result     = " << remainder(a, b) << endl;
            break;
        default:
            cout << ">>> Invalid choice!" << endl;
        }

        cout << "--------------------------------" << endl;
        cout << "Do you want to continue? (Enter 0 to exit): ";
        cin >> choice2;
        cout << "\n================================" << endl;

    } while (choice2 != 0);

    cout << "\n*******************************************\n";
    cout << "*    THANK YOU FOR USING THIS CALCULATOR  *\n";
    cout << "*******************************************\n";

    return 0;
}
