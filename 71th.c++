#include<iostream>
using namespace std;
class complex{
    private:
    int a ,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    void bts(){
        cout<<"value of a and  b is: "<<a<<" "<<b;
    }

};
int main(){
complex c1(12,15);
c1.bts();
    return 0;
}