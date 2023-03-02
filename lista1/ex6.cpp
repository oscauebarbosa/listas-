#include <iostream>

using namespace std;

int main() {
    int num, soma = 0;

    cout << "Digite um numero inteiro de tres digitos: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        soma += num % 10; // soma o último dígito
        num /= 10; // remove o último dígito
        soma += num % 10; // soma o penúltimo dígito
        num /= 10; // remove o penúltimo dígito
        soma += num; // soma o primeiro dígito
        cout << "A soma dos digitos de " << num << " eh: " << soma << endl;
    } else {
        cout << "Numero invalido!" << endl;
    }

    return 0;
}

