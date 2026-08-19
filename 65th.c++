#include <iostream>
using namespace std;

class complex {
    private:
        int a;
        int b;
         cout << "Value of a is: "  << "\n";
            cin>>a;
            cout << "Value of b is: " << b << "\n";
            coin>>b;

    public:
        void read(int x, int y) {
            cout << "Value of a is: "  << "\n";
            cin>>a;
            cout << "Value of b is: " << b << "\n";
            coin>>b;
            a = x;
            b = y;

        }
        
        void write() {
            cout << "Value of a is: " << a << "\n";
            cout << "Value of b is: " << b << "\n";
        }

        friend void fun(complex c);
};

// Receiver object
void fun(complex c) {
    // Now permitted to access private members 'a' and 'b'
    cout << "The sum of 2 numbers: " << c.a + c.b << "\n";
}

int main() {
    complex c1;
    c1.read(int ,int);
    c1.write();

    // Call the friend function
    fun(c1);
    fun(c1);

    return 0;
}