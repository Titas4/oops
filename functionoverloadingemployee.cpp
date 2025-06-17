#include <iostream>
using namespace std;

class EmployeeReport {
private:
    int employeeId;
    double totalBonus;
    double totalOvertime;

public:
    // Default constructor
    EmployeeReport() {
        employeeId = 0;
        totalBonus = 0.0;
        totalOvertime = 0.0;
    }

    // Overloaded setpara() with parameters
    void setpara(int id, double bonus, double overtime) {
        employeeId = id;
        totalBonus = bonus;
        totalOvertime = overtime;
    }

    // Overloaded setpara() without parameters - sets default values
    void setpara() {
        employeeId = 9999;
        totalBonus = 0.0;
        totalOvertime = 0.0;
    }

    // Display function
    void displayreport() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Total Bonus: $" << totalBonus << endl;
        cout << "Total Overtime: " << totalOvertime << " hours" << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // Create 4 employee report objects
    EmployeeReport emp1, emp2, emp3, emp4;

    // Set parameters using overloaded methods
    emp1.setpara(101, 5000.0, 20.5);
    emp2.setpara(102, 4500.0, 18.0);
    emp3.setpara(103, 5200.0, 22.5);
    emp4.setpara();  // Uses default values

    // Display reports
    cout << "Employee Reports:\n";
    cout << "--------------------------" << endl;
    emp1.displayreport();
    emp2.displayreport();
    emp3.displayreport();
    emp4.displayreport();

    return 0;
}
