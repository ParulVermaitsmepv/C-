#include<iostream>
using namespace std;
float circle();
int main()
{
    cout<<"Calling circle function to calculate the area of circle";
    double area=circle();
    cout<<"\nArea of circle is "<<area;
    return 0;
}
float circle()
{
    int r;
    cout<<"\nEnter the value for r";
    cin>>r;

    double result=3.147*r*r;
    return result;
}