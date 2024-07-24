// Escreva um programa para encontrar o menor e o maior número de um array de N posições inteiras. N sempre menor ou igual a 20.

//Entrada:
//O código deve receber a quantidade de elementos no array e em seguida receber esses elementos

//Saída:
//O programa deve fornecer o menor elemento da array e o maior elemento, respectivamente.


#include <iostream>

using namespace std;

int main() {
  int maior, menor, n, i;
  n = 0;
  int array [20];

  cout << "Digite a quantidade de elementos do array:" ;     cin >> n;

  //Recebe os elementos do array
  cout << "Digite os elementos do array: " ; 
    for (i=0; i < n; i++) {
      cin >> array[i];
    }

  //Define o primeiro elemento como maior e o menor

  maior = array[0];
  menor = array[0];

  //Itera sobre o array para encontrar o maior e o menor elemento

  for (i=1; i<n; i++) {
    if (array[i] > maior) {
      maior = array[i];
    }

    if (array[i] < menor) {
      menor = array[i];
    }
  }

  //Imprime o maior e o menor elemento
  cout << "O maior elemento é: " << maior << endl;
  cout << "O menor elemento do array é: " << menor << endl;

  return 0;
  
}
