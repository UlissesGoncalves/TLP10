#include <iostream>
#include <string>
#include <locale.h>
int somar(int n1, int n2, int resultado) {
	resultado = n1 + n2;
	return resultado;
}
int subtrair(int n1, int n2, int resultado) {
	resultado = n1 - n2;
	return resultado;
}
int dividir(int n1, int n2, int resultado) {
	resultado = n1 / n2;
	return resultado;
}
int multiplicar(int n1, int n2, int resultado) {
	resultado = n1* n2;
	return resultado;
}
void main() {		
		int n1, n2, operação, resultado = 0;
		using namespace std;
		setlocale(LC_ALL, "Portuguese");
		do {
		cout << "dame o 1º numero \nUSER: ";
		cin >> n1;
		cout << "dame o 2º numero \nUSER: ";
		cin >> n2;
		cout << "que operação pretende usar?\n1 - Somar\n2 - Subtrair\n3 - Dividir\n4 - Multiplicar\n0 - Sair\nUSER: ";
		cin >> operação;
		switch (operação) {
		case 1:
			cout << "Resultado: " << somar(n1, n2, resultado) << "\n";
			break;
		case 2:
			cout << "Resultado: " << subtrair(n1, n2, resultado) << "\n";
			break;
		case 3:
			cout << "Resultado: " << dividir(n1, n2, resultado) << "\n";
			break;
		case 4:
			cout << "Resultado: " << multiplicar(n1, n2, resultado) << "\n";
			break;
		case 0:
			cout << "A Sair...";
			break;
		}
	} while (operação != 0);
}