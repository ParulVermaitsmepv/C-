#include<iostream>
using namespace std;
int main(){
    string name;
    int pass;
    cout<<"Enter your username:  ";
    cin>>name;
    cout<<"Enter you password: ";
    cin>>pass;
    bool login;
    login=(name=="admin" && pass==1234);
    if(login==1)
    {
        cout<<"YOU CAN ACCESS IT: "<<login;
    }
    else{
        cout<<"YOU CAN NOT ACCESS IT: "<<login;
    }
    return 0;
}