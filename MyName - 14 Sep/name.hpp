#ifndef NAME_HPP
#define NAME_HPP
#include <string>
#include <vector>
using namespace std;

class Biodata{

    // variables
    string name , dream_job, motto;
    double weight, height;
    int age;

public:
    
    // Functions
    void getInfo();
    void displayInfo();
    void palindrome();
    void bmi(double weight ,double height);
 
}; 

void Question();

class MathQuiz {

    

    public:
    // Variables
    int answer;
    vector<int>count = {};
    double average,result,percentage;

    // MathQuiz in once + result
    void Question();

    
  
};


#endif