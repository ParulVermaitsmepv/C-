#include<iostream>
using namespace std;

    struct student{
        string name;
        
        int roll;
        float marks;
          };
    int main()
     {  
    student s1;
    s1.name="parul";
    s1.roll=101;
    s1.marks=56.32;
    cout<<"name is"<<s1.name<<endl;
      
    return 0;
}