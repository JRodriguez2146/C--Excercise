#include<iostream>
using namespace std;


//calculate the BMI of a user
int main() {
    
    float weight;
    float height;
    float bmi = weight/(height*height);

    cout<< "Please enter your weight in pounds.";
    cin>> weight;
    cout<< "Please enter your height in inches.";
    cin>> height;

    if(bmi < 18.5) {
        cout<< "Jesus your thin! Go eat something!";
    }
    else if(bmi == 18.5 && bmi <= 25) {
        cout<< "Your body mass index is within range. Keep up the good work!";
    }
    else {
        cout<< "You are a bit on the heavy side, buddy.";
    }

    return 0;
} 
