#include <iostream>

using namespace std;

// variables
double hours, total_fee;

//kira total fees ikut hours
void fees() {
    total_fee = hours * 105;
    cout << "Total tuition fee: RM" << total_fee; 
}

int main() {
    cout << "How many hours that you enrolled ?\n";
    cin >> hours;
    fees();

}
