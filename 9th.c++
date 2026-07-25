#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=2;
    double result =a/b;
    cout<<"result="<<result;
    double result1=static_cast<double>(a)/b;
    cout<<"\n result="<<result1;
    char ch='A';
    cout<<ch;
    int result3=(int)ch;
    cout<<result3;
    }