#include <iostream>
using namespace std;

void main() {
	double n1, n2, first, decimal1, second, decimal2;

	cin >> first;
	cin >> decimal1;
	cin >> second;
	cin >> decimal2;

	decimal1 = decimal1 / 10;
	decimal2 = decimal2 / 10;
	n1 = first + decimal1;
	n2 = second + decimal2;
	if (n1 == n2 && n2 > 36.9)
	{
		cout << "FEBRE MANTEVE";
	}
	else	if (n1 > n2 && n2 >= 36.99 && n1 >= 36.99)
	{
		cout << "FEBRE BAIXO";
	}
	else if (n1 < n2 && n2 >= 36.99 && n1 >= 36.99)
	{
		cout << "FEBRE SUBIO";
	}
	if (n2 < 36.99)
	{
		cout << "NORMAL";
	}
}