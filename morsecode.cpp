#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void main() {
    setlocale(LC_ALL, "Portuguese");
    int tamanho1, traduzir, i, j;
    string frase[100], morset[100],abc[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" }, morse[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

    cout << "Quer traduzir do Morse para Portugues ou Portugues para Morse (1/2)? ";
    cin >> traduzir;

    if (traduzir == 1) {
        cout << "Qual o tamanho da frase: ";
        cin >> tamanho1;
        cout << "Qual a frase: ";
        for (i = 0; i < tamanho1; i++) {
            cin >> frase[i];
        }
        for (i = 0; i < tamanho1; i++) {
            for (j = 0; j < 26; j++) {
                if (frase[i] == abc[j]) {
                    cout << morse[j] << " ";
                }
            }
        }
    }
    else if (traduzir == 2) {
        cout << "Qual o tamanho da frase: ";
        cin >> tamanho1;
        cout << "Qual a frase: ";
        for (i = 0; i < tamanho1; i++) {
            cin >> morset[i];
        }
        for (i = 0; i < tamanho1; i++) {
            for (j = 0; j < 26; j++) {
                if (morset[i] == morse[j]) {
                    cout << abc[j] << " ";
                }
            }
        }
    }
}

