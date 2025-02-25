#include <iostream>
#include <locale.h>
#include <string>
#include <cstdlib>
using namespace std;

void deposito(int saldo) {
    int depo, random;
    cout << "Quanto queres depositar? \n";
    cin >> depo;
    saldo += depo;

    if (depo > 2000) {
        srand(time(0));
        random = rand() % 3 + 1;
        if (random == 1) {
            cout << "Meu Deus!\n";
        }
        if (random == 2) {
            cout << "Rico!\n";
        }
        if (random == 3) {
            cout << "Vais comprar o quê?\n";
        }
    }
    cout << "Saldo atualizado: " << saldo << "\n";
}

void debito(int saldo) {
    int deb;
    cout << "Quanto queres retirar? \n";
    cin >> deb;

    if (deb > saldo) {
        cout << "ERRO: Saldo insuficiente.\n";
    }
    else {
        cout << "Você retirou " << deb << "\n";
        saldo -= deb;
        cout << "Saldo atualizado: " << saldo << "\n";
    }
}

void enviar(int saldo) {
    int env;
    cout << "Quanto queres enviar? \n";
    cin >> env;

    if (env > saldo) {
        cout << "ERRO: Saldo insuficiente.\n";
    }
    else {
        cout << "Você enviou " << env << "\n";
        saldo -= env;
        cout << "Saldo atualizado: " << saldo << "\n";
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Menu, saldo = 1000;

    do {
        cout << "1 - Depósito\n"
            "2 - Débito\n"
            "3 - Verificar Saldo\n"
            "4 - Enviar Dinheiro\n"
            "0 - Sair\n"
            "USER: ";
        cin >> Menu;

        switch (Menu) {
        case 1:
            deposito(saldo);
            break;
        case 2:
            debito(saldo);
            break;
        case 3:
            cout << "O seu saldo é " << saldo << "\n";
            break;
        case 4:
            enviar(saldo);
            break;
        case 0:
            cout << "Saindo...\n";
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
        }
    } while (Menu != 0);

    return 0;
}
