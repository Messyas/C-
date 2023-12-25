/*
Data a funcao f(x) = x2 - 3x + 5

crie um algoritmo em c++, que tenha uma funcao que calcula o valor de f(a), em que a é um numero real informado pelo usuario.
*/

#include <iostream>

using namespace std;

double calcular(double x) {
    double resultado = (x * x) - (3 * x) + 5;
    return resultado;

}

int main() {

    double numero;

    cout << "Digite um numero para ser calculado pela funcao: ";
    cin >> numero;

    double resultado = calcular(numero);

    cout << "O resultado foi:" << resultado << endl;

    return 0;
}