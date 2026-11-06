#include<iostream>
using namespace std;
 class item{
    int m,n;
    public:
    
    void showdata(){
    cout<<"value of m and n is: "<<m<<n;
}
void setdata(int x,int y)
{
    m=x;
    n=y;
}
    
 };
 class product{
    int a,b;
    public:

void setdata(int p,int q){
    a=p;
    b=q;
}

        operator item(){ 
    
        item temp;
      temp.setdata(a,b);
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