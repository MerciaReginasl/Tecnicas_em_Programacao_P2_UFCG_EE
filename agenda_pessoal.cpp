// Passos para Implementação:

// 1. Definir Estrutura de Dados: Usaremos um vetor de vetores (matriz) onde cada linha representa um dia da semana e as colunas representam os compromissos.

// 2. Função para Agendar Compromisso: Permite ao usuário adicionar um compromisso em um dia da semana escolhido.

// 3. Função para Excluir Compromisso: Permite ao usuário remover um compromisso específico em um dia da semana escolhido.

// 4. Função para Exibir Compromissos: Mostra todos os compromissos agendados para um dia da semana escolhido.

// 5. Menu Principal: Permite ao usuário escolher entre agendar, excluir, ou exibir compromissos, e sair do programa.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int DIAS_DA_SEMANA = 7;
const string dias_semana[DIAS_DA_SEMANA] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};

// Função para mostrar o menu e retornar a opção escolhida pelo usuário
int mostrarMenu() {
    int opcao;
    cout << "\nPlanner Semanal - Escolha uma opção:\n";
    cout << "1. Agendar compromisso\n";
    cout << "2. Excluir compromisso\n";
    cout << "3. Exibir compromissos\n";
    cout << "4. Sair\n";
    cout << "Digite sua opção: ";
    cin >> opcao;
    return opcao;
}

// Função para agendar um compromisso
void agendarCompromisso(vector<vector<string>>& planner, int dia) {
    cin.ignore(); // Limpa o buffer do cin
    cout << "Digite o compromisso a ser agendado para " << dias_semana[dia] << ": ";
    string compromisso;
    getline(cin, compromisso);
    planner[dia].push_back(compromisso);
    cout << "Compromisso agendado com sucesso para " << dias_semana[dia] << ".\n";
}

// Função para excluir um compromisso
void excluirCompromisso(vector<vector<string>>& planner, int dia) {
    if (planner[dia].empty()) {
        cout << "Não há compromissos agendados para " << dias_semana[dia] << ".\n";
        return;
    }

    cout << "Compromissos agendados para " << dias_semana[dia] << ":\n";
    for (int i = 0; i < planner[dia].size(); ++i) {
        cout << i+1 << ". " << planner[dia][i] << "\n";
    }

    int indice;
    cout << "Digite o número do compromisso que deseja excluir: ";
    cin >> indice;
    if (indice >= 1 && indice <= planner[dia].size()) {
        planner[dia].erase(planner[dia].begin() + indice - 1);
        cout << "Compromisso excluído com sucesso.\n";
    } else {
        cout << "Índice inválido.\n";
    }
}

// Função para exibir compromissos de um dia
void exibirCompromissos(const vector<vector<string>>& planner, int dia) {
    cout << "Compromissos agendados para " << dias_semana[dia] << ":\n";
    if (planner[dia].empty()) {
        cout << "Nenhum compromisso agendado.\n";
    } else {
        for (const string& compromisso : planner[dia]) {
            cout << "- " << compromisso << "\n";
        }
    }
}

int main() {
    vector<vector<string>> planner(DIAS_DA_SEMANA);

    while (true) {
        int opcao = mostrarMenu();
        int dia;

        switch (opcao) {
            case 1: // Agendar compromisso
                cout << "Digite o dia da semana (1 a 7, onde 1=Domingo, 2=Segunda-feira, etc.): ";
                cin >> dia;
                if (dia < 1 || dia > DIAS_DA_SEMANA) {
                    cout << "Dia da semana inválido.\n";
                    break;
                }
                agendarCompromisso(planner, dia - 1); // Converte para índice do vetor
                break;
            case 2: // Excluir compromisso
                cout << "Digite o dia da semana (1 a 7, onde 1=Domingo, 2=Segunda-feira, etc.): ";
                cin >> dia;
                if (dia < 1 || dia > DIAS_DA_SEMANA) {
                    cout << "Dia da semana inválido.\n";
                    break;
                }
                excluirCompromisso(planner, dia - 1); // Converte para índice do vetor
                break;
            case 3: // Exibir compromissos
                cout << "Digite o dia da semana (1 a 7, onde 1=Domingo, 2=Segunda-feira, etc.): ";
                cin >> dia;
                if (dia < 1 || dia > DIAS_DA_SEMANA) {
                    cout << "Dia da semana inválido.\n";
                    break;
                }
                exibirCompromissos(planner, dia - 1); // Converte para índice do vetor
                break;
            case 4: // Sair do programa
                cout << "Encerrando o planner semanal. Até mais!\n";
                return 0;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
