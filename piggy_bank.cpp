#include <iostream>

int main() {
  
  //variable
  double pesos , reais , soles , dollars;
 
  //Question Pesos
  std::cout << "Enter the number of Colombian Pesos:\n";
  std::cin >> pesos;

  //Question Reais
  std::cout << "Enter the number of Brazilian Reais:\n";
  std::cin >> reais;

  //Question
  std::cout << "Enter the number of Peruvian Soles:\n";
  std::cin >> soles;    


  //total dollars
  dollars = (0.049 * pesos) + (0.19 * reais) + (0.26 * soles);

  //Print Output
  std::cout << "US Dollars = $" << dollars << ".\n";









return 0;
  
}














