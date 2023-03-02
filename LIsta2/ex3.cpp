#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    // Verifica se cada n�mero de 2 at� o n�mero digitado � primo
    for (int i = 2; i <= numero; i++) {
        bool primo = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            cout << i << endl;
        }
    }

    return 0;
}
