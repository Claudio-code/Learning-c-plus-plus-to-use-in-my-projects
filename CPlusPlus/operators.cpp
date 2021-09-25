#include <iostream>

using namespace std;

char conditionalsIf(char agr)
{
    return agr == 'o' ? 'w' : agr;
}

void characters()
{
    char test = 'c';
    string concat = "";
    char value[] = {'h', 'o', 'm', 'e'};
    
    for (char x : value) {
        concat += conditionalsIf(x);
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
