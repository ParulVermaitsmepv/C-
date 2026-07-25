#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your number";
    cin>>a;
    if(a%2==0&&a>=0)
    cout<<"the number is positive and even";
else if(a>=0)
cout <<"number is positive";
else if(a%2==0)
cout<<"number is even";
else 
cout<<"number is nither even nor positive";
return 0;

}