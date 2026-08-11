#include<iostream>
using namespace std;
void f1();

int main(){
     
    f1();
    f1();
    f1();
return 0;
}
void f1()
{ 
     static int a;
    cout<<a;
    a++;
}