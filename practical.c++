// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if (a >= b && a >= c) {
//         cout << "Maximum number is: " << a;
//     }
//     else if (b >= a && b >= c) {
//         cout << "Maximum number is: " << b;
//     }
//     else {
//         cout << "Maximum number is: " << c;
//     }

//     return 0;
// }







// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     int fac=1;
//     cout<<"enter the value";
//     cin>>a;
//     for (int i=1;i<=a;i++)
//     {
//         fac=fac*i;
        
//     }
//     cout<<"the fac is: "<<fac;
//     return 0;
// }





// #include<iostream>
// using namespace std;
// void area(int a,int b){
//     double d;
//     d=a*b;
//     cout<<"the area of rectange is :"<<d;
// }
// void area(int x){
// double y;
// y=3.14*x*x;
// cout<<"the are of circle is :"<<y;

// }
// int main(){
//     area(5,2);

//     return 0;
// }






// #include <iostream>
// using  namespace std;
// int main(){
//     int a[2][2];
//     cout<<"enter the 4 values for matrixs";
//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cin>>a[i][j];
//         }
//     }
// cout<<"orignal one "<<endl;
//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<a[i][j];
//         }
//         cout<<endl;
//     }


//      cout << "\nTranspose Matrix:\n";

//     for (int i = 0; i <2; i++) {
//         for (int j = 0; j <2; j++) {
//             cout << a[j][i] << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }







// #include <iostream>
// using namespace std;
// class arith{
//     int a,b;
//     public:
//      void input() {
//         cout << "Enter two numbers: ";
//         cin >> a >> b;
//     }
//  void calculate() {
//         cout << "Addition = " << a + b << endl;
//         cout << "Subtraction = " << a - b << endl;
//         cout << "Multiplication = " << a * b << endl;
//         cout << "Division = " << a / b << endl;
//     }

// };

// int main(){
// arith a;
// a.input();
// a.calculate();
//     return 0;
// }





// #include<iostream>
// using namespace std;
// class student{
//     int a,b;
//     public:
//   student(int x,int y){
//     a=x;
//     b=y;  
//   }
//   void disp(){
//     cout<<"the marks of first and second subjects are :  "<<a<<"    "<<b<<endl;
//   }
// };
// int main(){
//     student s1(80,60),s2(80,80);
//  s1.disp();
//   s2.disp();

//     return 0;
// }




// #include<iostream>
// using namespace std; 
// int main(){
//     int n, sum=0;
//     cout<<"enter the total numbers: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the numbers u want to find avarange"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//          sum=sum+arr[i];
//     }
//     double avg=0;
//     avg=sum/n;
//     cout<<"avrage is : "<<avg;


//     return 0;
// }


#include <iostream>
using namespace std;
class op{
   int x,b;
   public:
   op(int x,int y){
    a=x;
    b=y;
   }
   op operator -(op obj){
    op temp(0);
    temp.x=x - obj.x;
    return temp;
   }
   void disp{
    cout<<"result ="<<x;
   }
};
int main(){
    op n2(8);
    op n1(20);

    op n3 = n1 - n2;

    n3.displa();

    return 0;
}