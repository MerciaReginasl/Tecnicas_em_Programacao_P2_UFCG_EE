#include <queue> // Declaração da Biblioteca

int main(){
  
 queue<int> fila;
 fila.push(1);
 fila.push(10);
 fila.push(5);
 cout << "Tamanho: " << fila.size() << endl;
 cout << "Próximo: " << fila.front() << endl;
 fila.pop();
 cout << "Próximo: " << fila.front() << endl;
 cout << "Último: " << fila.back() << endl;
  return 0;
}

// ##########

#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Cria uma fila para armazenar os clientes
    queue<string> filaAtendimento;

    // Adiciona 5 clientes à fila
    filaAtendimento.push("João");
    filaAtendimento.push("Maria");
    filaAtendimento.push("Pedro");
    filaAtendimento.push("Ana");
    filaAtendimento.push("Carlos");

    // Processa o atendimento de cada cliente
    while (!filaAtendimento.empty()) {
        // Imprime o próximo cliente na fila
        cout << "Próximo cliente: " << filaAtendimento.front() << endl;

        // Remove o cliente da fila (simula o atendimento)
        filaAtendimento.pop();
    }

    return 0;
}
