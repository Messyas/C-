#include <iostream>

using namespace std;

int main() {
   
   //uma matriz é um array bidimensional

// [2] linha [3] Colunas
   int matriz[2][3];

   matriz[0][0] = 11;// linha 1 coluna 1
   matriz[0][1] = 12;//linha 1 coluba 2
   matriz[0][2] = 13;//linha 1 coluna 3

   matriz[1][0] = 21;//linha 2 coluna 1
   matriz[1][1] = 22;// linha 2 coluna 2
   matriz[1][2] = 23;//linha 2 coluna 3

//tem que comecar do Zero, pois é um vetor 
// sera iterado ate que a contagem atinja o tamnho das linhas do array
   for (int i = 0; i < 2; i++) {
    //o primeiro for é para as linhas
    // ja o segundo imprime todos os elementos contidos na 
    for (int j; j < 3; j++){
        cout << matriz[i][j] << " "; 

    }
    cout << endl;
   }

    return 0;
}