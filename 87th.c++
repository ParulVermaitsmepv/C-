#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
        void getval(int x, int y){
            a=x;
            b=y;
        }

        void display(){
            cout<<"Value of a and b"<<a<<" "<<b;
        }

    friend test sum(test ,test);
};

test sum(test t1, test t2){
    test temp;
    temp.a=t1.a+t2.a;
    temp.b=t1.b+t2.b;
    return (temp);
}

int main(){
    test A,B,C;
    A.getval(10,20);
    B.getval(30,40);
    C=sum(A,B);
    C.display();
    return 0;
}