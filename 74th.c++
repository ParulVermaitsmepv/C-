#include<iostream>
using namespace std;
class st{
public:
int roll;
string name;

};
int main(){
    st s1;
    s1.roll=101;
    s1.name="parul";
    // st s2=s1;
    st s2(s1);
    
    cout<<s1.roll<<s1.name<<endl;
    cout<<s2.roll<<s2.name;
}
