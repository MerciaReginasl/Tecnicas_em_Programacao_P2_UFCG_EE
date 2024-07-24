// Dado um polígono convexo de n lados, podemos calcular o número de diagonais diferentes nd desse polígono, pela fórmula:

// nd=n(n−3)/2

// Escreva um programa que leia quantos lados tem o polígono e, posteriormente, calcule e mostre a quantidade de diagonais diferentes que o polígono possui.

//Entradas
//A quantidade n de lados do polígono.

//Saídas
//A quantidade de diagonais diferentes que o polígono possui, com uma única casa decimal


#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Digite o número de lados do polígono: ";
  cin >> n;
  
  cout << (n*(n-2)*(n-3))/6 << endl;
  

  return 0;
}
  
