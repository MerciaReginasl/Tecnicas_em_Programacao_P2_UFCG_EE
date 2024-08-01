#include <iostream>
#include <algorithm> // Para a função reverse

using namespace std;

bool ehPalindromo(int numero) {
  // Converte o inteiro para uma string
  string strNumero = to_string(numero);
  // Cria uma cópia da string e inverte
  string strInvertida = strNumero;
  reverse(strInvertida.begin(), strInvertida.end());
  // Compara as strings original e invertida
  return strNumero == strInvertida;
}

int main() {
  
  int numero;
  cout << "Digite vários números inteiros positivos (0 ou negativo para parar):\n";
  while (true) {
    cin >> numero;
    if (numero <= 0) {
      break; // Encerra o loop se o número for 0 ou negativo
    }
    
    if (ehPalindromo(numero)) {
      cout << numero << " é um palíndromo.\n";
    } else {
      cout << numero << " não é um palíndromo.\n";
    }
  }
  
  return 0;
  
}
