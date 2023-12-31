/*
Crie um algoritmo em c++, em que o usuario informa a dimensao 
de uma matriz, e os elementos de duas matrizes( ambas com a
mesma dimensao) e o algoritmo mostra a soma entre estas duas matrizes.


*/

#include <iostream>

using namespace std;

int main() {
    int linha, coluna;
    int* vetor[linha][coluna];
    cout << "Digite as dimensoes da matriz: [linha] X [coluna]" << endl;
    cin >> linha;
    cin >> coluna;

    for(int l = 0; l < linha; l++) {
        for (int c = 0; c < coluna; c++) {

            cout << "Digite os elementos da matriz" << endl;
            cin >> vetor[l];
            cin >> vetor[c];

        } 
    }

 

    

    return 0;
}