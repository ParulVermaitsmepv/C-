#include<iostream>
using namespace std;
int main(){
    float num1,num2,result;
    char c;
    
    cout<<"enter  the operator:";
    cin>>c;
    cout<<"enter the value:";
    cin>> num1;
    cout<<"enter the value:";
    cin>>num2;
    if(c=='+'){
    result=num1+num2;
    cout <<"😎😎Result"<<result<<"😎😎"<<endl;
    }
    else if(c=='-'){
        result=num1-num2;
        cout<<"😎😎Result="<<result<<"😎😎"<<endl;
    }
    else if(c=='*'){
        result=num1*num2;
        cout<<"😎😎Result="<<result<<"😎😎"<<endl;
    }
    else if (c=='/'){
        if(num2==0){
            cout<<"🫩🫩the number cant be divided by zero🫩🫩"<<endl;
        }
        else{
            result=num1/num2;
            cout<<"😎😎Result="<<result<<"😎😎"<<endl;
        }
    }
    else{
        cout<<"🫩🫩please check the operator 🫩🫩"<<endl;
    }
    return 0;
}