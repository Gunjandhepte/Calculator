#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;

    void input() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void add() {
        cout << "Result = " << a + b << endl;
    }

    void subtract() {
        cout << "Result = " << a - b << endl;
    }

    void multiply() {
        cout << "Result = " << a * b << endl;
    }

    void divide() {
        if (b == 0)
            cout << "Error! Division by zero not allowed.\n";
        else
            cout << "Result = " << a / b << endl;
    }
};

int main() {
    Calculator calc;
    int choice;

    do {
        cout << "\n--- SIMPLE CALCULATOR ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            calc.input();
        }

        switch (choice) {
        case 1: calc.add(); break;
        case 2: calc.subtract(); break;
        case 3: calc.multiply(); break;
        case 4: calc.divide(); break;
        case 5: cout << "Exiting Calculator...\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
