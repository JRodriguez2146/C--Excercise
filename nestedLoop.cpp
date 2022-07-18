#include<iostream>
using namespace std;



int main() {

int points;
int sum = 0;



for(int z = 0; z < 3; z++) {

    do {
        cout<<"Enter points #" << z + 1 << endl;
        cin>> points;

        } while (points < 1 || points > 21);

        sum += points;

        cout<< "Sum = "<< sum << endl;
        cout<< "Average points = "<< (float)points / 3.0 << endl;
}
    return 0;
}