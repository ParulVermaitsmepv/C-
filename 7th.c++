#include<iostream>
using namespace std;
#define age 20
int main(){
    #if(age<18)
    
        cout<<"You are elegibal";

    
    #else
        cout<<"not able";
    
    #endif
    return 0;
}