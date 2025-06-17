/*#include <iostream>
using namespace std;

const int SIZE = 100;  // Maximum size of the stack

// Template class for Stack
template <class T>
class STACK {
private:
    T arr[SIZE];  // Array to hold stack elements
    int top;      // Index of the top element

public:
    // Constructor to initialize top
    STACK() {
        top = -1;
    }

    // Push operation
    void push(T value) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    // Display operation
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack contents: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

 int main(){
            
            STACK <int> s;
            int choice,value;
           do{ cout<<"1.push"<<endl;
             cout<<"2.pop"<<endl;
              cout<<"3.display"<<endl;
               cout<<"4.exit"<<endl;
               cout<<"enter choice"<<endl;
               cin>>choice;
               switch(choice){
                case 1:
                    cout<<"enter value"<<endl;
                    cin>>value;
                    s.push(value);
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    s.display();
                    break;
                case 4:
                    break;
                default:
                    cout<<"invalid choice"<<endl;
                

               }
            
        } while(choice!=4);
            return 0;*/
    #include<iostream>
    using namespace std;
    const int SIZE=100;
    template<class T>
    class Stack{
        int top;
        T arr [SIZE];
        public:
            Stack(){
                top=-1;
            }
        void push( T value){
            if(top==SIZE-1){
                cout<<"stack full";
                return;}
            else{
                
            arr[++top]=value;
            }
            }
        
        void pop(){
            if(top<0){
                cout<<"empty";
                return;

            }
            else{
                arr[top--];
            }
        }
        void display(){
             if(top<0){
                cout<<"empty";
                return;

            }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i];
            }
        }
        }
    };
    int main(){
        Stack <int> s;
        int choice,value;
        do{
            cout<<"1.push"<<endl;
            cout<<"2.pop"<<endl;
            cout<<"3.display"<<endl;
            cout<<"4.exit"<<endl;
            
            cout<<"enter your choice";
            cin>>choice;
        switch(choice){
            case 1:
                
                cout<<"enter value";
                cin>>value;
                s.push(value);
                break;
           case 2:
                
                s.pop();
                break;
            case 3:
                
                s.display();
                break;
            case 4:
            
                cout<<"exitting programming";
                break; 
            default:
                cout<<"invalid input";
        }
        }while(choice!=4);
        return 0;
    }
            
        
        

