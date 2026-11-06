// #include<iostream>
// using namespace std;
//  int x;
//  void changev(int x){
//         x=20;
//         cout<<x;
//  }
//   void changer(int &x){
//         x=40;
//         cout<<x;
//  }
//   void changea(int *x){
//         *x=50;
//         cout<<*x;
//  }
 
//  int main(){
//     changev(x);
//     changea(&x);
//     changer(x);
//     cout<<x;
//  }
#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor called" << endl;
    }

    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Student s;

    cout << "Program is running" << endl;

    return 0;
}