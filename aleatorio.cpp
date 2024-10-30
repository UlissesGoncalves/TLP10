#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void main()
{
	
		srand(time(0));
	int n = rand() % 101;
	int u;

	do {
		cout << "advinha um numero entre 1 e 100\n";
		cin >> u;

		if (u < n)
			cout << "o numero e maior\n";
		
		if (u > n)  
			cout << "o numero e menor\n";
		if (u = n);
		cout << "acertas-te em ";

		} while (u != n);

	}