#include <iostream>
using namespace std;
class student {
    private:
    static int count;

    public:
    student (){
        count++;
    }
    static void disp(){
        cout<<"value of count is  :  "<<count;
    }
};
 int student::count=0;
int main() {
 student s1,s2,s3,s4,s5,s6,s7,s8,s9;
 student ::disp();
    return 0;
}

