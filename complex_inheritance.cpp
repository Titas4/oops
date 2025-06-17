#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    float real, imag;

public:
    void getComplex() {
        cout << "Enter real part of base complex number: ";
        cin >> real;
        cout << "Enter imaginary part of base complex number: ";
        cin >> imag;
    }

    void displayComplex() {
        cout << "Base Complex Number: " << real << " + " << imag << "i" << endl;
    }

    float getReal() const {
        return real;
    }

    float getImag() const {
        return imag;
    }
};

// Derived class: adds its own complex number to base
class Derived : public Base {
private:
    float d_real, d_imag;

public:
    void setDerivedComplex(float r, float i) {
        d_real = r;
        d_imag = i;
    }

    void addComplex() {
        float sum_real = real + d_real;
        float sum_imag = imag + d_imag;
        cout << "Sum of base and derived complex: " << sum_real << " + " << sum_imag << "i" << endl;
    }
};

// Third class: accesses base complex using getter functions
class DifferenceCalc {
private:
    float f_real, f_imag;

public:
    void setOwnComplex(float r, float i) {
        f_real = r;
        f_imag = i;
    }

    void differenceFromBase(const Base& b) {
        float diff_real = b.getReal() - f_real;
        float diff_imag = b.getImag() - f_imag;
        cout << "Difference between base and own complex: " 
             << diff_real << " + " << diff_imag << "i" << endl;
    }
};

int main() {
    Derived d;
    DifferenceCalc calc;

    d.getComplex();  // Input base complex number
    d.setDerivedComplex(3.5, 2.5);  // Derived's own complex part
    d.addComplex();  // Addition

    calc.setOwnComplex(2.0, 1.5);   // Third class's complex number
    calc.differenceFromBase(d);    // Subtract from base using getter

    return 0;
}
