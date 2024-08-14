#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

struct Musica {
    std::string titulo;
    std::string artista;
    int duracao;   // duração em segundos
    std::string link;
};

    std::vector<Musica> carregarMusicas(const std::string &musicas_iniciais.csv) {
    std::vector<Musica> musicas;
    std::ifstream file(musicas_iniciais.csv);
    std::string linha;

    if (!file.is_open()) {
        std::cerr << "Não foi possível abrir o arquivo: " << musicas_iniciais.csv << std::endl;
        return musicas;
    }

    // Ignora a primeira linha (cabeçalho)
    std::getline(file, linha);

    while (std::getline(file, linha)) {
        if (musicas.size() >= 20) break;

        std::stringstream ss(linha);
        std::string titulo, artista, duracao_str, link;
        int duracao;

        std::getline(ss, titulo, ',');
        std::getline(ss, artista, ',');
        std::getline(ss, duracao_str, ',');
        std::getline(ss, link, ',');

        duracao = std::stoi(duracao_str);

        Musica musica = {titulo, artista, duracao, link};
        musicas.push_back(musica);
    }

    file.close();
    return musicas;
}

void jogar(const std::string& nomeJogador, const std::vector<Musica>& musicas){
    int acertos = 0;
    int erros = 0;

    std::ofstream arquivoSaida("jogo_" + nomeJogador + ".txt");

    if (!arquivoSaida.is_open()) {
        std::cerr << "Não foi possível criar o arquivo de log do jogo." << std::endl;
        return;
    }

    for (const auto& musica : musicas) {
        std::string resposta;

        while (erros < 3) {
            std::cout << "Qual é a música? " << musica.link << std::endl;
            std::getline(std::cin, resposta);

            // Registro da tentativa no arquivo de log
            arquivoSaida << "Resposta: " << resposta << std::endl;

            // Normaliza a resposta e o título para comparação (ignorando case sensitivity)
            std::string respostaNormalizada = resposta;
            std::string tituloNormalizado = musica.titulo;

            std::transform(respostaNormalizada.begin(), respostaNormalizada.end(), respostaNormalizada.begin(), ::tolower);
            std::transform(tituloNormalizado.begin(), tituloNormalizado.end(), tituloNormalizado.begin(), ::tolower);

            if (respostaNormalizada == tituloNormalizado) {
                acertos++;
                std::cout << "Acertou!" << std::endl;
                break;
            } else {
                erros++;
                std::cout << "Errou! Tentativa " << erros << " de 3." << std::endl;
            }

            if (erros == 3) {
                std::cout << "VOCÊ FOI DERROTADO..." << std::endl;
                arquivoSaida << "Jogo encerrado: DERROTA" << std::endl;
                arquivoSaida.close();
                return;
            }
        }

        if (acertos == 3) {
            std::cout << "VITÓRIA! PARABÉNS!!!!" << std::endl;
            arquivoSaida << "Jogo encerrado: VITÓRIA" << std::endl;
            arquivoSaida.close();
            return;
        }

        // Reseta os erros para a próxima música
        erros = 0;
    }

    arquivoSaida.close();
}

int main() {
    std::string nomeJogador;
    std::cout << "Digite o nome do jogador: ";
    std::getline(std::cin, nomeJogador);

    std::vector<Musica> musicas = carregarMusicas("musicas_iniciais.csv");

    if (musicas.empty()) {
        std::cerr << "Nenhuma música foi carregada. O jogo não pode iniciar." << std::endl;
        return 1;
    }

    jogar(nomeJogador, musicas);

    return 0;
}


