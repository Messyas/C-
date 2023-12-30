#include <iostream>

using namespace std;

int main(){
    // uma variavel tem o seguinte corpo de declaracao:
    // o tipo: Int
    // o nome da variavel
    // em seguida pode-se atribuir um valor
    int inteiro = 5;

    int inteiro2;
    inteiro2 = 2;
    cout << inteiro << endl;

    float real;
    real = 1.12;
    cout << real << endl;

    double realMaiores;
    realMaiores = 5.2e99;
    cout << realMaiores << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    //char representa uma letra , nao é possivel atribuir algo mais complexo como uma palabra qualquer no caso a seguir
    char letra; 
    letra = 'b';
    cout << letra << endl;

    //para trabalhar com comjuntos de texto o ideal é usar String
    string palavra; 
    palavra = "Bola";
    cout << palavra << endl;

    //para se ler  dados
    int idade;
    cout << "Qual a sua idade?" << endl;
    cin >> idade; //cin é o comando que permite atribuir uma valor digitado a uma variavel
    cout << "idade: " << idade << endl;


    return 0;
}