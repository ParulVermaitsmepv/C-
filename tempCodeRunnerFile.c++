#include<iostream>
using namespace std;
int bts(int b,int c,int d,int a,int e);
int main(){
    int s;
    for ( int i=1;i<=10;i++){
        cout<<"=========================================================\n";
        cout<<"Enter the data of the Roll Number  :  "<<i;
        cout<<"=========================================================\n\n\n";
        bts(0,0,0,0,0);
        
    }

    return 0;
}
int bts(int a,int b,int c,int d,int e){
    cout<<"=========================================================\n";
    cout<<"      Enter the marks                            MARKS\n";
    cout<<"=========================================================\n";

    cout<<"\n        #Enter the marks of sub 1        :       ";
    cin>>a;
    cout<<"\n        #Enter the marks of sub 2        :       ";
    cin>>b;
    cout<<"\n        #Enter the marks of sub 3        :       ";
    cin>>c;
    cout<<"\n        #Enter the marks of sub 4        :       ";
    cin>>d;
    cout<<"\n        #Enter the marks of sub 5        :       ";
    cin>>e;

    int sum=a+b+c+d+e;
    int result=(sum*100)/500;
    cout<<"\n\n\n=========================================================\n";
    cout<<"                The presentage of student is: "<<result<<endl;
    cout<<"=========================================================\n\n\n\n\n";
    return result;
}