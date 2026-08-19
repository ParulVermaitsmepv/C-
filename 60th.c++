#include<iostream>
using namespace std;
class abc{
    private:
    int a,b,c;

 public:
void read(){
   
    cout<<"\nEnter the value of first number :  ";
    cin>>a;
     cout<<"Enter the value of second number :  ";
    cin>>b;
     
}
void write(){
   c=a+b;
    cout<<"\nThe sum of  "<<a <<"and  "<<b<<"is  : "<<c;
}
};
abc m1;
int main(){
void fun();
abc m2;
m1.read();

m1.write();

fun();
    return 0;
}
void fun(){
    abc m3;
    m3.read();
    m3.write();
}