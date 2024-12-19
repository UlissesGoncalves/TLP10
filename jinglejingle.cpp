#include <iostream>
#include <string>
using namespace std;

void main()
{
    string bluds[22] = { "Abdulah", "Andre", "Andrei", "Clara", "Henrise", "Heros", "Hugo", "Joao", "Leonardo", "Miguel", "Paloma", "Pedro", "Pierre", "Rafael", "Ricardo", "Salvador", "Sartaj", "Tiago", "Tomas", "TomasFilipe", "Tuqeer", "Ulisses" },
        produtos[6] = { "batatasfritas","BoloRei","ParDeMeias","Perfume","chocolatecomginja","pijama" };
    int i, pedir, tabela[100][100], total = 0, totalP = 0, totalT = 0;

    for (int i = 0; i < 22; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "numero de " << produtos[j] << "do " << bluds[i];
            cin >> tabela[j][i];
        }
    }
    for (int i = 0; i < 22; i++)
    {
        total = 0;
        for (int j = 0; j < 6; j++)
        {
            total = total + tabela[j][i];
        }
        cout << "O " << bluds[i] << " trouxe " << total << "\n";
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            totalP = totalP + tabela[j][i];
        }
    }
    cout << "foram trazidos " << totalP << "\n";
    for (int i = 0; i < 6; i++)
    {
        totalT = 0;
        for (int j = 0; j < 22; j++)
        {
            totalT = totalT + tabela[i][j];
        }
        cout << "Há " << totalT << "de " << produtos[i] << "\n";
    }
}