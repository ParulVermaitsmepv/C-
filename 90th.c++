#include<iostream>
using namespace std;

class complex{
    private:
        int a, b;
    public:
        void setdata(int x, int y) {
            a = x;
            b = y;
        }
        complex operator - () {
            complex temp;
            temp.a = -a;
            temp.b = -b;
            return temp;
        }
        void showdata() {
            cout << "Value of a and b is " << a << " " << b << "\n";
        }
};

int main(){
    complex c1,c2;
    c1.setdata(4,5);
    c1.showdata();
    c2=-c1;
    c2.showdata();
    
}