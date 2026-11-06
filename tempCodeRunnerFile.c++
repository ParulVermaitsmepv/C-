#include <iostream>
using namespace std;
class student{
    int a,b;
    public:
    student(int x, int y){

    a=x;
    b=y;
}
    void disp(){
        cout<<"the sum of a and b is :"<<a<<b;
    }
};
int main(){
    int x,y;

        cout<<"enter the value of a and b: ";
        cin>>x>>y;
            student s1(x,y);
    s1.disp();
    return 0;
}