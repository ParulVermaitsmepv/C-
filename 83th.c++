#include <iostream>
using namespace std;
class student {
    int roll;
    double marks;
    string name;
    public:
    student(){
        roll=1;
        marks=89;
        name="parul";
    }
    void disp(){
        cout<<"The roll no. is  : "<<roll;
        cout<<"\nThe name is   : "<<name<<endl;
        cout<<"The marks the obtained   : "<<marks<<endl;
    }
};
int main(){
    student st;
    st.disp();

    return 0;
}