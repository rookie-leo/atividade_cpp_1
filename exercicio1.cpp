#include <iostream>
#include <string>
using namespace std;

string txt1;
string txt2;

bool letra_existe(char entrada, string txt) {
    for (char letra : txt) {
        if (entrada == letra) {
            return true;
        }
    }

    return false;
}

int main() {
    cout << "Digite uma palavra: ";
    cin >> txt1;

    cout << "Digite outra palavra: ";
    cin >> txt2;

    for (char entrada : txt1) {
        if (letra_existe(entrada, txt2)) {
            cout << "Há letras em comum" <<endl;
        } else {
            cout << "Não há letras em comum" <<endl;
        }
    }

}