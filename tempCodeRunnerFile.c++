#include<iostream>
using namespace std;
void bts(string a,string b,string c);
int main(){
    string first,last,add;
    bts(first,last,add);
return 0;
}
void bts (string a,string b,string c){
    cout<<"Enter your name : ";
    cin>>a;
    cout<<"Enter your Last name  : ";
    cin>>b;
    c=a+b;
    cout<<"Full Name :  "<<c;
}

// #include<iostream>
// using namespace std;
// void bts(string &a,string &b,string &c);
// int main(){
//     string first,last,add;
//     bts(first,last,add);
// return 0;
// }
// void bts (string &a,string &b,string &c){
//     cout<<"Enter your name : ";
//     cin>>a;
//     cout<<"Enter your Last name  : ";
//     cin>>b;
//     c=a+b;
//     cout<<"Full Name :  "<<c;
// }