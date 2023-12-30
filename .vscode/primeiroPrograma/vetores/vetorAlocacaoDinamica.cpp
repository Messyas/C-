 
 #include <iostream>

using namespace std;

int main() {

 int tamanho;
    cout << "Digite o tamanho do vetor" << endl;
    cin >> tamanho;

    int* vetor = new int[tamanho];// uso o new int, para que no decorrer da compilacao para que em tempo de execucao possa-se ter o tamanho do vetor e reservar o espaco, alem de poder deletar objetos para disponibiliar memoria para outras situacoes   
    
    for (int i = 1; i < tamanho ; i++) {
         cout << "Digite o elemento  " << i+1 << "do vetor: " << endl; 
         cin >> vetor[i];
    }

    for ( int i = 0 ; i < tamanho; i ++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    //nao preciso mais usar

    delete[] vetor; //libera o espaco de memoria.

    return 0;
}