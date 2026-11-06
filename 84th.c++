#include<iostream>
using namespace std;
class Emplo{
   int salary,id;
   string name;
    public:
    Emplo(int i,int s,string n){
       id=i;
       salary=s;
       name=n;
    }
    void dis(){
        cout<<"the id of the emp is : "<<id<<endl;
        cout<<"the name of the emp is  :"<<name<<endl;
        cout<<"the salary of the emp is  : "<<salary<<endl;
    }
};
int main(){
    Emplo em( 101,90000,"parul");
    em.dis();
    return 0;
}