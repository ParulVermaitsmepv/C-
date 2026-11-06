#include<iostream>
using namespace std;
class bts{
    int *p;
    public :
    bts(){
        p=new int;
        *p=100;
        
    }
    void dis(){
        cout<<*p<<endl;
    }
};
int main(){
    bts b;
    b.dis();

    return 0;
}