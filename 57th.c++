#include<iostream>
using namespace std;

class student{
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
int main(){
    student st;
   st.read();
   st.write();
return 0;
    
}