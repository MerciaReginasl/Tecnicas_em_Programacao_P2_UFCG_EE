#include <iostream>

using namespace std

// Função para ler o conjunto de 10 elementos
void lerConjunto(int conjunto[]) {
  
  cout << "Digite os 10 elementos do conjunto:\n";
  for (int i = 0; i < 10; i++) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> conjunto[i];
    
  }
}
// Função para pesquisar o valor no conjunto
int pesquisarValor(int conjunto[], int valor) {
  for (int i = 0; i < 10; i++) {
    if (conjunto[i] == valor) {
      return i; // Retorna a posição do valor encontrado
    }
  }
  return -1; // Retorna -1 se o valor não for encontrado
}
int main() {
  
  int conjunto[10];
  int valor;
  lerConjunto(conjunto); // Lê o conjunto de elementos
  
  cout << "Digite o valor a ser pesquisado: ";
  cin >> valor;
  int posicao = pesquisarValor(conjunto, valor); 
  
  // Pesquisa o valor
  if (posicao != -1) {
    
    cout << "O valor " << valor << " está presente na posição " << posicao + 1 << " do conjunto.\n";
    
  } else {
    
    cout << "O valor " << valor << " não está presente no conjunto.\n";
    
  }
  
  return 0;
  
}
