#include<iostream>
#include "variableDeclaration.cpp"

void helloWord()
{
    std::cout << "Hello World \n";
    std::cout << "the brave new word" << std::endl;
}

int main()
{
    helloWord();
    std::cout << variableDeclaration();
}
