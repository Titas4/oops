#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Initialize time with fixed values
    void initialize(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
        void inputdata(){
           int h,m,s; 
            cin>>h;
             cin>>m;
             cin>>s;
        }

    // Display time in HH:MM:SS format
    void display() {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    // Add two time objects and return result
    Time add(Time t) {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }

    // Subtract two time objects and return result
    Time subtract(Time t) {
        Time result;
        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diff = total1 - total2;

        if (diff < 0) diff = -diff; // handle negative time

        result.hours = diff / 3600;
        diff %= 3600;
        result.minutes = diff / 60;
        result.seconds = diff % 60;
        return result;
    }
};

int main() {
    Time t1, t2, t3, t4;
int h1,h2,m1,m2,s1,s2;
cin>>h1;
cin>>h2;
cin>>m1;
cin>>m2;
cin>>s1;
cin>>s2;
    t1.initialize(h1, m1, s1);
    t2.initialize(h2, m2, s1);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    // Add time
    t3 = t1.add(t2);
    cout << "\nAdded Time: ";
    t3.display();

    // Subtract time
    t4 = t1.subtract(t2);
    cout << "Subtracted Time: ";
    t4.display();

    return 0;
}
