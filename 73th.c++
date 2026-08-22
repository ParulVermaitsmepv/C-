#include <iostream>
using namespace std;
class bts{
    int *a;
    
    public:
        bts()
        {
            a=new int;//heap memory
            cout<<"address of maeks is "<<&a;
            *a=90;
            }
            void tae(){
                cout<<*a;
            }

            ~bts(){
                delete  a;
            }
};
int main(){
bts b;
b.tae();
    return 0;
}