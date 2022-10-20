#include <iostream>
#include <math.h>

using namespace std;

void calculate() {
    /*  T - final temperature
    time - time yang belum convert
    t - time yang dah convert
    */ 
    double T, time, t;

    cout << "Enter time in minutes: ";
    cin >> time;  

    t = time / 60;
    T = ((4 * (t*t)) / (t + 2)) - 20;   

    cout << "\nTemperature in a freezer: " << T << "'C";

}


int main() {
    calculate();

}