#include<iostream>
using namespace std;
class functon(){
    private:
    int roll,m1,m2,m3;
    char name[20];
    int total;
    float pre;
    public:
    void input(){
        cout<<"enter rhe roll no. marks of maths and english and hindi";
        cin>>roll>>m1>>m2>>m3;
    }
    void calculate(){
        total=m1+m2+m3;
        
    }
}