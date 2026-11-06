    // #include <iostream>
    // using namespace std;
    // class student{
    //     string name;
    //     int marks;
    //     public:
    //     student(int m ,string n){
    //     name=n;
    //     marks=m;
    // }
    //     void disp(student s1){
    //         cout<<"details :"<<name<<marks;
    //     }
    // };
    // int main(){
    //     student s1(500,"parul"),s2;
    //     s1.disp();
        
    //     s1.disp(s2);


    //     return 0;
    // }
    #include<iostream>
    using namespace std;
    class Time{
        int hour,mins;
        public:
        Time(int h,int m){
            hour=h;
            mins=m;
        }
        Time(int h){
            hour=h;
            mins=1;
        }
        
        
        void disp(){
            cout<<"the time is  : "<<hour<<" : "<<mins;
        }
        void sum(Time t,Time t1){
            hour=t.hour+t.hour;
            mins=t.mins+t1.mins;

        }
    };
    int main(){
    Time t(5,20);
    t.disp();
    Time t1(5,10);
    t1.disp();
      Time t2(0,0);
    t2.sum(t,t1);
    t2.disp();
        return 0;
    }
    