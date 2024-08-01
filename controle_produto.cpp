//Passos para Implementação:

//1. Definir Estrutura de Dados: Usaremos uma estrutura (struct) para representar cada tipo de produto, contendo seu nome e quantidade disponível.

//2. Função para Cadastrar Produtos: Permitirá ao usuário cadastrar a quantidade inicial de cada tipo de produto.

//3. Função para Atualizar Quantidade: Permitirá ao usuário atualizar a quantidade disponível de um produto específico.

//4. Função para Mostrar Quantidade de Produtos: Exibirá a quantidade atual de cada tipo de produto cadastrado.

#include <iostream>
#include <string>

using namespace std;

// Definição da estrutura para representar um tipo de produto

struct Produto {
    string nome;
    int quantidade;
};

const int NUM_TIPOS_PRODUTOS = 3;
Produto estoque[NUM_TIPOS_PRODUTOS]; // Vetor de produtos

// Função para cadastrar produtos com quantidade inicial
void cadastrarProdutos() {
    for (int i = 0; i < NUM_TIPOS_PRODUTOS; ++i) {
        cout << "Digite o nome do produto " << i+1 << ": ";
        cin >> estoque[i].nome;
        cout << "Digite a quantidade inicial de " << estoque[i].nome << ": ";
        cin >> estoque[i].quantidade;
    }
    cout << "Produtos cadastrados com sucesso.\n";
}

// Função para atualizar a quantidade disponível de um produto
void atualizarQuantidade() {
    string nomeProduto;
    cout << "Digite o nome do produto que deseja atualizar: ";
    cin >> nomeProduto;

    bool encontrado = false;
    for (int i = 0; i < NUM_TIPOS_PRODUTOS; ++i) {
        if (estoque[i].nome == nomeProduto) {
            cout << "Digite a nova quantidade de " << nomeProduto << ": ";
            cin >> estoque[i].quantidade;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Produto não encontrado.\n";
    } else {
        cout << "Quantidade atualizada com sucesso.\n";
    }
}

// Função para mostrar a quantidade de produtos disponíveis
void mostrarQuantidadeProdutos() {
    cout << "\nQuantidade de Produtos Disponíveis:\n";
    for (int i = 0; i < NUM_TIPOS_PRODUTOS; ++i) {
        cout << estoque[i].nome << ": " << estoque[i].quantidade << "\n";
    }
}

int main() {
    // Inicialização dos produtos
    estoque[0].nome = "Peixe";
    estoque[1].nome = "Carne";
    estoque[2].nome = "Frango";

    int opcao;

    while (true) {
        cout << "\nControle de Estoque de Açougue\n";
        cout << "1. Cadastrar Produtos\n";
        cout << "2. Atualizar Quantidade\n";
        cout << "3. Mostrar Quantidade de Produtos\n";
        cout << "4. Sair\n";
        cout << "Digite sua opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarProdutos();
                break;
            case 2:
                atualizarQuantidade();
                break;
            case 3:
                mostrarQuantidadeProdutos();
                break;
            case 4:
                cout << "Encerrando o programa de controle de estoque. Até mais!\n";
                return 0;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
