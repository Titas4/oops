#include<iostream>
using namespace std;
class Celsius{
    double tempC;
    public:
        Celsius(double C){
            tempC=C;
        }
    double converttoF(){
        return tempC*9/5+32;
    }};
    class Fahrenheit{
    double tempF;
    public:
        Fahrenheit(double F){
            tempF=F;
        }
    double converttoC(){
        return (5*(tempF-32))/9;
    }};

int main(){
    char ch;
    cin>>ch;
    if(ch=='H'){
        double C;
        cout<<"enter temp"<<endl;
        cin>>C;
        Celsius C1(C);
        cout<<C1.converttoF()<<endl;

    }
    else{
     double F;
        cout<<"enter temp"<<endl;
        cin>>F;
        Fahrenheit F1(F);
        cout<<F1.converttoC()<<endl;   
    }
    return 0;
}