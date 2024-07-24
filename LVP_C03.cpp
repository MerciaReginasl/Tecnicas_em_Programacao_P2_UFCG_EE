/* Faça um programa que leia um número inteiro positivo e o mostre com os seus dígitos invertidos. 
   Para isso, o programa usa uma função inverte_digitos(), que recebe um inteiro positivo e retorna outro inteiro positivo formado pelos dígitos do inteiro recebido porém, 
   na ordem inversa.

Entradas

Um número inteiro positivo.

Saídas

O número inteiro positivo com seus dígitos invertidos. */

#include <iostream>

using namespace std;

// Função que inverte os dígitos de um número inteiro positivo
int inverter_digitos(int num) {
    int inverso = 0;

    while (num > 0) {
        int digito = num % 10;  // Extrai o dígito mais à direita
        inverso = inverso * 10 + digito;  // Adiciona o dígito ao número inverso
        num /= 10;  // Remove o dígito mais à direita do número original
    }

    return inverso;
}

int main() {
    int numero;

    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verifica se o número é positivo
    if (numero < 0) {
        cout << "Por favor, digite um número inteiro positivo." << endl;
    } 

    else {
        int num_invertido = inverter_digitos(numero);
        cout << "Número invertido: " << num_invertido << endl;
    }

    return 0;
}
