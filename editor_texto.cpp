#include <iostream>
#include <stack>
#include <string>

using namespace std;

class EditorDeTexto {

private:
    stack<string> undoStack;
    stack<string> redoStack;
    string textoAtual;

public:

    EditorDeTexto() : textoAtual("") {}
    void inserirTexto(const string& texto) {
        undoStack.push(textoAtual);
        redoStack = stack<string>(); // Limpa a pilha de refazer
        textoAtual += texto;
        cout << "Texto atual: " << textoAtual << endl;
    }

    void desfazer() {
        if (!undoStack.empty()) {
            redoStack.push(textoAtual);
            textoAtual = undoStack.top();
            undoStack.pop();
            cout << "Texto atual: " << textoAtual << endl;
        } else {
            cout << "Não há ações para desfazer." << endl;
        }
    }

    void refazer() {
        if (!redoStack.empty()) {
            undoStack.push(textoAtual);
            textoAtual = redoStack.top();
            redoStack.pop();
            cout << "Texto atual: " << textoAtual << endl;
        } else {
            cout << "Não há ações para refazer." << endl;
        }
    }
};

int main() {
    EditorDeTexto editor;
    editor.inserirTexto("Deus é Bom!");
    editor.inserirTexto(" - What is your name?");
    editor.inserirTexto("<include>");
    editor.inserirTexto("  :)");
    editor.inserirTexto("Garota do Blog xoxo!");
    editor.desfazer();
    editor.desfazer();
    editor.refazer();
    return 0;
}
