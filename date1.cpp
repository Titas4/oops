#include<iostream>
using namespace std;
class Date{
    int d,y,m;
    bool leap(int y){
       return  ((y%4==0&&y%100!=0)||(y%400==0));
    }
    public:
        void get_date(){
            cout<<"enter day";
            cin>>d;
            cout<<"enter month";
            cin>>m;
            cout<<"enter year";
            cin>>y;
        }
        bool isvalid(){
            if(d<1||m<1||m>12||y<1)
            return false;
            int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
            if(leap(y))
              days_in_month[1]=29;
            if(d>days_in_month[m])
            return false;         
        return true;
        }
        void displaydate(){
            cout<<d<<"."<<m<<"."<<y;
        }};
        int main(){
            Date d1;
            d1.get_date();
            d1.displaydate();
            cout<<(d1.isvalid()?"valid":"not valid");
            return 0;

        }
    
