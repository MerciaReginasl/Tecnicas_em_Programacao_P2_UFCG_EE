#include <iostream>

using namespace std;

int main() {
  float notas [10];
  int i = 0;
  float soma = 0;
  float media_notas;

  cout << "Informe as notas dos alunos (valor negativo para parar): "; 
  cin >> notas [i];

  while (notas [i] >= 0 && i < 10) {
    soma += notas [i];
    i++;
    if (i < 10){
      cin >> notas [i];
    }
  }

  media_notas = soma / i;
  cout << "Média das notas: " << media_notas << endl;
  cout << "Notas abaixo da média: " << endl;

  for (int j = 0; j < i; j++) {
    if (notas [j] < media_notas) {
      cout << notas [j] << endl;
    }  
  }

  return 0;
}
