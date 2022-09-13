#include <iostream>
#include <string>

int main () {

    std::string name = "MADA";
    std::string new_name = "";


    for (int i = name.size() - 1; i >= 0; --i){
        new_name += name[i];
    }

    std::cout << new_name;



}