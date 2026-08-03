#include<iostream>
using namespace std;
void bill();
int main(){
bill();
return 0;
}

void bill(){
    int a,b,c,d,input,output=0,result,result2;
    cout<<"=============================================="<<endl;
    cout<<"      Enter the unit of electricity :       ";
    cin>>a;
    cout<<"=============================================="<<endl;
    if(a<=100&&a>0)  
    {
        result=a*3;
        cout<<"        ******Your bill is:      "<<result<<endl;
    }
    else if(a<=200 && a>=100){
      
       

        
        result=(a-100);
        result2=result*5+300;
        cout<<"         ***Your total bill is :     "<<result2<<endl;
        
        
    }
    else if(a>200){
              
        result=(a-200);  
        result2=result*7+300+500;
        cout<<"\n        ***Your total bill is :     "<<result2<<endl;
        
        
    }
    else {
        cout<<"Invalid input";
    }
}
     