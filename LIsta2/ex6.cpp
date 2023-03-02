#include <iostream>

using namespace std;

int main() {
    int numero, termo_atual = 1, termo_anterior = 0, proximo_termo;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Sequência de Fibonacci até o " << numero << "º termo: ";

    // Exibe os termos da sequência de Fibonacci até o enésimo termo
    for (int i = 1; i <= numero; i++) {
        cout << termo_atual << " ";

        proximo_termo = termo_atual + termo_anterior;
        termo_anterior = termo_atual;
        termo_atual = proximo_termo;
    }

    cout << endl;

    return 0;
}

