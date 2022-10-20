#include <iostream>

using namespace std;

int main(){

    // initialize variables
    double length, width, perimeter, area;

    cout << "Enter length(cm): ";
    cin >> length;
    cin.ignore();
    cout << "Enter width(cm): ";
    cin >> width;

    // Process calculate perimeter dengan area
    perimeter = (length * 2) + (width * 2);
    area = length * width; 

    cout << "Perimeter: " << perimeter << "\n";
    cout << "Area: " << area;
    
}
