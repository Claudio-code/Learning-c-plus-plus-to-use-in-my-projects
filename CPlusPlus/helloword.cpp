#include<iostream>
#include "variableDeclaration.cpp"
#include "operators.cpp"
#include "methodOverload.cpp"
#include "points.cpp"
#include "constantsDeclarations.cpp"

void helloWord()
{
    std::cout << "Hello World \n";
    std::cout << "the brave new word" << std::endl;
}

int main()
{
    helloWord();
    std::cout << variableDeclaration(232) << std::endl;
    characters();
    operators();
    methodOverload();
    learning_how_works_with_vectors();
    constants();
}
