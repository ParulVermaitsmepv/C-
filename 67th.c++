#include<iostream>
using namespace std;
class bts{
    private:
    int a=10;
    int b=20;
  public:
  int x=a;
  int y=b;
};
void tae();
int main(){

   tae();
    return 0;
}
void tae(){
    bts bt;

    int sum=bt.x+bt.y;
    cout<<"sum= "<<sum;
}