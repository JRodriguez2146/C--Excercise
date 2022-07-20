#include<iostream>
using namespace std;


int main() {

int number = 0;

cout << "Please enter an integer: ";
cin >> number;

switch(number) {
    
    case 1: cout << "Got 1";
    break;
    case 21: cout << "Got 21";
    break;
    case 66: cout << "Got 66";
    break;
    default: cout << "Got something else.";
}


}


