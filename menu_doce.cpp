#include <iostream>
#include <string>

using namespace std;

// Função para exibir o menu
void menu() {
    
    cout << "Menu:\n";
    cout << "1 - Flocos - R$13,00\n";
    cout << "2 - Chocolate - R$11,00\n";
    cout << "3 - Baunilha - R$10,00\n";
    cout << "4 - Napolitano - R$12,00\n";
    cout << "5 - Morango - R$10,00\n";
    cout << "Qualquer outro número para encerrar o programa\n";
    
}

// Função para anotar o pedido
string anotaPedido(string pedidos, int codigo) {
    string itens[] = {"Flocos", "Chocolate", "Baunilha", "Napolitano", "Morango"};
    if (codigo >= 1 && codigo <= 5) {
        if (!pedidos.empty()) {
            pedidos += ", ";
        }
        pedidos += itens[codigo - 1];
    }
    return pedidos;
}

// Função para somar o valor do pedido
double somaPedido(double total, int codigo) {
    double precos[] = {13.00, 11.00, 10.00, 12.00, 10.00};
    if (codigo >= 1 && codigo <= 5) {
        total += precos[codigo - 1];
    }
    
    return total;
    
}

// Função para exibir o pedido final
void exibePedidoFinal(string pedidos, double total) {
    if (pedidos.empty()) {
        cout << "Nenhum pedido realizado. Obrigado e volte sempre!\n";
    } else {
        cout << "Seu pedido: " << pedidos << "\n";
        cout << "Valor total: R$" << total << "\n";
        cout << "Obrigado pelo seu pedido! Volte sempre!\n";
    }
}

int main() {
    string pedidos = "";
    double total = 0.0;
    int codigo;

    menu();

    while (true) {
        cout << "Digite o código do item desejado (ou outro número para encerrar): ";
        cin >> codigo;
        if (codigo < 1 || codigo > 5) {
            break;
        }
        pedidos = anotaPedido(pedidos, codigo);
        total = somaPedido(total, codigo);
    }

    exibePedidoFinal(pedidos, total);

    return 0;
}
