#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Digite dois numeros inteiros: ";
    cin >> num1 >> num2;

    cout << "Escolha a operacao a ser realizada (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Erro: divisao por zero!" << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Operacao invalida!" << endl;
            break;
    }

    return 0;
}

