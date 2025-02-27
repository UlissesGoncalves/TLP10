#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int i,j,Quantidade[5][12];
string comida[5] = { "Batatas", "Cenouras", "Couves", "Alfaces", "Brócolos" };
string meses[12] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };

void mensal() {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			cout << "em " << meses[j] << " compraste " << Quantidade[i][j] << " " << comida[i] << "\n";
		}
	}
}
void anual() {
	int anual=0;
	for (i = 0; i < 5; i++) {
		anual = 0;
		for (j = 0; j < 3; j++) {
			anual += Quantidade[i][j];
		}
		cout << "este ano comeste " << anual << " " << comida[i] << "\n";
	}
}
void inserir() {
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 5; i++) {
			cout << "quantos / as " << comida[i] << " compraste em " << meses[j] << "\nUSER: ";
			cin >> Quantidade[i][j];
		}
	}
}

void main() {
	setlocale(LC_ALL, "Portuguese");
	int Menu,i,j;
	
	do {
		cout << "1 - Calcular totais mensais​\n2 - Calcular totais produtos\n3 - Inserir valores\nUSER:";
		cin >> Menu;
		switch (Menu) {
		case 1:
			mensal();
			break;
		case 2:
			anual();
			break;
		case 3:
			inserir();
			break;
		} 
	} while (Menu != 0);
}