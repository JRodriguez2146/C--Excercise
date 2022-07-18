#include<iostream>
using namespace std;




int main() {

    int input1 = 10;
    int input2 = 10;

    for(int i = 1; i <= input1; i++) {
        for(int x = 1; x <= input2; x++) {

            cout << i << " * " << x << " = " << i * x << endl;
        }
        cout << endl;
    }
    return 0;
}