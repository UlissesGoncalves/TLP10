#include <iostream>
using namespace std;

void main() {
	int alunos[2][30], i;
	for (i = 0; i < 30 ; i++) {
		cout << "dame a idade do aluno" << i + 1 << ": ";
		cin >> alunos[0][i];
		cout << "dame a altura do aluno" << i + 1 << ": ";
		cin >> alunos[1][i];
	}
	double media=0;
	for (i = 0; i < 30; i++) {
		media = media+alunos[1][i];
	}
	media = media / 30;
	cout << "a media de altura dos alunos e " << media << "\n";
	for (i = 0; i < 30; i++) {
		if (alunos[0][i] >= 13 && alunos[1][i]<media) {
			cout << "este aluno com " << alunos[0][i] << " anos e abaixo da media\n";
		}
	}
	
}