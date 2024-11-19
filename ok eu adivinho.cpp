#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void main() 

{	
int n1, n2;
	    
	srand(time(0));
	n1 = rand() % 100 + 1;
	do
	{
		cout << "qual numero e?";
		cin >> n2;

		if (n2 > n1)
			cout << "o numero que escolhi e menor que \n" ;

		if (n2 < n1)
			cout << "o numero que escolhi e maior que \n" ;

	} while (n2 != n1);
		cout << "acertaste";
}