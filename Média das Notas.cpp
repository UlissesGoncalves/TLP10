#include <iostream>
#include <string>
using namespace std;

void main() {
	setlocale(LC_ALL, "Portuguese");
	int i,j, alunos,notas[100][100], disciplina, soma = 0;
	string nomes[100], disciplinas[100];

	
	cout << "quantos alunos tem na turma: ";
	cin >> alunos;

	cout << "quantas disciplinas tem a turma ";
	cin >> disciplina;
	
	for (i = 0; i < alunos; i++) {
		cout << "dame o nome do " << i + 1 << "º aluno ";
		cin >> nomes[i];
	}
	
	for (i = 0; i < disciplina; i++) {
		cout << "qual é a tua " << i + 1 << "º disciplina ";
		cin >> disciplinas[i];
	}
	
	for (i = 0; i < disciplina; i++) {

		for (j = 0; j < alunos; j++) {
			cout << "que nota teve o " << nomes[i] << " em " << disciplinas[j] << ": \n";
			cin >> notas[i][j];
		}
	}
	for (i = 0; i < disciplina; i++) {

		for (j = 0; j < alunos; j++) {
			soma = soma + notas[i][j];
		}
		cout << "a media de " << nomes[i] << " é " << soma / disciplina << "\n";
	}
}