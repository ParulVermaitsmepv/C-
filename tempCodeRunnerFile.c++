#include<iostream>
using namespace std;
int main(){
    int p=0;
    int l=0;
    int a=0;
    char n;

    cout<<"==============================================\n";
    cout<<"               TODAYS ATTENDANCE              \n";
    cout<<"==============================================\n";
    for(int i=1;i<=20;i++){
        cout<<"           Mark student's attendence\n          (A for absent , P for present and L for leave) \n          Roll no.      :      "<<i<<endl;
        cin>>n;
        if(n=='p'|| n=='P'){
            cout<<"==============================================\n";
            cout<<"              ☺️☺️ Marked As Present ☺️☺️"<<endl;
            cout<<"==============================================\n";
            p++;
        }

        else if(n=='a'||n=='A'){
            cout<<"==============================================\n";
                cout<<"              😔😔 Marked As Absent 😔😔"<<endl;
                cout<<"==============================================\n";
                a++;
            }
        else if(n=='l'||n=='L'){
                cout<<"==============================================\n";
               cout<<"                  😑😑 Marked As Leave 😑😑"<<endl;
               cout<<"==============================================\n";
               l++;
            }
        
        else{

             cout<<"          ♨️♨️Invalid Input RE-ENTER IT♨️♨️ :  ";
             i--;
            continue;
        }
    }
    cout<<"        # Total Students Are Present   :     "<<p<<endl;
    cout<<"        # Total Students Are Absent    :     "<<a<<endl;
    cout<<"        # Total Students Are On Leave  :     "<<l<<endl;
    return 0;
}