#include<iostream>
using namespace std;
class rec{
    double lenght,breadth;
    public:
    rec(int h,int w){
        lenght=h;
        breadth=w;
    }
        rec(int h) {
        lenght = h;
        breadth = 1;
    
    }
    void disp(){
        int area;
        cout<<"Area of the rectangle is    :  "<<lenght*breadth;
    }
};
int main(){
 rec r1(500,200);
    r1.disp();
    rec r2(500,200);
    r2.disp();
    rec r3(200);
    r3.disp();
    return 0;
}