#include <iostream>
using namespace std;

int main() {
    int number;

start:
        cout<<"Enter your number(it must be positive):";
        cin>>number;
        if(number>=0){
            cout<<"You Entered:"<<number<<endl;
        }
        else{
            cout<<"invalid number"<<endl;
            goto start;
        }
    return 0;
}