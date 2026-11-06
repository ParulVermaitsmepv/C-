#include<iostream>
using namespace std;
class item{
 
    int a,b;
   public:
    void showdata(){
        cout<<"value of a and b is : "<<a<<b;
    }
    void setdata(int p,int q){
        a=p;
        b=q;
    }
};
class product{
    int m,n;
    public:
    void setdata(int x,int y){
        m=x;
        n=y;
    }
    operator item(){
        item temp;
        // temp.a=m;
        // temp.b=n;
        temp.setdata(m,n);
        return temp;
    }
};
int main(){
    product p1;
    item i1;
    p1.setdata(10,20);
    i1=p1;
    i1.showdata();

    return 0;
}