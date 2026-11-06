#include<iostream>
using namespace std;
void sim();
 static int s;

int main(){
   sim();
    s+=1;
    sim();
    return 0;
}
void sim(){
        int s=7;
           s+=1;
        cout<<s<<endl;
        cout<< ::s;

    }

// #include<iostream>
// using namespace std;
// class time{
//     int a,b;
//     public:
//     time(int m,int h){
//         a=m;
//         b=h;

//     }
//     void kim(){
//         cout<<"the main character is  :   "<<a<<" "<<b;
//     }
// };
// int main(){
//     time t(20,50);
//     t.kim();
//     return 0;
// }