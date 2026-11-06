// #include<iostream>
// using namespace std;
// class time{
//     int h,m;
//     public:
//     void gettime(int x,int y){
//     h=x;
//     m=y;
// }
// void  puttime(){
//     cout<<"houe ate"<<h<<endl;
//     cout<<"mins are"<<m<<endl;
// }
// void sum(time T1,time T2)
// {
//     m=T1.m+T2.m;
//     h=m/60;
//     m=m%60;
//     h=h+T1.h+T2.h;
// }
    
//     };



// int main(){
//     time t1,t2,t3;
//     t1.gettime(3,40);
//     t2.gettime(4,30);
//     t3.sum(t1,t2);
//     t3.puttime();
//     return 0;
// }
#include <iostream>
using namespace std;

class Time {
    int h, m;

public:
    void gettime(int x, int y) {
        h = x;
        m = y;
    }

    void puttime() {
        cout << "Hours are: " << h << endl;
        cout << "Minutes are: " << m << endl;
    }

    void sum(Time T1, Time T2) {
        m = T1.m + T2.m;

        h = m / 60;   // extra hours from minutes
        m = m % 60;   // remaining minutes

        h = h + T1.h + T2.h;
    }
};

int main() {

    Time t1, t2, t3;

    t1.gettime(3, 40);
    t2.gettime(4, 30);

    t3.sum(t1, t2);

    t3.puttime();

    return 0;
}