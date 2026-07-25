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
    int grose;
    int total1=0,total2=0,total3=0,total4=0,total5=0;
    cout<<"============================================="<<endl;
    cout<<"                Resturant Menu               "<<endl;
    cout<<"============================================="<<endl<<endl<<endl;
    cout<<"*********Select your Items********"<<endl; 
   cout<<" Do You Like To Order Pizza         --    Rs 250"<<endl;  
   cout<<"If Yes So Enter 1 If No So Enter 0:  "<<endl;
   cin>>n;
   
   
   if(n == 1){
    cout<<"Enter its Quantity: ";
   cin>>q;
    total1=250*q;
    
   }

   cout<<" Do You Like To Order Burger        --    Rs 120"<<endl;
   cout<<"If Yes So Enter 1 If No So Enter 0:  "<<endl;
   cin>>n;
   
   
   if(n == 1){
    cout<<"Enter its Quantity: ";
   cin>>q;
    total2=120*q;
    
   }
   cout<<" Do You Like To Order Sandwich      --    Rs 100"<<endl;
   cout<<"If Yes So Enter 1 If No So Enter 0:  "<<endl;
   cin>>n;
   
 
   if(n == 1){
      cout<<"Enter its Quantity: ";
   cin>>q;
    total3=100*q;
    
   }
   cout<<" Do You Like To Order Cold Drink    --    Rs 50"<<endl;
   cout<<"If Yes So Enter 1 If No So Enter 0:  "<<endl;
   cin>>n;
   
  
   if(n == 1){
     cout<<"Enter its Quantity: ";
   cin>>q;
    total4=50*q;
    
   }
   cout<<" Do You Like To Order Coffee        --    Rs 80"<<endl;
   cout<<"If Yes So Enter 1 If No So Enter 0:  "<<endl;
   cin>>n;
   
   
   if(n == 1){
    cout<<"Enter its Quantity: ";
   cin>>q;
    total5=80*q;
    
   }
   grose=total1+total2+total3+total4+total5;
   cout<<"YOUR TOTAL BILL IS: "<<grose;
    
  
    return 0;

}