#include <utility>

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>

using namespace std;
// Estrutura para representar um aluno
struct Aluno {
  string nome;
  vector<float> notas;
};
// Função para calcular a média de um aluno
float calcularMedia(const Aluno& aluno) {
  float soma = 0;
  for (float nota : aluno.notas) {
    soma += nota;
  }
  return soma / aluno.notas.size();
}
// Função para imprimir as notas de um aluno
void imprimirNotas(const Aluno& aluno) {
  cout << "Nome: " << aluno.nome << endl;
  cout << "Notas: ";
  for (float nota : aluno.notas) {
    cout << nota << " ";
  }
  cout << endl;
  cout << "Média: " << calcularMedia(aluno) << endl;
}
int main() {
  // Cria um vetor de alunos
  vector<Aluno> alunos;
  // Adiciona alunos ao vetor
  alunos.push_back({"João", {7.5, 8.0, 9.0}});
  alunos.push_back({"Maria", {6.0, 7.0, 8.0}});
  alunos.push_back({"Pedro", {9.5, 10.0, 9.0}});
  // Imprime as notas de cada aluno
  for (const Aluno& aluno : alunos) {
    imprimirNotas(aluno);
    cout << endl;
  }
  return 0;
}
