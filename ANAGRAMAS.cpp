#include <iostream>
#include <locale.h>

using namespace std;

void main() {
    setlocale(LC_ALL, "Portuguese");

    int i, j, count = 0, quantas, wordcount1[26] = { 0 }, wordcount2[26] = { 0 };
    char palavra1[100], palavra2[100], abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

    cout << "Quantas letras têm as tuas palavras: ";
    cin >> quantas;
    cout << "Diz-me a tua primeira palavra: ";
    for (i = 0; i < quantas; i++) {
        cin >> palavra1[i];
    }
    cout << "Diz-me a tua segunda palavra: ";
    for (i = 0; i < quantas; i++) {
        cin >> palavra2[i];
    }
    for (i = 0; i < 26; i++) {
        for (j = 0; j < quantas; j++) {
            if (palavra1[j] == abc[i]) {
                wordcount1[i] = wordcount1[i] + 1;
            }
            if (palavra2[j] == abc[i]) {
                wordcount2[i] = wordcount2[i] + 1;
            }
        }
    }
    for (i = 0; i < 26; i++) {
        if (wordcount1[i] == wordcount2[i]) {
            count++;
        }
    }
    if (count == 26) {
        cout << "É um anagrama\n";
    } else cout << "Não é um anagrama\n";
}
