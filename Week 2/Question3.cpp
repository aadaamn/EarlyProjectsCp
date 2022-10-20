#include <iostream>

using namespace std;

int main() {

    // Variables 
    double depth, celsius, fahrenheit;


    // Getting info from the user - adam buat serious no cap
    cout << "Enter the depth of the earth in kilometers: ";
    cin >> depth;

    // Calculate the celcius and fahrenheit
    celsius = (10 * depth) + 20;
    fahrenheit = (1.8 * celsius) + 32;

    cout << "\nTemperature in celcius: " << celsius;
    cout << "\nTemperature in fahrenheit: " << fahrenheit;


}