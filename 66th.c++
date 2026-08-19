#include<iostream>
using namespace std;
class  B;
class A{
    private:
    int x;
    public:
    void setdata(){
        x= 10;
    }
    friend void disp(A,B);

};
class B{
    private:
    int y;
    public:
    void setdata(){
        y=20;
    }
    friend void disp(A,B);
};
void disp (A a1,B b1){
    cout<<"value of x and y is "<<a1.x<<b1.y;
}
int main(){
    A a;
    B b;
    a.setdata();
    b.setdata();
    disp(a,b);
    return 0;

}