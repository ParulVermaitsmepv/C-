#include<iostream>
using namespace std;


int main(){
    class abc{
    public:
    int a,b,c;
   
 public:
void read(){
   
    cout<<"\nEnter the value of first number :  ";
    cin>>a;
     cout<<"Enter the value of second number :  ";
    cin>>b;
}
  };
    abc m1;
   
    

m1.read();
   m1.c=m1.a+m1.b;
  cout<<"the result is :"<<m1.c;

    return 0;
}

