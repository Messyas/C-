#include <iostream>

using namespace std;

//alocacao estática
int main() {

// uma variavel do tipo vetor tem o seguinte corpo:
// tipo | nome | tamanho
    int vet[4];
    //exemplo de atribuicao a cada posicao
    vet[0] = 5;
    vet[1] = 10;

    //outra forma de definir um vetor
    int vetor[7] = {10,120,12,12,1,3}; // isso é alocacao estática

    cout << vet[0] << endl;
    cout << vetor[1] << endl;
    
    cout << "[ ";
    for ( int i = 0; i < 7 ; i++) {
        cout << vetor[i] << " "; 
    }
    cout << " ]" << endl;
    //dividindo o tamanho do vetor pelo tipo da sua variavel é possivel obter a quantidade de elementeos daquele vetor
    int x = sizeof(vetor)/sizeof(int);//mostra o tamnho do vertor em bits
    int y = sizeof(int);
    cout << "Tamanho de inteiro:" << y << endl;
    cout << x << endl;
    cout << endl;
    
    return 0;
}