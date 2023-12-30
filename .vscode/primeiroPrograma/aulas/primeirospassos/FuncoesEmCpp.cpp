#include <iostream>

using namespace std;
int T = 0; // essa é uma variavel global. isso permite que seu conteudo seja modificavel em quelquer local do programa

//fora das funcoes é possivel definir constantes, elas nao podem ser modificadas 
#define pi 3.14; // esssa constante representa o valor de pi
// constantes sao variaveis imutaveis

// define tambem pode ser usado para atividar uma tarefa 
#define curtir cout << "Sempre que for usado isso aqui é impresso!\n";


//funcao sem retorno que nao espera argumeto
void inscrever(){
 cout << "Essa funcao nao tem retorno\n E simpes de usar \n";
 curtir;//
}

//tipo de saida, noome da funcao e definicao de paremetros
int somar(int &x, int &y) //caso voce queira que tudo que acontece com um valor de um paramento altere tambem a variavel correspodente a ela, basta usar & comoercial
{
    T = 1;
    //variavel local
    int soma;
    soma = x + y;
    x = 20;
    return soma;
}

int main() {
    inscrever();
    int a = 5, b = 5;
    int s;
    s = somar(a,b);
    cout << "soma usando a funcao: " << s << endl;
    cout << T << endl;
    cout << pi;

    return 0;
}