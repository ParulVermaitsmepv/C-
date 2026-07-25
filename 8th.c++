#include<iostream>
#include<iomanip>
using namespace std;

int  main(){
    int n=1234;
    double d=45.124;
    string s= "hi dont know waht is that";
   cout<<setw(1)<<n<<endl;//if we are seting less then it will behave like default
   cout<<setw(20)<<d<<endl;  //if we set more then total are 20 in which 5 are accupied
   cout<<setw(30)<<s;
    return 0;
}