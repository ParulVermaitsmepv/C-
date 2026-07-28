#include<iostream>
using namespace std;
int main(){
    string item2 = "Burger";
    string item5 = "Coffee";
    string item1 = "pizza";
    string item3 = "Sandwich";
    string item4 = "ColdDrink";
    int choice;
    int q;
    int n;
    int total;
    cout<<"============================================="<<endl;
    cout<<"                Resturant Menu               "<<endl;
    cout<<"============================================="<<endl<<endl<<endl;
    cout<<"*********Select your Items********"<<endl; 
   cout<<" 101 for Pizza         --    Rs 250"<<endl;
   
   cout<<" 102 for Burger        --    Rs 120"<<endl;
   cout<<" 103 for Sandwich      --    Rs 100"<<endl;
   cout<<" 104 for Cold Drink    --    Rs 50"<<endl;
   cout<<" 105 for Coffee        --    Rs 80"<<endl;
  
  
   
    cout<<"enter your code: ";
    cin>>choice;
     cout<<"Enter the quantity"<<endl; 
   cin>>q;
    switch(choice){
           
        case 101:
         total=250*q;
         cout<<"Your Total Bill is: "<<total<<endl;
        break;
        case 102:
         total=120*q;
         cout<<"Your Total Bill is: "<<total<<endl;
        break;
        case 103:
         total=100*q;
         cout<<"Your Total Bill is: "<<total<<endl;
        break;
        case 104:
        total=50*q;
        cout<<"Your Total Bill is: "<<total<<endl;
        break;
        case 105:
         total=80*q;
         cout<<"Your Total Bill is: "<<total<<endl;
        break;
    }

    
   
    return 0;
}