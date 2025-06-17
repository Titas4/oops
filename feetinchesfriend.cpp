#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
    float meters;
    float centimeters;

public:
    DM(float m = 0, float cm = 0) {
        meters = m;
        centimeters = cm;
    }

    void input() {
        cout << "Enter distance in meters and centimeters: ";
        cin >> meters >> centimeters;
    }

    void display() const {
        cout << "Distance: " << meters << " meters, " << centimeters << " centimeters" << endl;
    }

    friend DM add(const DM&, const DB&);
};

class DB {
    float feet;
    float inches;

public:
    DB(float f = 0, float in = 0) {
        feet = f;
        inches = in;
    }

    void input() {
        cout << "Enter distance in feet and inches: ";
        cin >> feet >> inches;
    }

    void display() const {
        cout << "Distance: " << feet << " feet, " << inches << " inches" << endl;
    }

    friend DM add(const DM&, const DB&);
};

// Friend function to add DM and DB and return result as DM
DM add(const DM& dm, const DB& db) {
    // Convert DB to meters and centimeters
    float db_meters = db.feet * 0.3048f;
    float db_centimeters = db.inches * 2.54f;

    // Add both distances
    float total_cm = dm.centimeters + db_centimeters;
    float total_m = dm.meters + db_meters;

    // Convert excess centimeters to meters
    total_m += (int)(total_cm / 100);
    total_cm = (int)total_cm % 100;

    return DM(total_m, total_cm);
}

int main() {
    DM dm;
    DB db;

    dm.input();
    db.input();

    DM result = add(dm, db);

    cout << "\nResult of addition (in meters and centimeters):\n";
    result.display();

    return 0;
}
