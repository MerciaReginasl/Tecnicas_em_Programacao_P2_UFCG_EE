#include <iostream>

using namespace std;
  int main() {
    int numero, somaPares = 0, somaImpares = 0;
    for (int i = 0; i < 10; i++) {
      std::cout << "Digite um inteiro positivo: ";
      std::cin >> numero;
      if (numero % 2 == 0) {
        somaPares += numero;
      } else {
        somaImpares += numero;
      }
    }
    std::cout << "Soma dos números pares: " << somaPares << std::endl;
    std::cout << "Soma dos números ímpares: " << somaImpares << std::endl;
    return 0;
    
}
