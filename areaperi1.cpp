#include<iostream>
using namespace std;
class Circle{
    double radius;
    const double PI=3.14;
    public:
        Circle(double r){
            radius=r;
        }
        double area(){
            return PI*radius*radius;
        }
        double perimeter(){
            return 2*PI*radius;
        }
};
int main(){
    double r;
    
    
     cout<<"enter radius"<<endl;
    cin>>r;
    if(r<0){
        cout<<"invalid radius"<<endl;
        return 1;
    }
    Circle c1(r);

   cout<<"area"<< c1.area()<<endl;
    cout<<"perimeter"<< c1.perimeter()<<endl;
    return 0;
}