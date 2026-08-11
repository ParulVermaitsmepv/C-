#include<iostream>
using namespace std;
void f1();

int main(){
    extern int x;
    cout<<"value of x is "<<x;
    f1();
    cout<<"\nvalue of x is"<<x;
return 0;
}
int x;
void f1()

{ 
    x++;
    cout<<"\nvalue of x is"<<x;
}