#include <iostream>
#include <locale.h>
using namespace std;

void main() {
    setlocale(LC_ALL, "Portuguese");
    int i, letras;
    char palavra[100];

    cout << "Quantas letras tem a tua palavra? ";
    cin >> letras;
    cout << "Diz-me a tua palavra: ";
    for (i = 0; i < letras; i++) {
        cin >> palavra[i];
 
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            cout << palavra[i] << "p" << palavra[i];
        }
    }
}