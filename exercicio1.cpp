#include <iostream>
#include <string>
#include <vector>
using namespace std;

string txt1;
string txt2;
vector<char> letras_comum;

void verifica_letra(char entrada, string txt) {
    for (char letra : txt) {
        if (entrada == letra) {
            letras_comum.push_back(letra);
        }
    }
}

bool letra_existe(vector<char> letras_comum) {
    return letras_comum.size() > 0;
}

int main() {
    cout << "Digite uma palavra: ";
    cin >> txt1;

    cout << "Digite outra palavra: ";
    cin >> txt2;

    for (char entrada : txt1) {
        verifica_letra(entrada, txt2);
    }

    if (letra_existe(letras_comum)) {
        cout << "Há letras em comum" <<endl;
        for (char l : letras_comum) {
            cout << l << " - ";
        }
    } else {
        cout << "Não há letras em comum" <<endl;
    }

}