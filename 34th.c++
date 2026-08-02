#include<iostream>
using namespace std;
int bts(int a,int b,int c ,int d, int e);
int main(){
    int pre[10];
    for(int i=1;i<=10;i++){
        cout<<"Enter the Data of Roll no.     :      "<<i<<endl;
        pre[i-1]= bts(0,0,0,0,0);
        cout<<"======================================================================================================\n";
        cout<<"======================================================================================================\n";
    }
    cout<<"     Roll no.            Presentage \n";

    for(int i=0;i<10;i++){
        cout<<"     "<<i+1<<"           "<<pre[i]<<"%"<<endl;
    }

    return 0;
}
int bts(int a,int b,int c,int d,int e){
        cout<<"=========================================================\n";
    cout<<"      Enter the marks                            MARKS\n";
    cout<<"=========================================================\n";
    cout<<"        #Enter the marks of sub 1        :       ";
    cin>>a; 
    cout<<"        #Enter the marks of sub 2        :       ";
    cin>>b;
    cout<<"        #Enter the marks of sub 3        :       ";
    cin>>c;
    cout<<"        #Enter the marks of sub 4        :       ";
    cin>>d;
    cout<<"        #Enter the marks of sub 5        :       ";
    cin>>e;

    int sum=a+b+c+d+e;
    int result=(sum*100)/500;
    cout<<"\n\n=========================================================\n";
    cout<<"                The presentage of student is: "<<result<<endl;
    cout<<"=========================================================\n\n";
     if(a<30 || b<30 || c<30 || d<30 || e<30){
            cout<<"      😔😔You are fail. you must improve yourself 😔😔\n\n\n\n";
            
        }
        else{
            cout<<"       ☺️☺️You are Pass . Keep it up ☺️☺️\n\n\n\n";
        }

    return result;
}