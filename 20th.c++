#include<iostream>
using namespace std;
int main(){
    int marks;
    int income;
    cout<<"enter your presentage of marks:";
    cin>>marks;
    cout<<"enter your family income:";
    cin>>income;
   
    (marks>=80&&income<200000 )?cout<<"Eligible for scholership":cout<<"Not Eligible";

    return 0;

}