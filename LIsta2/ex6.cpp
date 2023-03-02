#include <iostream>

using namespace std;

int main() {
    int numero, termo_atual = 1, termo_anterior = 0, proximo_termo;

    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    cout << "Sequ�ncia de Fibonacci at� o " << numero << "� termo: ";

    // Exibe os termos da sequ�ncia de Fibonacci at� o en�simo termo
    for (int i = 1; i <= numero; i++) {
        cout << termo_atual << " ";

        proximo_termo = termo_atual + termo_anterior;
        termo_anterior = termo_atual;
        termo_atual = proximo_termo;
    }

    cout << endl;

    return 0;
}

