#include <iostream>
using namespace std;

// Address structure
struct Address
{
    int houseNo;
    string locality;
    string city;
    string state;
    int pin;
};

// Patient structure
struct Patient
{
    int id;
    string name;
    string dis;
    int age;
    Address add;
};

int main()
{
    // Create a Patient object
    Patient p1;

    // Patient details
    p1.id = 101;
    p1.name = "Parul";
    p1.age = 20;
    p1.dis = "Nothing";

    // Address details
    p1.add.houseNo = 1234;
    p1.add.locality = "Solan";
    p1.add.city = "Shimla";
    p1.add.state = "Himachal Pradesh";
    p1.add.pin = 173212;

    // Display Patient Details
    cout << "------------------------" ;
    cout << " \n     Patient Details" << endl;
    cout << "------------------------" << endl;
    cout << "ID        : " << p1.id << endl;
    cout << "Name      : " << p1.name << endl;
    cout << "Age       : " << p1.age << endl;
    cout << "Disease   : " << p1.dis << endl<< endl;
    cout << "------------------------" ;
    cout << "\n     Address Details" << endl;
    cout << "------------------------" << endl;
    cout << "House No. : " << p1.add.houseNo << endl;
    cout << "Locality  : " << p1.add.locality << endl;
    cout << "City      : " << p1.add.city << endl;
    cout << "State     : " << p1.add.state << endl;
    cout << "PIN Code  : " << p1.add.pin << endl;

    return 0;
}