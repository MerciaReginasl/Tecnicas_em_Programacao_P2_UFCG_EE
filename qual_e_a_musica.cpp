#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

struct Musica {
    string titulo;
    string artista;
    int duracao;
    string link;
};

vector<Musica> carregarMusicas(const string& arquivoCsv) {
    vector<Musica> musicas;
    ifstream arquivo(arquivoCsv);
    string linha;

    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        Musica musica;
        getline(ss, musica.titulo, ',');
        getline(ss, musica.artista, ',');
        ss >> musica.duracao;
        ss.ignore(); // Ignorar o caractere de nova linha após o inteiro
        getline(ss, musica.link);
        musicas.push_back(musica);
    }

    return musicas;
}

void registrarTentativa(const string& nomeJogador, const string& mensagem) {
    ofstream arquivo("jogo_" + nomeJogador + ".txt", ios::app);
    arquivo << mensagem << endl;
}

int main() {
    string nomeJogador;
    cout << "Digite o nome do jogador: ";
    getline(cin, nomeJogador);

    vector<Musica> musicas = carregarMusicas("musicas_iniciais.csv");

    if (musicas.empty()) {
        cout << "Nenhuma música carregada." << endl;
        return 1;
    }

    int acertos = 0;
    int erros = 0;

    for (const Musica& musica : musicas) {
        if (acertos >= 3) {
            cout << "VITÓRIA! PARABÉNS!!!!" << endl;
            registrarTentativa(nomeJogador, "VITÓRIA! PARABÉNS!!!!");
            break;
        }
        if (erros >= 3) {
            cout << "VOCÊ FOI DERROTADO..." << endl;
            registrarTentativa(nomeJogador, "VOCÊ FOI DERROTADO...");
            break;
        }

        string resposta;
        cout << "Qual é a música? " << musica.link << " ";
        getline(cin, resposta);

        // Verificar resposta
        if (resposta == musica.titulo) {
            cout << "Resposta correta!" << endl;
            registrarTentativa(nomeJogador, "Resposta correta para: " + musica.titulo);
            acertos++;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
            registrarTentativa(nomeJogador, "Resposta errada para: " + musica.titulo);
            erros++;
        }
    }

    // Se sair do loop sem atingir o objetivo de vitórias ou derrotas
    if (acertos < 3 && erros < 3) {
        cout << "Jogo terminado sem vitória ou derrota final." << endl;
        registrarTentativa(nomeJogador, "Jogo terminado sem vitória ou derrota final.");
    }

    return 0;
}
