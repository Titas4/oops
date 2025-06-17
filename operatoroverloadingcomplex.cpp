#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Copy constructor
    Complex(const Complex& c) {
        real = c.real;
        imag = c.imag;
    }

    // Operator Overloading
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(const Complex& c) {
        float r = real * c.real - imag * c.imag;
        float i = real * c.imag + imag * c.real;
        return Complex(r, i);
    }

    Complex operator/(const Complex& c) {
        float denom = c.real * c.real + c.imag * c.imag;
        float r = (real * c.real + imag * c.imag) / denom;
        float i = (imag * c.real - real * c.imag) / denom;
        return Complex(r, i);
    }

    // Display function
    void display() {
        cout << real;
        if (imag >= 0) cout << "+";
        cout << imag << "i" << endl;
    }
};

int main() {
    int r1, i1, r2, i2, r3, i3, r4, i4;

    // Runtime input for a, b, c, d
    cin >> r1 >> i1;
    Complex a(r1, i1);

    cin >> r2 >> i2;
    Complex b(r2, i2);

    cin >> r3 >> i3;
    Complex c(r3, i3);

    cin >> r4 >> i4;
    Complex d(r4, i4);

    // Expression: a - b * c + d
    Complex result = a - b * c + d;

    cout << "\nResult of a - b * c + d is: ";
    result.display();

    return 0;
}
