#include<iostream>
using namespace std;
void man();
int main(){
man();
}
void man(){
    int a,b,c,d,e,f,g,h,input,output;
    cout<<"enter the value you want input";
    cin>>input;
    cout<<"\nthe number you enter: "<<input;a = (input / 10000000) % 10;
b = (input / 1000000) % 10;
c = (input / 100000) % 10;
d = (input / 10000) % 10;
e = (input / 1000) % 10;
f = (input / 100) % 10;
g = (input / 10) % 10;
h = input % 10;

output = h * 10000000 +
         g * 1000000 +
         f * 100000 +
         e * 10000 +
         d * 1000 +
         c * 100 +
         b * 10 +
         a;
    cout<<"the number resvered:  "<<output;
}