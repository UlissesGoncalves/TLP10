#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1;
	do
	{
		cout << "dame um n�mero ";
		cin >> n1;
		if (n1 == 0) {
			break;
		}
		if (n1 % 3 == 0 && n1 % 5 == 0) {
			cout << "o teu n�mero � m�ltiplo de 3 e 5 \n";
		}
		else if (n1 % 5 == 0) {
			cout << "o teu n�mero � m�ltiplo de 5 \n";
		}
		else if (n1 % 3 == 0) {
			cout << "o teu n�mero � m�ltiplo de 3 \n";
		}
		else {
			cout << "o teu n�mero n�o � m�ltiplo de 3 ou 5 \n";
		}
	} while (n1 != 0);
	cout << "ERRO";
}
