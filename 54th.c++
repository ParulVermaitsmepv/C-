#include<iostream>
using namespace std;
void kashi();
 int sum=200;
int main(){
    kashi();
cout<<"\nsum: "<<sum;
    cout<<"\nvalue of sum is "<<::sum;
    return 0;
    cout<<"\nvalue of sum is "<<sum;
}
void kashi(){
    int sum=300;
    cout<<"\nvalue of sum is "<<sum;
     cout<<"\nvalue of sum is "<<::sum; 
}