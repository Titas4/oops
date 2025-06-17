/*#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    string department;
    float salary;

public:
    // Constructor
    Employee(string n = "", int a = 0, string d = "", float s = 0.0) {
        name = n;
        age = a;
        department = d;
        salary = s;
    }

    // Function to input employee data
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter department: ";
        cin >> department;
        cout << "Enter salary: ";
        cin >> salary;
    }

    // Function to display employee data
    void display() {
        cout << "Name: " << name << "\nAge: " << age
             << "\nDepartment: " << department
             << "\nSalary: " << salary << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // ---- Static Initialization ----
    cout << "--- Static Initialization ---" << endl;
    Employee e1;  // static object
    e1.getData();
    e1.display();

    // ---- Dynamic Initialization ----
    int n;
    cout << "\nHow many employees (dynamic)? ";
    cin >> n;

    Employee* emp = new Employee[n];  // dynamic array

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        emp[i].getData();
    }

    for (int i = 0; i < n; i++) {
        cout << "\nDetails of Employee " << i + 1 << ":" << endl;
        emp[i].display();
    }

    // Free dynamically allocated memory
    delete[] emp;

    return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
class Employee{
    string name;
    int age;
    string department;
    int salary;
    public:
        Employee(string n="",int a =0,string d="",int s=0){
            name=n;
            age=a;
            department=d;
            salary=s;

        }
        void getdata(){
            cout<<"enter name";
            cin>>name;
            cout<<"enter age";
            cin>>age;
            cout<<"enter department";
            cin>>department;
            cout<<"enter salary";
            cin>>salary;

        }
        void displaydata(){
            cout<<name<<age<<department<<salary;
        }
};
int main(){
    Employee e1("girish",28,"hr",27000);
    e1.displaydata();
    int n;
    cout<<"enter the no of employees"<<endl;
    cin>>n;
    Employee* emp=new Employee[n];
    for(int i=0;i<n;i++){
         emp[i].getdata();
    }
    for(int i=0;i<n;i++){
         emp[i].displaydata();
    }
    delete[] emp;
    return 0;
}
