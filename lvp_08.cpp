#include <iostream>
#include <string>

using namespace std;

class Pessoa {
protected:
    string nome;
    string cpf;
    string telefone;

public:
    Pessoa(string nome, string cpf, string telefone) 
        : nome(nome), cpf(cpf), telefone(telefone) {}

    virtual void imprimirDados() = 0; // Método virtual puro
};

class Funcionario : public Pessoa {
private:
    string registro;
    string senha;
    double salario;

public:
    Funcionario(string nome, string cpf, string telefone, 
                string registro, string senha, double salario) 
        : Pessoa(nome, cpf, telefone), registro(registro), senha(senha), salario(salario) {}

    void imprimirDados() override {
        cout << "=== Dados do Funcionário ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
        cout << "Telefone: " << telefone << endl;
        cout << "Número de Registro: " << registro << endl;
        cout << "Salário: R$ " << salario << endl;
    }

    bool verificarSenha(string senhaDigitada) {
        return senhaDigitada == senha;
    }
};

class Cliente : public Pessoa {
private:
    string produto;
    double valor;

public:
    Cliente(string nome, string cpf, string telefone) 
        : Pessoa(nome, cpf, telefone), produto(""), valor(0.0) {}

    void atualizarCompra(string produto, double valor) {
        this->produto = produto;
        this->valor = valor;
    }

    void imprimirDados() override {
        cout << "=== Dados do Cliente ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
        cout << "Telefone: " << telefone << endl;
        cout << "Produto Escolhido: " << produto << endl;
        cout << "Valor: R$ " << valor << endl;
    }
};

int main() {
    // Criar um funcionário
    Funcionario funcionario("Carlos Silva", "123.456.789-00", "11-98765-4321", 
                            "001", "senha123", 3000.00);

    // Criar um cliente
    Cliente cliente("Maria Oliveira", "987.654.321-00", "21-91234-5678");

    // Simulação de acesso ao sistema
    char acesso;
    cout << "Você é um funcionário ou cliente? (f/c): ";
    cin >> acesso;

    if (acesso == 'f') {
        string senhaDigitada;
        cout << "Digite sua senha: ";
        cin >> senhaDigitada;

        if (funcionario.verificarSenha(senhaDigitada)) {
            funcionario.imprimirDados();
        } else {
            cout << "Senha incorreta!" << endl;
        }

    } else if (acesso == 'c') {
        cout << "Escolha um produto:" << endl;
        cout << "1: Produto A - R$ 100.00" << endl;
        cout << "2: Produto B - R$ 150.00" << endl;
        cout << "3: Produto C - R$ 200.00" << endl;

        int escolha;
        cout << "Digite o número do produto escolhido: ";
        cin >> escolha;

        string produtoEscolhido;
        double valorEscolhido = 0.0;

        switch (escolha) {
            case 1:
                produtoEscolhido = "Produto A";
                valorEscolhido = 100.00;
                break;
            case 2:
                produtoEscolhido = "Produto B";
                valorEscolhido = 150.00;
                break;
            case 3:
                produtoEscolhido = "Produto C";
                valorEscolhido = 200.00;
                break;
            default:
                cout << "Produto inválido!" << endl;
                return 0;
        }

        cliente.atualizarCompra(produtoEscolhido, valorEscolhido);
        cliente.imprimirDados();
    } else {
        cout << "Opção inválida!" << endl;
    }

    return 0;
}
