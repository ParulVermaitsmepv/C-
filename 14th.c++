#include<iostream>
using namespace std;
int main(){
    int balance=10000;
    int choice;
    int withdraw;
    int deposit;
    
    cout<<"********** ATM MENU ************ \n Enter your choice:\n 1.withdraw\n 2.deposit \n 3.check balance:\n 4.Exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"balance:"<<balance<<endl;
        break;
        case 2:
        cout<<"Enter the amount to deposit:"<<endl;
        cin>>deposit;
        balance+=deposit;
        cout<<" Total balance:"<<balance<<endl;
        break;
        case 3:
        cout<<"Enter the anount you want to withdraw:"<<endl;
        cin>>withdraw;
        if(withdraw>balance){
            cout<<"Insufficiant Balance"<<endl;
        }
        else{
            balance=balance-withdraw;
            cout<<"balance"<<balance<<endl;
        }
        break;
        case 4:
        cout<<"Thanku for using this ATM"<<endl;
        break;
    
    default:
          cout<<"Invelid choice";
    }
        
    return 0;
}