// #include<iostream>
// using namespace std;
// class tae{
//     int a,b;
//     public:
//     tae(int x,int y){
      
//         a=x;
//         b=y;


//     }
//     void dis(){
//         cout<<a<<b<<endl;
//     }
// };
// struct student{
//     int roll;
//     string name;
//     int cash;
    
// };

// void kim(student & s1){
//         cout<<"enter the value of roll name cash: ";
//         cin>>s1.roll>>s1.name>>s1.cash;
//         cout<<s1.roll<<endl<<s1.name<<endl<<s1.cash;
//     }
// int main(){
//     tae t1(10,20),t2(50,20) ,t3(20,20);
    

//     student s1;
//         kim(s1);
//         t1.dis();
//     t2.dis();
//     t3.dis();

//     return 0;
// }

#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:

    // Constructor 1
    Student() {
        roll = 0;
        name = "Unknown";
    }

    // Constructor 2
    Student(int r) {
        roll = r;
        name = "Unknown";
    }

    // Constructor 3
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {

    Student s1;
    Student s2(10);
    Student s3(20, "Shanu");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}