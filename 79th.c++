#include <iostream>
using namespace std;
class x{
    int a=5;
    friend class y;
    public:
    void show(){
        cout<<a<<endl;
    }
};
class y{
    public:
    void show(x obj){
    cout<<obj.a;
    }
};
int main(){
        x obj1;
        y obj2;
    obj1.show();
    obj2.show(obj1);
    return 0;
}

