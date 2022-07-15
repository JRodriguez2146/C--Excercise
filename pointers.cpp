#include<iostream>
using namespace std;


//method to accept integer pointer and print it the console
void printNumber(int* numberPtr) {
    cout<<  *numberPtr <<endl;
}
//method to accept multiple types of pointers and print the result to the console
void print(void* Ptr, char type) {
    switch(type) {
        case 'i': cout<< *((int*)Ptr)<<endl; break;  //handle int*
        case 'c': cout<< *((char*)Ptr)<<endl; break; //handle char*
    }
}

int main() {

    int number = 5;
    char letter = 'z';

    printNumber(&number);
    print(&number, 'i');
    print(&letter, 'c');


    int numberSet[5];

    for(int i=0; i <= 4; i++) {
    cout<< "Number: ";
    cin>> numberSet[i];
    }

    for(int i=0; i <= 4; i++) {
        //print out dereferenced array
        cout<< *(numberSet+i)<< " ";

    }
    return 0;
}