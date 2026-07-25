#include<iostream>
using namespace std;
int main(){
        char m;
        int s=0;
        cout<<"=====================\n";
        cout<<"Attendance System\n";
        cout<<"==================\n";

        for(int i=1;i<=20;i++){
       
            cout<<"Enter student's attendance(A for absent and  P for present):  "<<i<<endl;
            cin>>m;
           

                if (m == 'P'|| m=='p'){
                    cout<<"Marked\n";
                }
                
                else if(m== 'A' || m=='a'){
                        cout<<"Marked\n";
                        s++;
                    }
            
                    
                
                else{
                    cout<<"RE-Enter\n";
                        i--;
                    continue;
                }
            
        }
        
        
        cout<<"=============================\n";
        cout<<"there are total present are \n"<<s <<"\n";
        cout<<"there are total absent are \n"<<20-s<<endl;
        cout<<"=============================\n";
        return 0;
    }