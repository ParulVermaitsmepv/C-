#include<iostream>
using namespace std;
class tae{
    int a,b;
    public:
    tae(int x,int y){
      
        a=x;
        b=y;


    }
    void dis(){
        cout<<a<<b;
    }
};
struct student{
    int roll;
    string name;
    int cash;
    
};

void kim(student & s1){
        cout<<"enter the value of roll name cash: ";
        cin>>s1.roll>>s1.name>>s1.cash;
        cout<<s1.roll<<s1.name<<s1.cash;
    }
int main(){
    tae t1(10,20);
    
    t1.dis();
    student s1;
    kim(s1);
    return 0;
}