#include <iostream>
#include <cstddef>

using namespace std;

int main() {
    int var1;
    int* pont1;
    var1 = 5;
    pont1 = &var1;

    cout << "valor da variavel atraves do seu nome: "<< var1 << endl;
    cout << "Endereco armazenado no ponteiro: " << pont1 << endl;
    cout << "valor da variavel atravas do ponteiro: " << *pont1 << endl;
    
    int var2;
    //var2 = var1;
    //var2 = *pont1;
   // cout << var2;

    //var1 = 30;
  //*pont1 = 30;
  //  cout << var1;

    //var2 = 50;
   // pont1 = &var2;
    //cout << *pont1 << endl;
    //cout << var1;

    //int* pont2;
    //pont2 = NULL;
    //cout << *pont2;

    int* pont3 = new int;// declara o ponteiro e ja declara o novo espaco da variavel
    *pont3 = 35;
    //cout << *pont3;

   // *pont3 = *pont1;
   delete pont3;
    pont3 = pont1;
    cout << *pont3;


    return 0;
}