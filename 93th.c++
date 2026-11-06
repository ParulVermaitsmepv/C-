#include<iostream>
using namespace std;
class integer{

private:
int x;
public:
void setdata(int a)
{
   x=a; 

}
void showdata(){
    cout<<"x is "<<x<<endl;
}

integer operator ++(){
    integer i;
    i.x=++x;
    return i;
}
integer operator ++(int){
    integer i;
    i.x=x++;
    return i;
}
integer operator --(){
    integer i;
    i.x=--x;
    return i;
}
integer operator --(int){
    integer i;
    i.x=x--;
    return i;
}

};
int main(){
    integer i1,i2,i3;
i1.setdata(5);
i1.showdata();
i2=i1++;
i3=++i2;
i2.showdata();
i1.showdata();
i3.showdata();
i1.setdata(5);
i1.showdata();
i2=i1--;
i3=--i2;
i2.showdata();
i1.showdata();
i3.showdata();




    return 0;
   
}