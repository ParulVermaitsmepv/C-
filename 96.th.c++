#include <iostream>
using namespace std;
class product{
  
    int m,n;
    public:
    void setdata(int x, int y){
        m=x;
        n=y;
    }
    
int getm(){
    return (m);
}
int getn(){
    return (n);
}
};
class item{
    
int a,b;
public:

void showdata(int x ,int y){
    cout<<"value of a and b is: "<<a<<b;
}
item(product p){
a=p.getm();
b=p.getn();
}
item(){

}

};
int main(){
    product p1;
    item i1;
    p1.setdata(4,5);
    i1=p1;
   
    i1.showdata(0,0);
    return 0;
 }
// #include <iostream>
// using namespace std;

// class product;

// class item {
//     int a, b;

// public:
//     void showdata() {
//         cout << "value of a and b is: " << a << " " << b << endl;
//     }

//     void convert(product p);
// };

// class product {
//     int m, n;

// public:
//     void setdata(int x, int y) {
//         m = x;
//         n = y;
//     }

//     friend void item::convert(product p);
// };

// void item::convert(product p) {
//     a = p.m;
//     b = p.n;
// }

// int main() {
//     product p1;
//     item i1;

//     p1.setdata(4, 5);

//     i1.convert(p1);

//     i1.showdata();

//     return 0;
// }