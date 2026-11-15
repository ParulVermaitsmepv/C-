// #include <iostream>
// using namespace std;
// class student{
//     int a,b;
//     public:
//   void setmarks(int m)
//   {
//     a=m;

//   } 
//   void display(){
//    cout<<"the value of marks is :"<<a;
//   } 
// };
// int main(){
//     student s1;
//     s1.setmarks(50);
//     s1.display();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class ani{
//     protected:
//     void eat(){
//         cout<<"animal is eating";

//     }
//     };
//     class dog: protected ani{
//         public: 
//         void dogeat(){
//             eat();
//         }
//         void bark(){
//         cout<<"dog is barking";
//     }
//     };
//     class cat: protected ani{
//         public:
//         void meow(){
//         cout<<"cat meow";
//     }
//     void cateat(){
//         eat();
//     }
//     };

// int main(){
//     dog d;
// d.dogeat();
//     d.bark();
//     cat c;

//     c.meow();
//     c.cateat();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][2];
//     int b[2][2];
//     int c[2][2];
//     cout<<"enter the values in matrix";
//     for(int i=0; i<2;i++)
//     {
//         for (int j=0; j<2;j++){
//             cin>>a[i][j];
//         }
//     }
//      for(int i=0; i<2;i++)
//     {
//         for (int j=0; j<2;j++){
//             cout<<a[i][j]<<"   ";
//         }
//         cout<<endl;
//     }


//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cin>>b[i][j];
       
//         }
//     }
//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<b[i][j]<<"   ";
//         }
//         cout<<endl;
//     }

// for (int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//         c[i][j]=0;
//         for (int k=0;k<2;k++){
//             c[i][j]+=a[i][k]*b[k][j];
//         }
//     }
// }
//  for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class add{
//     public:
//     int a;
//     void  input(int x){
//         a=x;
//     }
//     add operator +(add obj){
//         add temp;
//         temp.a=a+obj.a;
//         return temp;
//     }
//     void disp(){
//         cout<<"sum"<<" "<<a;
//     }
// };
// int main(){
//     add obj1, obj2, obj3;

//     obj1.input(10);
//     obj2.input(20);

//     obj3 = obj1 + obj2;

//     obj3.disp();


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a[2][2],b[2][2],c[2][2];
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cin>>a[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<a[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cin>>b[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<b[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<c[i][j];
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a[2][2],b[2][2],c[2][2];
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cin>>a[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<a[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cin>>b[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<b[i][j];
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             c[i][j]=0;
//             for(int k=0;k<2;k++){
//                 c[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<c[i][j];
//         }
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][2],b[2][2],c[2][2];
//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<a[i][j];
//         }
//         cout<<endl;
//     }
    
//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             b[i][j]=a[j][i];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for (int j=0;j<2;j++){
//             cout<<b[i][j];
//         }  cout<<endl;
//     }
//     return 0;
// // }
// #include<iostream>
// using namespace std;
// class student{
//     int marks=100;
//     friend void d(student);
// };
// void d(student s){
//         cout<<"the total marks are= "<<s.marks;
//     }
// int main(){
// student s,s1;
// d(s1);

    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class stu{
//     string name="parul";
//     friend void disp(stu);
// };
// void disp(stu s){
//     cout<<"the name is "<<s.name;

// }
// int main(){
//     stu s;
//     disp(s);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class name{
//     int me ;
//     public:
//     name(){
//         me=110;
//     }
   

//  void operator++(){
//     ++me;
//  }
//   void disp(){
//     cout<<"value ="<<me;
//  }
//  };
 
// int main(){
// name m;
// ++m; 
// m.disp();

//     return 0;
// }
#include<iostream>
using namespace std;
class name{
    int a;
    public :
    name(){
        a=10;
    }
    void disp();
};
 void name:: disp(){
    cout<<"the fav is kim taehyung"<<a;
}
int main(){
    name n;
    n.disp();

    return 0;
}