#include<iostream>
using namespace std;
class pro{
    
    int k;
  public:
    pro(int x){
        k=x;
        cout<<"the value of pro :"<<k;
    }
};
class nobe:private pro{
    int l;
    int m;
    
 
    public:
    nobe(int n,int x):pro(  x){
        l = n;
        m = x;
         
        cout<<"the value of nobe is: "<<l<<m;
    }
};
int main(){

 nobe n(2,5);
    return 0;
}