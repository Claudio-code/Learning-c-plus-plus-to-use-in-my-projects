#include <iostream>

using namespace std;

void pass_pointer_with_paramater_passed_with_argument(int* pointer) 
{
    *pointer = 21;
}

void change_value_with_points() 
{
    int variable = 10;
    int* point_variable;

    // init pointer
    point_variable = &variable;

    // change value of pointer
    *point_variable = 20;

    // get value of pointer
    cout << *point_variable << endl;

    cout << variable << endl;

    pass_pointer_with_paramater_passed_with_argument(point_variable);

    cout << variable << endl;
}

void learning_vectors()
{
    int* vector = new int[10];
    int aux[10];

    *(vector + 0) = 12;
    aux[0] = 20;
    aux[1] = 39;
    aux[2] = 19;

    for (size_t i = 0; i < sizeof(aux) / sizeof(int); i++)
    {
        cout << aux[i] << endl;
    }
    
}

void learning_how_works_with_vectors() 
{
    change_value_with_points();
    learning_vectors();
}
