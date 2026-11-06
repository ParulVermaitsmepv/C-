#include <iostream>
#include <ctime>
using namespace std;

int main() {

    time_t start = time(0);

    cout << "Hello World\n";

    time_t end = time(0);

    double difference = difftime(end, start);

    cout << "Time taken = " << difference << " seconds";

    return 0;
}