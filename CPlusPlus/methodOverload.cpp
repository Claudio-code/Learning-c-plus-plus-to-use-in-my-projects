#include <iostream>

using namespace std;

void message(int numeric) {
    cout << "\nnumeric value: " << numeric << endl;
}

void message() {
    cout << "\nmethod overload" << endl;
}

void message(char letter) {
    cout << "\ncharacter: " << letter << endl;
}

void message(string value) {
    cout << "\nstring value: " << value << endl;
}

void methodOverload() {
    message(12);
    message();
    message('t');
    message("dqw");
}
