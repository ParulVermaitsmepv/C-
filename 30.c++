#include<iostream>
using namespace std;

    struct Address{
        string l;
        int p;
        string c;
        string s;
        int h;
    
    
    };
    struct Patient{
        int id;
        string name;
        string dis; 
      
        int age;
        Address add;

    };
    int main(){
        Patient p1;

        p1.add.h=1234;
        p1.add.l="solan";
        p1.add.c="shimla";
        p1.add.s="Himachal Pradesh";
        p1.add.p=123;

        
        p1.id=101;
        p1.name="Parul";
        p1.age=20;
        p1.dis="love";
        cout<<"==========================================="<<endl;
        cout<<"           Personal Details"<<endl;
        cout<<"==========================================="<<endl<<endl;
        cout<<" * The Id of Patient is         :    " <<p1.id<<" 😁😁 "<<endl;
        cout<<" * The Name of Patient is       :    " <<p1.name<<" 😁😁 "<<endl;
        cout<<" * The Age of Patient is        :    " <<p1.age<<" 😁😁 "<<endl;
        cout<<" * The dis of Patient is        :    " <<p1.dis<<" 😁😁 "<<endl<<endl<<endl;

            cout<<"==========================================="<<endl;
            cout<<"            Address Details"<<endl;  
            cout<<"==========================================="<<endl<<endl;

        cout<<" * The House number of Patient is       :    " <<p1.add.h<<" 😁😁 "<<endl;
        cout<<" * The  Locality of Patient is          :    " <<p1.add.l<<" 😁😁 "<<endl;
        cout<<" * The City of Patient is               :    " <<p1.add.c<<" 😁😁 "<<endl;
        cout<<" * The State of Patient is              :    " <<p1.add.s<<" 😁😁 "<<endl;
        cout<<" * The PIN Code of Patient is           :    " <<p1.add.p<<" 😁😁 "<<endl;
        return 0;
}