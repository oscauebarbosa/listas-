#include <iostream>

using namespace std;

int main() {
    int num, soma = 0;

    cout << "Digite um numero inteiro de tres digitos: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        soma += num % 10; // soma o �ltimo d�gito
        num /= 10; // remove o �ltimo d�gito
        soma += num % 10; // soma o pen�ltimo d�gito
        num /= 10; // remove o pen�ltimo d�gito
        soma += num; // soma o primeiro d�gito
        cout << "A soma dos digitos de " << num << " eh: " << soma << endl;
    } else {
        cout << "Numero invalido!" << endl;
    }

    return 0;
}

