#include <iostream>

using namespace std;

int main() {

    int num1, num2;
    double quotient,reminder;

    cout << "Enter the divident: ";
    cin >> num1;
    cout << "Enter the divisor: ";
    cin >> num2;

    quotient = num1 / num2;
    reminder = num1 % num2;

    cout << "\n\nThe quotient would be: " << quotient;
    cout << "\nThe reminder would be: " << reminder;



    
}