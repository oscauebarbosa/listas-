#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "Os divisores de " << num << " sao: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
