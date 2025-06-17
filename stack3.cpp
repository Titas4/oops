#include<iostream>
using namespace std;
class Stack{
    int top,size;
    int* arr;
    public:
        Stack(int n){
            top=-1;
            size=n;
            arr=new int[size];
        }
            
        void push(int value){
            if(top>=size-1){
                cout<<"stack full"<<endl;
                
            }
            else{
                arr[++top]=value;
                cout<<"pushed"<<value<<endl;
            }
        }
            void pop(){
                if(top<0){
                    cout<<"stack empty"<<endl;

                }
                else{
                    cout<<"popped"<<arr[top--]<<endl;
                }
            }
            void display(){
                if(top<0){
                    cout<<"stack empty"<<endl;
                }
                else{
                for(int i=0;i<=top;i++){
                    cout<<arr[i]<<endl;
                }
            }
        }
            ~Stack(){
                delete[] arr;
            }
        };
        int main(){
            int n;
            cout<<"enter size:"<<endl;
            cin>>n;
            Stack s(n);
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
            return 0;
    }
            
        
        
