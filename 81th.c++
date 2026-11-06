#include<iostream>
using namespace std;
class cl{
    int h,m;
    public:
   void get(int x,int y){
    m=x;
    h=y;
}
void  put(){
    cout<<"houe ate"<<h<<endl;
    cout<<"mins are"<<m<<endl;
}
void sum(cl t1,cl t2){
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.h+t2.h;
}
    };



int main(){
    cl t1,t2,t3;
    t1.get(3,40);
    t2.get(4,30);
    t3.sum(t1,t2);
    t3.put();
    return 0;
}
