#include<iostream>
#include<iomanip>
using namespace std;


int main() {
//2 dimensional array
float values [2][3] = {
    {1.012, 2.223, 5.025},
    {1.014, 3.223, 5.025555} 
    };
    //loop through 2d array
    for(int row = 0; row < 2; row++) {
        for(int col = 0; col < 4; col++) {
            
            cout<< values[row][col]<< " ";
            
        }
    }

        return 0;
}
