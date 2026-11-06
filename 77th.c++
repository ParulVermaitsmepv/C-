#include<iostream>
using namespace std;

class comp {
    int a, b;

public:
    comp(int x, int y) {
        a = x;
        b = y;
    }

    void tae() {
        cout << "Value of x = " << a << endl;
        cout << "Value of y = " << b << endl;
    }
    
};

int main() {
   

    comp c1(20,50);

    c1.tae();
    comp c2(52,63);
    c2.tae();

    return 0;
}



