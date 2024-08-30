#include <iostream>
#include <set>
using namespace std;
int main() {
    // Declaração do conjunto de frutas
    set<string> frutas;
    // Adição de frutas ao conjunto (não permite duplicatas)
    frutas.insert("Maçã");
    frutas.insert("Banana");
    frutas.insert("Uva");
    frutas.insert("Laranja");
    frutas.insert("Maçã"); // Tentativa de inserir duplicata, ignorada
    // Impressão das frutas no conjunto
    cout << "Frutas no conjunto:" << endl;
    for (const string& fruta : frutas) {
        cout << fruta << " ";
    }
    cout << endl;
    // Remoção de uma fruta do conjunto
    frutas.erase("Banana");
    // Impressão das frutas no conjunto após a remoção
    cout << "Frutas no conjunto após a remoção da Banana:" << endl;
    for (const string& fruta : frutas) {
        cout << fruta << " ";
    }
    cout << endl;
    return 0;
}
