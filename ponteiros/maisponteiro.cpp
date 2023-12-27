#include <iostream>
#include <cstddef>

using namespace std;

int main() {
   
    string nome;
    int idade;
    //pointers
    string* Pnome;
    int* Pidade;

    cout << "Digite o seu nome: " << endl;
    cin >> nome;

    cout << "Digite a sua idade: " << endl;
    cin >> idade;

    *Pnome = nome;
    *Pidade = idade;

    cout << "O seu nome é" << *Pnome << endl;

    cout << "Sua idade é " << *Pidade << endl;


    return 0;
}