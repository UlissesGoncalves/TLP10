#include <iostream>
using namespace std;

void main() {
	int gA[10], gB[10], i, Total[20], j = 0;
	for (i = 0; i < 10; i++) {
		cout << "dame o " << i + 1 << "numero do grupo A: \n";
		cin >> gA[i];
		cout << "dame o " << i + 1 << "numero do grupo B: \n";
		cin >> gB[i];
	}
	for (i = 0; i < 10; i++) {
		Total[i * 2] = gA[i];
		Total[i * 2 + 1] = gB[i];
	}
	for (i = 0; i < 20; i++)
		cout << Total[i] << "\n";
}