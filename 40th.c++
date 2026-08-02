// #include<iostream>
// using namespace std;
// void fun(int , int);
// int main(){
//     cout<<"enter the value of a :";
//     cin>> g;
//     cout<<"enter the value of b :";
//     cin>> h;
//     fun(g,h);
//     return 0;
// }
#include<iostream>
using namespace std;
void fun(int , int);
int main(){
    int g,h;
    cout<<"enter the value of a :";
    cin>> g;
    cout<<"enter the value of b :";
    cin>> h;
    fun(g, h);
    return 0;
}
void fun(int a, int b){
    int c;
    c=a+b;
    cout<<"sum of the value:"<<c;
    
    c=a-b;
    cout<<"\ndiff :"<<c;
    c=a*b;
    cout<<"\nmulti:"<<c;

    c=a/b;
    cout<<"\nquen:"<<c;
}
