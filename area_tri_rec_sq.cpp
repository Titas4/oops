#include <iostream>
using namespace std;

class triangle {
    double base, height;
public:
    triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    double b, h;
    cout << "enter base" << endl;
    cin >> b;
    if (b <= 0) {
        cout << "invalid input";
        return 1;
    }

    cout << "enter height" << endl;
    cin >> h;
    if (h <= 0) {
        cout << "invalid input";
        return 2;
    }

    triangle t(b, h);
    cout << "area is: " << t.area();
    return 0;
}  // ✅ Now the main function is properly closed

