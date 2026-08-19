#include<iostream>
using namespace std;
class abc{
    private:
    int roll;
    string name;
    float pre;

 public:
void read(){
   
    cout<<"enter the roll no of student :  ";
    cin>>roll;
     cout<<"enter the Name of student :  ";
    cin>>name;
      cout<<"enter the Presentage of student :  ";
      cin>>pre;
}
void write(){
    cout<<"The roll no. of the student is : "<<roll;
    cout<<"\nThe name of the student is: "<<name;
    cout<<"\nThe presentage of the student is: "<<pre;
}
};
abc m1;
int main(){
void fun();
abc m2;
m1.read();
m2.read();
m1.write();
m1.write();
fun();
    return 0;
}
void fun(){
    abc m3;
    m3.read();
    m3.write();
}