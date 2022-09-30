#include <iostream>
#include "name.hpp"
#include <string>

using namespace std;

// Class Biiodata
// Get information from the user name, age, dream job, motto
void Biodata::getInfo(){
    //ask about name
    cout << "What is your name?\n";
    getline(cin,name);
    //ask about age
    cout << "How old are you?\n";
    cin >> age;
    cin.ignore();
    //ask about dream job
    cout << "What is your dream job when you graduate?\n";
    getline(cin,dream_job);
    //ask about the motto of life
    cout << "What is your life motto?\n";
    getline(cin,motto);
    //ask about BMI
    cout << "Enter your weight(Kg): ";
    cin >> weight;
    cout << "Enter your height(cm): ";
    cin >> height;
}

// Showcasing the user's biodata
void Biodata::displayInfo(){
    //display all details asked in getInfo
    cout << "\n\nName: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Dream Job: " << dream_job << "\n";
    cout << "Life Motto: " << motto << "\n";
    bmi(weight, height);
    cout << "\n";
    palindrome();
    cout << "\n";
    

}

// Checks kalau palindrome ke tak
void Biodata::palindrome(){
    string new_name = "";

    for(int i = name.size()-1; i >= 0; i--){
        new_name += name[i];
    }
    if (new_name == name){
        cout << "Palindrome Status : Yes\n";
    }
    else{
        cout << "Palindrome Status : No\n";
    }
}

// kira bmi and calling this function in  display info
void Biodata::bmi(double weight, double height){
    // The data dapat from getInfo function
    double height_2 = (height/100) * (height/100);
    double calculate = weight / height_2;

    if(calculate < 18.5){
        cout << "Bmi : Underweight";
    }
    else if (calculate >= 18.5 && calculate <= 24.9 ){
        cout << "Bmi : Normal";
    }
    else if (calculate >= 25.0 && calculate <= 29.9 ){
        cout << "Bmi : Overweight";
    }
    else {
        cout << "Bmi : Obersity";
    }
}


// Class Quiz
void MathQuiz::Question(){
  
    // Question 1
    cout << "What is 1+1\n";
    cin >> answer;
    if (answer == 2){
        count.push_back(1);
    } 
    else{
        count.push_back(0);
    } 
    // Question 2
    cout << "What is 2 / 2\n";
    cin >> answer;
    if (answer == 1){
        count.push_back(1);
    }
    else{
        count.push_back(0);
    } 
    // Question 3
    cout << "What is 10 * 1\n";
    cin >> answer;
    if (answer == 10){
        count.push_back(1);
    }
    else{
        count.push_back(0);
    } 
    // Question 4
    cout << "What is 100 / 20\n";
    cin >> answer;
    cin.ignore();
    if (answer == 5){
        count.push_back(1);
    }
    else{
        count.push_back(0);
    } 
    // Question 5
    cout << "What is 1+1\n";
    cin >> answer;
    if (answer == 2){
        count.push_back(1);
    }
    else{
        count.push_back(0);
    } 
    // for loop to add every vector index value in a variable -adam
    for (int i = 0; i < count.size(); i++){
    result = result + count[i];
    } 
    average = result / 5 ;
    percentage = average * 100;
    cout << percentage << "%\n";
}
