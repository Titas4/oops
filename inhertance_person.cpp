#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
public:
    Person(){

    }
    Person(string n,int a){
    name=n;
    age=a;
}
void inputdata(){
    cout<<"enter name";
    cin>>name;
    cout<<"enter age";
    cin>>age;
}
virtual void printaddress() {
        cout<<"address"<<this;
    }

};
class Employee:public Person{
    string Employeeid;
    public:
        void toassign(int id){
            Employeeid=id;
        }
    void tochnge(int id){
            Employeeid=id;
        }
    void deleterecord(){
        Employeeid="";
    }
    void printaddress() override{
        cout<<"address"<<this;
    }
    
};
class Student:public Person{
    string Studentid;
    public:
        void toassign(int id){
            Studentid=id;
        }
    void tochnge(int id){
            Studentid=id;
        }
    void deleterecord(){
        Studentid="";
    }
    void printaddress()override{
        cout<<"address"<<this;
    }
    
};
int main() {
    // Create objects
    Person p1, p2;
    Student s1, s2;
    Employee e1, e2;

    cout << "--- Enter details for p1 ---" << endl;
    p1.inputdata();
    cout << "--- Enter details for p2 ---" << endl;
    p2.inputdata();

    cout << "\n--- Object Addresses ---" << endl;
    p1.printaddress();
    p2.printaddress();
    s1.printaddress();
    s2.printaddress();
    e1.printaddress();
    e2.printaddress();

    // Assign sample records
    s1.toassign(1001);
    s2.toassign(1002);
    e1.toassign(2001);
    e2.toassign(2002);

    // Change and delete
    s1.tochnge(1010);
    s2.deleterecord();
    e1.tochnge(2010);
    e2.deleterecord();

    cout << "\n--- Memory Size of Objects (using sizeof) ---" << endl;
    cout << "Size of Person: " << sizeof(Person) << " bytes" << endl;
    cout << "Size of Student: " << sizeof(Student) << " bytes" << endl;
    cout << "Size of Employee: " << sizeof(Employee) << " bytes" << endl;

    return 0;
}