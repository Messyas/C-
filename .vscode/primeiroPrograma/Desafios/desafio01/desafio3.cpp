/*
Desafio: 03
crie um Algoritmo em c++, que tenha uma funcao que calcula 
o fatorial de um numero inteiro positivo,
informado pelo usuario.
*/

#include <iostream>

using namespace std;

int fatorial (int numero){
    int resultado = 1;
    for(int i = 1; i <= numero; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {

    int numero, resultado;
 
    cout << "Digite um valor para obter o fatorial \n";
    cin >> numero;

    resultado = fatorial(numero);

    cout << "O FATORIAL DO NUMERO " << numero << " E " << resultado << endl;

    return 0;
}