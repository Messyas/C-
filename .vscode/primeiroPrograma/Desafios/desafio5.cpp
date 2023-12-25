/*
Desafio: 05
  em um programa de moradia popular, somente pessoas maiores de 21 anos
e com renda abaixo de 1200 conto podem participar.

crie um algoritmo em que o usuario informe sua idade e renda, e é 
informado se ele pode ou nao participar desse programa.
*/

#include <iostream>
using namespace std;

int main() {
    string resposta;
    int idade;
    double renda;

    while (true) {
        cout << "Digite a sua idade: \n";
        cin >> idade;

        cout << "Digite a sua Renda: \n";
        cin >> renda;

// se a idade for maior e a renda for menor que 1200
        if (idade > 21 && renda < 1200.00) {
            cout << "Voce pode participar do programa \n";
        } else {
            cout << "Dados invalidos. ";
        }

        cout << "Deseja verificar outro ser humano? (s||n) \n";
        cin >> resposta;

        if (resposta != "s") {
            break;  // Sair do loop se a resposta não for "s"
        }
    }

    return 0;
}
