#include <iostream>
#include <locale.h>
using namespace std;

void main() {
    setlocale(LC_ALL, "Portuguese");
    char abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char frase[100];
    int deslocamento, letras,i,j,posicao;

    cout << "Quantas letras tem a tua frase? ";
    cin >> letras;
    cout << "quanto é o deslocamento? ";
    cin >> deslocamento;
    cout << "qual é a tua frase: ";
    for (i = 0; i < letras; i++) {
        cin >> frase[i];
    }

    for (i = 0; i < letras; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            for (j = 0; j < 26; j++) {
                if (frase[i] == abc[j]) {
                    posicao = (j + deslocamento) % 26;
                    frase[i] = abc[posicao];
                    break;
                }
            }
        }
        cout << frase[i] << " ";
    }
}
