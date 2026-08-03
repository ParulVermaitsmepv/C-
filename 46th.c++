#include<iostream>
using namespace std;
void run();
int main(){

run();
    return 0;
}
void run(){
    int num,a,result=0;
    cout<<"enter the unit value: ";
    cin>>num;
    while(num>0){
        a=num%10;
        result =result*10+a;
        num=(num/10);
    }
    cout<<result;
}