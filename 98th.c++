#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;

    // Constructor runs when a Student (or derived class) is created
    Student() {
        cout << "Enter your name : ";
        cin >> name;
    }
};

class Result : protected Student {
public:
    int marks;

    // Constructor runs immediately after Student's constructor
    Result() {
        cout << "Enter your marks: ";
        cin >> marks;
    }

    void disp() {
        cout << "\nName  : " << name << "\n";
        cout << "Marks : " << marks << "\n";
    }
};

int main() {
    Result r1; // Calls Student(), then Result()
    r1.disp();
     
    return 0;
}