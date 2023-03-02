#include <iostream>

using namespace std;

int main() {
    int num, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    while (num != 0) {
        soma += num % 10; // soma o último dígito
        num /= 10; // remove o último dígito
    }

    cout << "A soma dos digitos de " << num << " eh: " << soma << endl;

    return 0;
}
