#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
#include<ctime>
#include<fstream>


using namespace std;
int main(){
    vector<string> numbers;
numbers.push_back("main");
numbers.push_back("sdfd10");
numbers.push_back("20");
numbers.push_back("30");

cout << numbers[0]<<endl;
cout << numbers[1]<<endl;
cout << numbers[2]<<endl;

map <string,string>re;
re["hi"]="parul";
re["name"]="shanu";
re["is"]="kashu";
re["much"]="kim";
re["more"]="tae";
string input;
cout<<"you";
cin>>input;
cout<<"Bot: "<<re[input]<<endl;
   
      ifstream file("student.txt");

    string data;
    while (getline(file, data)) {
        cout << data << endl;
    }

    file.close();
   
    ifstream file2("tae.txt");
 

    string lip;
      cout << "Enter name: ";
    cin >> lip;
    cout<<lip;

    file2.close();
  ofstream file3("stu.txt");
  file3<< "hello girl whats your name my name is bolly oh god damm"<<endl;
  file3<< "name is just some letters";
  file3.close();

ifstream readFile("stu.txt");

string data3;

while (getline(readFile, data3)) {
    cout << data3 << endl;
}

readFile.close();

int x[]={10,20,30,40,50};
auto y =count(x,x+6,30);
if(x!=x+6){
    cout<<y;
}
int arr[] = {10, 30, 20, 30, 40, 30};

int result = count(arr, arr + 6, 30);

cout << result;
int a[] = {10, 50, 20, 80, 30};

cout << *max_element(a, a + 5);
cout << *min_element(arr, arr + 5);
int b[]={10,20,10,20,30,30,30};
replace(b,b+7,10,88);
for(int i=0;i<7;i++){
    cout<<b[i]<<"  "<<endl;
}
int d= 10, z = 20;
cout << d << " " << z<<endl;
swap(d, z);

cout << d << " " << z<<endl;
time_t t=time(0);
cout<<ctime(&t);

clock_t start = clock();

// your code

clock_t end = clock();

cout << end - start;
    return 0;
}