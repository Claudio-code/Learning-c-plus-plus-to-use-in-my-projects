#include<iostream>

using namespace std;

void constants() {
    // vectors constants
    const int vet[] = {1, 2, 3};

    // appoint vector value to constant
    const int* p1 = &vet[0];
    int const* p2 = &vet[1];
    int* const p3 = new int[3];
    
    // string constant
    const char* const p4 = "claudio";

    cout << "*p1 = " << p1 << endl;
    cout << "*p2 = " << p2 << endl;

    // added value in one node of constant vector
    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;
    
    cout << "*p3: " << endl;
    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl;
}
