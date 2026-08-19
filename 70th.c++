 #include<iostream>
 using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
        
    };

    void disp(){
            cout<<"value of a and b is : "<<a<<b;
        }
};
 int main(){

complex c1(2,3);
c1.disp();
    return 0;
 }