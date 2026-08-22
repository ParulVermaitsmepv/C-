// #include<iostream>
// using namespace std;
// class comp{
//     int a,b;
//     public:
//     comp(int x,int y){
//     a=x;
//     b=y;
//    }
//    void tae(){
//      cout<<"enter the value of x and  y : "<<a<<b;
     
//    }
// };
   
// int main(){
//     cout<<"enter the vale of x and y";
//     cin>>a>>b;
// comp c1(x,y);

// c1.tae();
//     return 0;
// }
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
    int x, y;

    cout << "Enter the value of x and y: ";
    cin >> x >> y;

    comp c1(x, y);

    c1.tae();

    return 0;
}



