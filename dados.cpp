#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dados;
    int valor;

    cout << "Insira os valores dos dados rolados (um valor negativo encerra a entrada):" << endl;

    // Loop para receber valores
    while (true) {
        cout << "Valor do dado: ";
        cin >> valor;

        // Verifica se o valor é negativo
        if (valor < 0) {
            break;
        }

        // Adiciona o valor ao vetor
        dados.push_back(valor);
    }

    // Exibe os valores armazenados
    cout << "Valores dos dados rolados:" << endl;
    for (int i = 0; i < dados.size(); ++i) {
        cout << dados[i] << " ";
    }
    cout << endl;

    return 0;
}
