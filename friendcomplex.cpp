#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Friend functions for operator overloading
    friend Complex operator+(const Complex& x, const Complex& y);
    friend Complex operator-(const Complex& x, const Complex& y);
    friend Complex operator*(const Complex& x, const Complex& y);

    // To print the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Overload +
Complex operator+(const Complex& x, const Complex& y) {
    return Complex(x.real + y.real, x.imag + y.imag);
}

// Overload -
Complex operator-(const Complex& x, const Complex& y) {
    return Complex(x.real - y.real, x.imag - y.imag);
}

// Overload *
Complex operator*(const Complex& x, const Complex& y) {
    return Complex(
        x.real * y.real - x.imag * y.imag,
        x.real * y.imag + x.imag * y.real
    );
}

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
