#include<iostream>
using namespace std;
int run();
int main(){
run();
}
int run(){
    int a,b;
    cout<<"enter the total no. of students:  ";
    cin>>a;
    cout<<"enter the total numbers of subjects : ";
    cin>>b;
        int pre[a];
        int m[b];
    for(int i=0;i<a;i++){
        int sum=0;
        cout<<"Enter the marks of roll no. : "<<i+1<<endl;
        for(int i=0;i<b;i++){
            cout<<"enter the marks of sub "<<i+1<<" : ";
            cin>>m[i];
           sum=sum+m[i];
        }
        float result=(sum*100)/(b*100);
        pre[i]=result;
     cout<<"the pre of student is: "<<result<<endl;
    }
        for (int i = 0; i < a; i++)
    {
        cout << "Roll No. " << i + 1 << " = " << pre[i] << "%" << endl;
    }
    return 0;
}