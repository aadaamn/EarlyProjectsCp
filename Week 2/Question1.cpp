#include <iostream>

using namespace std;

int main() {

    double a,b,c,d,total,average;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "Enter the fourth number: ";
    cin >> d;

    total = a + b + c + d;
    average = total/4;

    cout << "\n Total:" << total;
    cout << "\n Average:" << average;

}