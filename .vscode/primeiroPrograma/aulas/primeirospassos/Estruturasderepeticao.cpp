#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Diga um numero inteiro nao negativo: \n" ;
    cin >> n;

    int soma = 0;
    int cont=1;
   /*/ while (cont <= n) {
        soma+=cont;
        cont++;
    }
    //break

    cout << "Soma dos numeros de 0 ate" << n << "= " << soma << endl;
    */
/*
//nesse caso a operacao é feita e depois a condicao é verificada
   do {
     soma+=cont;
     cont++;
   } while( cont <= n);
*/

for (int j = 1 ; j <= n; j+=1) {
    soma += j;
}

/*
No caso de estruturas de repeticao, caso nao se use {} somente a linha abaixo da condicao sera executada
for (int i = 0 ; i <= n; i++) 
    soma += i;*/

return 0;
}