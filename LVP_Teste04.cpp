//Faça um programa que leia a hora, minuto e segundo e dê o resultado em segundos. Escreva uma função para fazer os cálculos.

//ENTRADAS
//hora, minutos, segundos

//Saídas
//segundos

#include <iostream>

using namespace std;

int main() {

  float hora, minutos, segundos;
  float resultado;

  cout << "Digite a hora: " ;
  cin << hora;

  cout << "Digite os minutos: " ;
  cin << minutos;

  cout << "Digite os segundos: " ;
  cin << segundos;

  resultado = (hora * 3600) + (minutos * 60) + segundos;

  cout << "O resultado em segundos é: " << resultado << endl;

  return 0;

}
