#include<iostream>
using namespace std;

class cal{
    private:
    int a,b,c;

    public:
    void read(){
    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    do {
        cout << "\nSelect the operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulo\n\nEnter your choice: ";
        cin >> c;

        if (c < 1 || c > 5) {
            cout << "Invalid choice! Please re-enter a number from 1 to 5.\n";
        }
    } while (c < 1 || c > 5);
    
    }

    void write(){
        
        int result = 0;
        bool valid = true; // Tracks whether the operation was valid

        switch (c) {
            case 1: 
                result = a + b;
                break;
        
            case 2: 
                result = a - b;
                break;
        
            case 3: 
                result = a * b;
                break;
        
            case 4: 
                if (b != 0) {
                    result = a / b;
                } else {
                    cout << "Error: Division by zero is not allowed!\n";
                    valid = false;
                }
                break;
        
            case 5: 
                if (b != 0) {
                    result = a % b;
                } else {
                    cout << "Error: Modulo by zero is not allowed!\n";
                    valid = false;
                }
                break;

            default:
                cout << "Invalid choice selected!\n";
                valid = false;
                break;
        }

        if (valid) {
            cout << "The result of calculation is: " << result << "\n";
        }
    }
};

int main(){
    
    cal c1;//Decleare the class inder main
    
    cout<<"\tWellcome to the calculator\t\n\n";
    c1.read();

    cout<<"\tProcedding to the write function\t \n\n";
    c1.write();

    return 0;
}