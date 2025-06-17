#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* str;

public:
    // Constructor
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    String(const String& s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Assignment operator
    String& operator=(const String& s) {
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    // + operator for concatenation
    String operator+(const String& s) {
        char* temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        String result(temp);
        delete[] temp;
        return result;
    }

    // == operator
    bool operator==(const String& s) {
        return strcmp(str, s.str) == 0;
    }

    // < operator
    bool operator<(const String& s) {
        return strcmp(str, s.str) < 0;
    }

    // Display string
    void display() {
        cout << str << endl;
    }

    // Destructor
    ~String() {
        delete[] str;
    }
};

int main() {
    String s1("Hello"), s2("World"), s3;

    // Concatenate
    s3 = s1 + s2;
    cout << "Concatenated String: ";
    s3.display();

    // Assignment
    String s4;
    s4 = s3;
    cout << "Assigned String: ";
    s4.display();

    // Comparison
    if (s1 == s2)
        cout << "s1 is equal to s2" << endl;
    else if (s1 < s2)
        cout << "s1 is less than s2" << endl;
    else
        cout << "s1 is greater than s2" << endl;

    return 0;
}
