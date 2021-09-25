#include <iostream>

using namespace std;

void characters()
{
    char test = 'c';
    string concat = "";
    char value[] = {'h', 'o', 'm', 'e'};
    
    for (char x : value) {
        concat += x;
    }

    cout << concat + test + "\n";
}

void operators()
{
    int valueOne, valueTwo;
    double result;
    valueOne = 20;
    valueTwo = 33;
    result = (double) valueOne / valueTwo;
    
    cout << result;
}
