#include <iostream>
using namespace std;

class Matrix {
    int** data;
    int rlimit, climit;

public:
    // Dynamic constructor
    Matrix(int r, int c) {
        rlimit = r;
        climit = c;
        data = new int*[rlimit];
        for (int i = 0; i < rlimit; i++) {
            data[i] = new int[climit];
        }
    }

    // Copy constructor
    Matrix(const Matrix& m) {
        rlimit = m.rlimit;
        climit = m.climit;
        data = new int*[rlimit];
        for (int i = 0; i < rlimit; i++) {
            data[i] = new int[climit];
            for (int j = 0; j < climit; j++) {
                data[i][j] = m.data[i][j];
            }
        }
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter elements (" << rlimit << "x" << climit << "):" << endl;
        for (int i = 0; i < rlimit; i++) {
            for (int j = 0; j < climit; j++) {
                cin >> data[i][j];
            }
        }
    }

    // Function to display matrix
    void display() {
        for (int i = 0; i < rlimit; i++) {
            for (int j = 0; j < climit; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to add two matrices
    void add(Matrix& m1, Matrix& m2) {
        if (m1.rlimit != m2.rlimit || m1.climit != m2.climit) {
            cout << "Matrix sizes do not match!" << endl;
            return;
        }
        for (int i = 0; i < rlimit; i++) {
            for (int j = 0; j < climit; j++) {
                data[i][j] = m1.data[i][j] + m2.data[i][j];
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rlimit; i++) {
            delete[] data[i];
        }
        delete[] data;
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    Matrix m1(rows, cols);
    Matrix m2(rows, cols);
    Matrix result(rows, cols);

    cout << "Enter elements for Matrix 1:" << endl;
    m1.input();

    cout << "Enter elements for Matrix 2:" << endl;
    m2.input();

    result.add(m1, m2);

    cout << "Resultant Matrix after Addition:" << endl;
    result.display();

    return 0;
}
