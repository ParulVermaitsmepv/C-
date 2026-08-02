#include<iostream>
using namespace std;
void bill();
int main(){
bill();
return 0;
}

void bill(){
    int a,b,c,d,input,output=0,result,result2;
    cout<<"enter the unit";
    cin>>a;
    if(a<=100)  
    {
        result=a*3;
        cout<<"your bill is: "<<result;
    }
    else if(a<=200 && a>100){
        d=(a/100)%10;
        b=(a/10)%10;
        c=(a/1)%10;
       

        
        result=(a-100);
        cout<<"result: "<<result;
       
        result2=result*5+300;
        cout<<"your total bill is :"<<result2;
        
        
    }
    else if(a>200){
        d=(a/100)%10;
        b=(a/10)%10;
        c=(a/1)%10;          
        result=(a-200);
        cout<<"result: "<<result;
        
        result2=result*7+300+500;
        cout<<"your total bill is :"<<result2;
        
        
    }
    else {
        cout<<"invalid input";
    }
}
     