#include <iostream>
using namespace std;

const int SIZE = 100;  // Maximum size of the queue

// Template class for Queue
template <class T>
class QUEUE {
private:
    T arr[SIZE];      // Array to hold queue elements
    int front, rear;  // Indexes for front and rear

public:
    // Constructor to initialize front and rear
    QUEUE() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(T value) {
        if (rear >= SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;  // First insertion
        arr[++rear] = value;
        cout << value << " enqueued to queue." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[front++] << " dequeued from queue." << endl;
        if (front > rear) {
            front = rear = -1; // Reset if queue becomes empty
        }
    }

    // Display operation
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue contents: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function with switch-case menu
int main() {
    QUEUE<int> q;  // Queue of integers
    int choice, value;

    do {
        cout << "\n*** QUEUE MENU ***\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
