/* Faça um programa que leia dois números e um texto (string) contendo o símbolo de um operador aritmético (“+”, “-”, “*” ou “/”), */
/* referente a adição, subtração, multiplicação ou divisão, respectivamente, e mostre o resultado da operação correspondente aplicada aos valores lidos. */
/* As operações só serão realizadas com um operador válido e a divisão só será realizada se o quociente for diferente de zero.

Entrada

Dois números reais, seguidos do símbolo (texto) da operação aritmética (“+”, “-”, “*” ou “/”), todos em linhas separadas, como nos exemplos.

Saída 

A mensagem: “Resultados da operação =”, sendo que “operação” será “adição”, “subtração”, “multiplicação ou divisão”, seguida do resultado calculado ou as mensagens: 
"Operador inválido!" ou "Divisão por zero inválida!"  (veja os exemplos).*/

/*____________________________________________________________________________________________________*/

#include <iostream>

using namespace std;

int main() {
  int num_1, num_12;
  string operador;
  cout<<"Informe o primeiro numero: " ; cin >> num_1;
  cout <<"Informe o segundo numero: " ; cin >> num_2;
  cout <<"Informe o operador (+, -, * ou /): " ; cin >> operador;
  
  if (operador ++ "+");
  cout << num_1 + num_2;

  if (operador ++ "-");
  cout << num_1 - num_2;

  if (operador ++ "*");
  cout << num_1 * num_2;

  if (operador ++ "/");
  cout << num_1 / num_2;
