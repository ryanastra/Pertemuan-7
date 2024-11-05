#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b);
void subtract(int a, int b);
int multiply(int a, int b);
void divide(int a, int b);

int main() {
    int num1, num2;

    // Meminta input dari pengguna
    cout << "Input number : ";
    cin >> num1;
    cout << "Input number : ";
    cin >> num2;

    // Calling the addition function
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    // Calling the subtraction procedure
    subtract(num1, num2);

    // Calling the multiplication function
    int product = multiply(num1, num2);
    cout << "Product: " << product << endl;

    // Calling the division procedure
    divide(num1, num2);

    return 0;
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}

// Procedure (void function) definition for subtraction
void subtract(int a, int b) {
    int result = a - b;
    cout << "Difference: " << result << endl;
}

// Function definition for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Procedure (void function) definition for division
void divide(int a, int b) {
    if (b != 0) {  // Menangani pembagian dengan nol
        float result = static_cast<float>(a) / b;
        cout << "Quotient: " << result << endl;
    } else {
        cout << "Error: Cannot be declared" << endl;
    }
}
