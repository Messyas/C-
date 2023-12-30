/*
Desafio: 04
Crie um algoritmo em c++, que calcula a potencia B elevado a e, 
em que o usuario informa um numero real B e um numero natural 
E. Nesse algoritmo, sempre que é informado o resultado da potencia,
é perguntado ao usuario, se este deseja calcular outra potencia.
*/

#include <iostream>

using namespace std;

// Função para calcular a potência
int potencia(int b, int e) {
    int resultado = 1;
    //itera sobre a quantidade de vezes que a base deve ser multiplicada, equanto i for menor que o expoete, i recebera 1 a iteracao, permitindo que a operacao ocorra enquanto nao chegar ao valor do expoente
    for (int i = 0; i < e; i++) {
        resultado *= b;
    }

    return resultado;
}

int main() {
    char resposta;

    do {
        int base, expoente, resultado;

        cout << "Informe a base da potencia: ";
        cin >> base;

        cout << "Informe o expoente da potencia: ";
        cin >> expoente;

        // Calcular a potência usando a função potencia
        resultado = potencia(base, expoente);

        // Exibir o resultado
        cout << "O resultado da potencia de " << base << " elevado a " << expoente << " e: " << resultado << endl;

        // Perguntar se o usuário deseja fazer outra operação
        cout << "Deseja fazer outra operacao? (s/n): ";
        cin >> resposta;

    } while (resposta == 's' || resposta == 'S');

    return 0;
}
