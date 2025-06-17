/*#include<iostream>
using namespace std;
class Complex{
    int img,real;
    public:
        Complex(int r=0,int i=0){
            real=r;
            img=i;
            
        }
    Complex add(const Complex&c){
        
       return Complex(real+c.real,img+c.img);
    
        
        
    }
    Complex substract(const Complex&c){
        
       return Complex(real-c.real,img-c.img);
    
        
        
    }
    Complex multiply(const Complex&c){
        
       int i=real*c.real-img*c.img;
       int r=real*c.img+img*c.real;
       return Complex(r,i);
    
        
        
    }
     Complex divide(const Complex&c){
        float denom=c.real*c.real+c.img*c.img;
       int i=(real*c.real+img*c.img)/denom;
       int r=(img*c.real-real*c.img)/denom;
       return Complex(i,r);
    
        
        
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
        Complex diff= c1.substract(c2);
         Complex mul= c1.multiply(c2);
          Complex div= c1.divide(c2);

       sum.display();
       diff.display();
       mul.display();
       div.display();

       return 0;
    }*/
   #include<iostream>
   using namespace std;
   class Complex{
      int real,imag;
      public:
         Complex(int r=0,int i=0){
            real=r;
            imag=i;
         }
         Complex add( const Complex &c){

            return   Complex (real+c.real,imag+c.imag);

   }
 Complex substract( const Complex &c){

            return   Complex (real-c.real,imag-c.imag);

   }
   Complex multiply(const Complex&c){
      int i=real*c.real-imag*c.imag;
      int r=real*c.imag+imag*c.real;
      Complex(r,i);
   }
   
   Complex divide(const Complex&c){
     float denom=c.real*c.real+c.imag*c.imag;
      float i=(real*c.real+imag*c.imag)/denom;
      float r=(real*c.imag+imag*c.real)/denom;
      Complex(r,i);
   }
   void display(){
      cout<<real<<"+"<<imag<<"i";
   }
   };
   int main(){
     int i1,i2,r1,r2;
      cin>>r1;
      cin>>r2;
      cin>>i1;
      cin>>i2;
      Complex c1(r1,i2);
      Complex c2(r2,i2);
      Complex sum=c1.add(c2);
      Complex substract=c1.substract(c2);
      Complex multiply=c1.multiply(c2);
      Complex divide=c1.divide(c2);
      sum.display();
      substract.display();
      multiply.display();
      divide.display();
      return 0;
   }

