#include<iostream>
#include<random>
using namespace std;

class Addition {
public:
    Addition(int num1, int num2) {
        cout << "Sum: " << (num1 + num2) << endl;
    }
};

class Subtraction {
public:
    Subtraction(int num1, int num2) {
        cout << "Difference: " << (num1 - num2) << endl;
    }
};

class Multiplication {
public:
    Multiplication(int num1, int num2) {
        cout << "Product: " << (num1 * num2) << endl;
    }
};

class Modulus {
public:
    Modulus(int num1, int num2) {
        cout << "Remainder: " << (num1 % num2) << endl;
    }
};

class Division {
public:
    Division(int num1, int num2) {
        if (num2 != 0) {
            cout << "Quotient: " << (num1 / num2) << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    }
};

void printRandomMessage() {
    string messages[] = {
        "Summing up success!",
        "Elevating through setbacks!",
        "Growing through multiplication!",
        "Sharing creates growth!",
        "Balance in remainders!"
    };

    int n = sizeof(messages) / sizeof(messages[0]);
    int index = rand() % n;
    cout << messages[index] << endl;
}

int main() {
    int num1, num2;
    cout << "Hey! Which operation do you want to perform '+', '-', '*', '/', '%'";
    char c;
    cin >> c;
    cout << "Enter any two numbers: ";
    cin >> num1 >> num2;

    if (c == '+') {
        Addition add(num1, num2);
    } else if (c == '-') {
        Subtraction sub(num1, num2);
    } else if (c == '*') {
        Multiplication mul(num1, num2);
    } else if (c == '/') {
        Division div(num1, num2);
    } else if (c == '%') {
        Modulus mod(num1, num2);
    } else {
        cout << "Enter a valid operation" << endl;
    }

    printRandomMessage();
    return 0;
}
