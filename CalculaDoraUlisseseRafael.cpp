#include <iostream>
using namespace std;

void main()

{
	char c;
	int n1,n2,r;

	cout << "dame um numero\n";
	cin >> n1;
	cout << "dame outro numero\n";
	cin >> n2;
	cout << "seleciona a tua escolha + - * ou / \n ";
	cin >> c;
	switch (c)
	{
	case '+':
		r = n1 + n2;
			cout << "somar\n" << r;
		break;
	case '/':
		r = n1 / n2;
		cout << "dividir\n" << r;
		break;
	
	case '*':
		r = n1 * n2;
		cout << "multiplicao\n" << r;
		break;

	case '-':
		r = n1 - n2;
		cout << "subtracao\n" << r;
		break;
	}


	
}



