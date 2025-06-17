#include <iostream>
using namespace std;

class HEIGHT {
private:
    int feet;
    int inches;

public:
    // Constructor
    HEIGHT(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    // Convert to centimeters
    float into_cm() {
        int totalInches = feet * 12 + inches;
        return totalInches * 2.54;
    }

    // Overload - operator
    HEIGHT operator-(HEIGHT h) {
        int h1 = feet * 12 + inches;
        int h2 = h.feet * 12 + h.inches;
        int diff = h1 - h2;
        if (diff < 0) diff = -diff;
        return HEIGHT(diff / 12, diff % 12);
    }

    // Overload < operator
    bool operator<(HEIGHT h) {
        return into_cm() < h.into_cm();
    }

    // Overload == operator
    bool operator==(HEIGHT h) {
        return into_cm() == h.into_cm();
    }

    // Display height
    void show() {
        cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    int f1, i1, f2, i2;
    cout << "Enter height 1 (feet inches): ";
    cin >> f1 >> i1;
    cout << "Enter height 2 (feet inches): ";
    cin >> f2 >> i2;

    HEIGHT h1(f1, i1), h2(f2, i2);

    HEIGHT diff = h1 - h2;

    cout << "\nHeight 1: ";
    h1.show();
    cout << "\nHeight 2: ";
    h2.show();
    cout << "\nDifference: ";
    diff.show();

    // Comparison
    if (h1 == h2)
        cout << "\nHeights are equal.\n";
    else if (h1 < h2)
        cout << "\nHeight 1 is shorter.\n";
    else
        cout << "\nHeight 1 is taller.\n";

    return 0;
}
