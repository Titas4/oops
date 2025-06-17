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

    // Merge function
    void merge(const String& s1, const String& s2) {
        delete[] str;
        str = new char[strlen(s1.str) + strlen(s2.str) + 1];
        strcpy(str, s1.str);
        strcat(str, s2.str);
    }

    // Display
    void display() {
        cout << str << endl;
    }

    // Destructor
    ~String() {
        delete[] str;
    }
};

int main() {
    String s1("Hello ");
    String s2("World");
    String s3;

    s3.merge(s1, s2);

    cout << "Merged String: ";
    s3.display();

    return 0;
}
