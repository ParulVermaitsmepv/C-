// data member and member fuction static menmber is the member the of class not
//  object or it belongs to class not to a specific object one copy exixts for 
//  intire class all objects share the same static data member useful for sharing
//  common information share by all objects in traditional c++ static data member 
//   is decleared inside the class and define outside the class 

#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x;
    public:
    void bts(){
        x=20;
    }
    friend void tae(A a1,B b1);
};
class B{
    private:
    int y;
    public:
    void bts(){
        y=20;
    }
    friend void tae(A a1,B b1);
};
void tae(A a1,B b1){
    cout<<"the sum is "<<a1.x<<b1.y;
};

int main(){
    A a1;
    B b1;
    a1.bts();
    b1.bts();
tae(a1, b1);
    return 0;
}