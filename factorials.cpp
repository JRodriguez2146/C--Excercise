#include<iostream>
using namespace std;

int main() {

    int number1;
    int factorial = 1;
    

    cout<< "Please enter a positive whole number: ";
    cin>>number1;
    

    if(number1 < 0) {
        cout<<"Your number must be a postive integer.";
    }
    else if(number1 == 0) {
        cout<< "1";
    }
    else {
        for(int i= 1; i <= number1; ++i) {

                factorial *= i;
        }   
        cout<< "The factorial of your number is: "<<factorial<< endl;
    }

    return 0;
}