//ALUNA: MÉRCIA REGINA DA SILVA - MATRICULA: 123210568 - TURMA: 01


//Crie um vetor representando os funcionários de uma empresa. Esse vetor deve conter uma estrutura que armazene: 
// nome do funcionário, CPF, número de horas trabalhadas, valor da hora e salário (use uma struct para isso). 
//Use a estrutura de array para declarar o vetor e um contador para contar o número de funcionários adicionados no vetor.

//(a) Permita ao usuário entrar com os dados de 5 funcionários (nome, CPF, número de horas e valor da hora).

//(b) Calcule o salário de cada funcionário multiplicando o valor da hora pelo número de horas trabalhadas e armazene no campo salário respectivamente.

//(c) Encontre o funcionário com maior salário.

// Entrada
//Valores para Nome, CPF, número de horas e valor da hora de cinco funcionários

//Saída
//Nome do funcionário com o maior salário //

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definindo a estrutura Funcionário
struct Funcionario {
    string nome;
    string cpf;
    int horas_Trabalhadas;
    double valor_Hora;
    double salario;
};

int main() {
    const int NUM_FUNCIONARIOS = 5; // Número de funcionários
    Funcionario funcionarios[NUM_FUNCIONARIOS];
    int contador = 0;

    // Entrada de dados
    for (int i = 0; i < NUM_FUNCIONARIOS; ++i) {
        cout << "Digite os dados do funcionario #" << (i + 1) << ":\n\n";
        
        cout << "Nome: ";
        getline(cin, funcionarios[i].nome);
        
        cout << "CPF: ";
        getline(cin, funcionarios[i].cpf);
        
        cout << "Numero de horas trabalhadas: ";
        cin >> funcionarios[i].horas_Trabalhadas;
        
        cout << "Valor da hora: ";
        cin >> funcionarios[i].valor_Hora;
   
        
        // Calcula o salário
        funcionarios[i].salario = funcionarios[i].horas_Trabalhadas * funcionarios[i].valor_Hora;
        cout << "Salario calculado: " << funcionarios[i].salario << "\n\n";
        
        contador++;
    }

    // Encontrar o funcionário com o maior salário
    Funcionario funcionario_Maior_Salario = funcionarios[0];
    for (int i = 1; i < NUM_FUNCIONARIOS; ++i) {
        if (funcionarios[i].salario > funcionario_Maior_Salario.salario) {
            funcionario_Maior_Salario = funcionarios[i];
        }
    }

    // Exibir os dados do funcionário com o maior salário
    cout << "Funcionario com o maior salario:\n";
    cout << "Nome: " << funcionario_Maior_Salario.nome << "\n";
    cout << "CPF: " << funcionario_Maior_Salario.cpf << "\n";
    cout << "Horas Trabalhadas: " << funcionario_Maior_Salario.horas_Trabalhadas << "\n";
    cout << "Valor da Hora: " << funcionario_Maior_Salario.valor_Hora << "\n";
    cout << "Salario: " << funcionario_Maior_Salario.salario << "\n";

    return 0;
}
