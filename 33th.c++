#include<iostream>
using namespace std;
int bts(int b,int c,int d,int a,int e);
int main()
{
    int pre[10];

    for (int i = 1; i <= 10; i++)
    {
        cout << "=========================================================\n";
        cout << "     Enter the data of the Roll Number : " << i;
        cout << "\n=========================================================\n\n\n";
        

        pre[i - 1] = bts(0, 0, 0, 0, 0);

        cout << "====================================================================================================\n";
        cout << "====================================================================================================\n\n";
    }

    cout << "\n\n=========================================\n";
    cout << " Roll No\tPercentage\n";
    cout << "=========================================\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "   " << i + 1 << "\t\t" << pre[i] << "%" << endl;
    }

    cout << "=========================================\n";

    return 0;
}
int bts(int a,int b,int c,int d,int e){
   

    int sum=a+b+c+d+e;
    int result=(sum*100)/500;
    cout<<"\n\n=========================================================\n";
    cout<<"                The presentage of student is: "<<result<<endl;
    cout<<"=========================================================\n\n";
     if(a<30 || b<30 || c<30 || d<30 || e<30){
            cout<<"      😔😔You are fail. you must improve yourself 😔😔\n\n\n\n";
            
        }
        else{
            cout<<"       ☺️☺️You are Pass . Keep it up ☺️☺️\n\n\n\n";
        }

    return result;
}