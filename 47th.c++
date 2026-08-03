// #include<iostream>
// using namespace std;

// int main(){
//     int n;
  
//     cout<<"enter the value of n: ";
//     cin>>n;
  
//   int m[n];
// for(int i=0;i<n;i++){
//         cout<<"enter the marks of sub "<<i+1;
//         cin>>m[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=m[i];
//     }
//     cout<<"total sum of is:"<<sum;
// return 0;
// }


#include<iostream>
using namespace std;
void run(int n,int m[]);
int main(){
     int n,s;
     
      cout<<"enter the number of subjects :";
    cin>>n;
    int m[n];
    cout<<"Enter the total sudents : ";
    cin>>s;
     for(int i=0;i<=s;i++){
    for(int i=0;i<n;i++){
        cout<<"enter the marks of sub "<<i+1<<" :  ";
        cin>>m[i];
    }     

    run(n,m);
    }
    return 0;
}
void run(int n ,int m[]){
   
   
    int sum=0;
    for(int i=0;i<n;i++){
     sum=sum+ m[i];
    
    }
   
    int result=(sum*100)/(n*100);
    cout<<"The precentage is : "<<result<<endl;
}