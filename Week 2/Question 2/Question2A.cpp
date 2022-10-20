#include <iostream>

using namespace std;

double weight, pounds;

// Nanti calculate weight in kg to pounds
void calculate(){
    pounds = weight * 2.2;
    cout << "Weight in pounds:" << pounds;
}

int main(){
    cout << "Enter Weight(kg):";
    cin >> weight;
    calculate();
    
}