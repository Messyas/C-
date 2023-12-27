#include <iostream>
#include <cstddef>

using namespace std;

int main() {
   
   string nome = "Messyas";
   string *Pnome;

   Pnome = &nome;
   cout << "A variavel nome contem: \n" << nome << endl << " O ponteiro Pnome esta no endereco: \n" << Pnome << endl << " Agora o ponteiro recebe acesso ao conteudo da variavel nome: \n" << *Pnome;


    return 0;
}