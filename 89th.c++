#include<iostream>
using namespace std;

int main(){
    int n,f,p=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        f=n%10;

        p=p*10+f;
        n=n/10;
    }
    cout<<"the rev no.is  :  "<<p;
    return 0;
}
// #include<iostream>
// using namespace std;

// int main(){
//     int n, rev = 0, rem;

//     cout << "Enter a number: ";
//     cin >> n;

//     while(n != 0){
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n = n / 10;
//     }

//     cout << "Reverse = " << rev;

//     return 0;
// }