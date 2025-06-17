#include<iostream>
using namespace std;
class Complex{
    int img,real;
    public:
        Complex(int i=0,int r=0){
            img=i;
            real=r;
        }
    Complex add(const Complex&c){
        Complex result;
        result.img=img+c.img;
        result.real=real+c.real;
        return result;
        
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }};
    int main(){
     int r1,i1,r2,i2;  
        cin>>r1;
        cin>>i1;
        cin>>r2;
        cin>>i2;
        Complex c1(i1,r1);
        Complex c2(i2,r2);
       Complex sum= c1.add(c2);
       sum.display();
       return 0;
    }
