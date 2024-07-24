/* Faça um programa, utilizando os comandos de C++, que leia dois números e calcule o resto da divisão do primeiro pelo segundo. Escreva o resultado.

Entrada
O código deve ler dois números por meio da função de entrada cin. 



Saída
A saída deve conter o resultado do cálculo impresso pela função de sáida cout. */

#include <iostream>

using namespace std;


// Ler dois números e calcule o resto da divisão do primeiro pelo segundo. 

int main() {

  int numero_1, numero_2;
  
  
  cout << "Informe o primeiro número:";
  cin >> numero_1;

  cout << "Informe o segundo número: ";
  cin >> numero_2;

  // Verifica se o segundo número é zero
  if (numero_2 == 0) {
     cout << "Erro: Divisão por zero não é permitida." << endl;
  }
   else {
     // Calcula o resto da divisão

  int divisao_dos_numeros = numero_1 % numero_2;
     
  cout << "O resto da divisão de " << numero_1 << " por " << numero_2 << " é " << divisao_dos_numeros << endl;
     
   }

  return 0;
}
