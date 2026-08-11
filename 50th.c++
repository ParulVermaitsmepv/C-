#include<iostream>
using namespace std;
void run(int ,int ,int );
void run(int ,float  ,float );
void run(float ,float  ,float);
int main (){
run(0,0,0);
run(0,0.0f,0.0f);
run(0.0f,0.0f,0.0f);


    return 0;
}
 void run(int a,int b , int result){
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
 result = a+b;
 cout<<"the result is:"<<result<<endl;

}
void run(int a,float b , float result){
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
 result = a+b;
 cout<<"the result is:"<<result<<endl;

}
void run(float a,float b , float result){
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
 result = a+b;
 cout<<"the result is:"<<result;

}