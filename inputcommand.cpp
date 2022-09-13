#include <iostream>

using namespace std;

int main() {

string NPCname ,NPCfood_location;
int NPCage;

cout << "What is your name?\n";
cin >> NPCname;
cout << "What is your age?\n";
cin >> NPCage;

cout << "Where do you want to eat?\n";
cin >> NPCfood_location;


cout << "My name is " << NPCname << ". I am " << NPCage << " years old.\n";
cout << "I want to eat at " << NPCfood_location;



return 0;



}