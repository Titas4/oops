#include <iostream>
using namespace std;

// Simple Complex class
class Complex {
public:
    float real, imag;

    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// ADD class with overloaded add() functions
class ADD {
public:
    // 1. Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // 2. Add two floats and one integer
    float add(float a, float b, int c) {
        return a + b + c;
    }

    // 3. Add two Complex numbers
    Complex add(Complex c1, Complex c2) {
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }
};

int main() {
    ADD obj;

    // Integer addition
    int sum1 = obj.add(10, 20);
    cout << "Sum of two integers: " << sum1 << endl;

    // Float and integer addition
    float sum2 = obj.add(2.5f, 3.5f, 4);
    cout << "Sum of two floats and one int: " << sum2 << endl;

    // Complex number addition
    Complex c1(1.5, 2.5), c2(3.5, 4.5);
    Complex c3 = obj.add(c1, c2);
    cout << "Sum of two complex numbers: ";
    c3.display();

    return 0;
}
