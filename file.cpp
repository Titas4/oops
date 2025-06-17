#include <bits/stdc++.h>
using namespace std;

int main() {

    // Open the text file named 
    // "textFile.txt"
    ofstream f("textFile.txt");
     if (!f.is_open()) {
        cerr << "Error opening the file!";
        return 1;
    }
    f<<"okk";

    ifstream fi("textFile.txt");

    // Check if the file is 
    // successfully opened
    if (!fi.is_open()) {
        cerr << "Error opening the file!";
        return 1;
    }
    string s;

    // Read each line of the file, store
    // it in string s and print it to the
    // standard output stream 
    while (true){
        getline(fi, s);
        cout << s << endl;
    }
    ifstream fin{
        "textfile.txt"
    }; // This is the original file
    ofstream fabsf{ "copy.txt" };
    if (fin&& f) {

        while (getline(fin, s)) {
            f << s<< "\n";
        }
        cout << "Copy Finished \n";
    }
    else {
        // Something went wrong
        printf("Cannot read File");
    }
    // Closing file
    fin.close();
    f.close();
    return 0;
    // Close the file
    
}

