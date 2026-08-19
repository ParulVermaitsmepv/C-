#include<iostream>
using namespace std;
class emp{
   private:
    int id;
    string name;
    char na[20];
 public:
    void read(){
        cout<<"\nEnter the id : ";
        cin>>id;
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the second name : ";
        cin>>na;
    }
    void write(){
        cout<<"\n\n\n\n\n\nThe Roll no.  :  "<<id;
        cout<<"\nThe Name   :   "<<name;
        cout<<"\nThe second name  :  "<<na;
    }
};
int main(){
    emp s[10];
    int n;
    cout<<"Enter the total number of Emploies :  ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    s[i].read();
    
    }
    for(int i=0;i<n;i++)
    {
    s[i].write();
    
    }
   
    return 0;
}