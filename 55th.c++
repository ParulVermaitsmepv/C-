
#include<iostream>
using namespace std;
void kashi();
int main()
{
    extern int x;
    cout<<"the value of x:"<<x;
    kashi();
    return 0;
}
int x;
void kashi(){
    x++;
    cout<<"the  x is: "<<x;
}