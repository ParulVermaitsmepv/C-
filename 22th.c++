#include<iostream>
using namespace std;
int main(){
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int result;
    int roll;
    string course;
    string name;
    string sem;

    cout<<"------------------------------"<<endl;
    cout<<"-        PERSONAL DETAILS      -"<<endl;
     cout<<"------------------------------"<<endl;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your roll no: ";
    cin>>roll;
    cout<<"Enter your Course name: ";
    cin>>course;
    cout<<"Enter your Semester :";
    cin>>sem;
    cout<<"============================================"<<endl;
    cout<<"  Enter your makrs out of 100          MARKS "<<endl;
    cout<<"============================================="<<endl;
    cout<<"Enter your marks of 1st subject:          ";
    cin>>marks1;
    cout<<"Enter your marks of 2nd subject:          ";
    cin>>marks2;
    cout<<"Enter your marks of 3rd subject:          ";
    cin>>marks3;
    cout<<"Enter your marks of 4th subject:          ";
    cin>>marks4;
    cout<<"Enter your marks of 5th subject:          ";
    cin>>marks5;
    cout<<"================================"<<endl;
    cout<<"            REPORT              "<<endl;
     cout<<"================================"<<endl;
    cout<<"        Name: "<<name<<"        "<<endl;
    cout<<"        Roll Number :"<<roll<<"        "<<endl;
    cout<<"        Course: "<<course<<"        "<<endl;
    cout<<"        Semester: "<<sem<<"        "<<endl;
    result=marks1+marks2+marks3+marks4+marks5;
    cout<<"=======Total Marks: "<<result<<"======="<<endl;
    float pre=(float (result)/500)*100;
    cout<<"=======Total Presentage: "<<pre<<"======";


    return 0;
}