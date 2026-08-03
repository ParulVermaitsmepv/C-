#include<iostream>
using namespace std;
void run();
int main(){
run();

    return 0;
}
void run(){
    int s,n,sum=0;
   
    cout<<"Enter the total number of students : ";
    cin>>s;
     int st[s];
    cout<<"Enter the total number of subject : ";
    cin>>n;
    int pre[n];
    for(int i=0;i<s;i++){

        for(int i=0;i<n;i++){
            cout<<"Enter the marks of subject "<<i+1<<" :  ";
            cin>>pre[i];
            sum=sum+pre[i];
            int result[s];
            result[i]=(sum*100)/(n*100);
        }
        cout<<"The precentage of Roll no. "<<i+1<<" is :  "<<pre[i]<<endl;
    }

}