#include<iostream>
using namespace std;
class calculater{
    private:
    double a,b,c=0;
    char op;
public:
    void read(){
        
        cout<<"===================================================="<<endl;
        cout<<"    Enter the operator (+,-,*,/)   :   "<<endl;
        cout<<"===================================================="<<endl;
        cin>>op;
        cout<<"         #    Enter the value of number 1   :   ";
        cin>>a;
        cout<<"         #    Enter the value of number 2   :   ";
        cin>>b;
    }
    void write(){
        if(op=='+'){
            c=a+b;
            cout<<"===================================================="<<endl;
            cout<<"          The Sum of  "<<a<<" and  "<<b<<" is   :  "<<c<<endl;
            cout<<"===================================================="<<endl;
        }
        else if(op=='-'){
            c=a-b;
            cout<<"===================================================="<<endl;
            cout<<"          The Diffrence of  "<<a<<" and  "<<b<<" is   :  "<<c<<endl;
            cout<<"===================================================="<<endl;
        }
        else if(op=='*'){
            c=a*b;
            cout<<"===================================================="<<endl;
            cout<<"          The Product of  "<<a<<" and  "<<b<<" is   :  "<<c<<endl;
            cout<<"===================================================="<<endl;
        }
        else if(op=='/'){
            if(a==0){
                cout<<"===================================================="<<endl;
                cout<<"    ♨️♨️  The denominator can not be zero   ♨️♨️"<<endl;
                cout<<"===================================================="<<endl;
            }
            else{
            c=a/b;
            cout<<"===================================================="<<endl;
            cout<<"          The Diffrence of  "<<a<<" and  "<<b<<" is   :  "<<c<<endl;
            cout<<"===================================================="<<endl;
            }
        }
        else if(op=='-'){
            c=a-b;
            cout<<"===================================================="<<endl;
            cout<<"          The Diffrence of  "<<a<<" and  "<<b<<" is   :  "<<c<<endl;
            cout<<"===================================================="<<endl;
        }
        
        
        else{
            cout<<"===================================================="<<endl;
            cout<<"        ♨️♨️ Invalid Input  ♨️♨️"<<endl;
            cout<<"===================================================="<<endl;
        }
    }
};
int main(){
calculater cal;
 bool n;
 for(int i=0;i<100;i++)
{
    cout<<"Enter 1 if you wanna calculate the numbers    :   ";
    cin>>n;
    if (n==1){

   
cal.read();
cal.write();
}
else{
    cout<<"So you are going without calculate anything ";
    break;
}

}

    return 0;
}