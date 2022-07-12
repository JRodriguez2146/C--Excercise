#include<iostream>
using namespace std;


//method to divide factorials
 double factorialDivide(double* fact1, double* fact2) {


     cout << "The solution to your factorial division is: "<< (*fact1 / *fact2); ;

        return 0;
 }

int main() {

    double number1;
    double number2;
    double factorial = 1.0;
    double factorial2 = 1.0;

    cout<< "Please enter a positive whole number: ";
    cin>>number1;
    cout<< "Please enter another positive whole number: ";
    cin>>number2;

    if(number1 < 0 || number2 < 0) {
        cout<<"Both numbers must be a postive integer.";
    }
    else if(number1 == 0 || number2 == 0) {
        cout<< "Each number has a factorial of 1";
    }
    else {
        for(int i= 1; i <= number1; ++i) {

                factorial *= i;
        }   
        cout<< "The factorial of your number is: "<< factorial<< endl;

        for(int i= 1; i <= number2; ++i) {

                factorial2 *= i;
        }   
        cout<< "The factorial of your second number is: "<< factorial2<< endl;

    }

    factorialDivide(&factorial, &factorial2);

    return 0;

}