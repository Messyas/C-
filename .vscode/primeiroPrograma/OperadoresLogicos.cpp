#include <iostream>

using namespace std;

int main() {

    float nota1;
    float nota2;
    int freq;

    cout << "Informa a nota 1: \n";
    cin >> nota1;

    cout << "Informe a nota 2: \n";
    cin >> nota2;

    float media = (nota1 + nota2)/2;

   if(media >= 0 && media < 2.5) {
    cout << "Nota final: D\n";
   } else if (media < 5) {
    cout << "Nota final: C\n";
   } else if (media < 7.5) {
    cout << "Nota final: B\n";
   } else {
    cout << "Nota final: A\n";
   }
   cout << "Qual e a frequencia do aluno? \n";
   cin >> freq;
    // esse operador logico é o ou, entao se a media for menor que 5 ou a frequencia for menor que 75, o aluno sera reprovado, senao sera aprovado!
   //if (media < 5 || freq < 75) {
  //  cout << "Aluno Reprovado \n" ; 
  // } else {
   //     cout << "Aluno aprovado \n";
  // }

   /*if (media >= 5 && freq >=75) {
    cout << "Aluno aprovado! \n";
   } else {
    cout << "Aluno reprovado! \n";
   }*/

   //operaqdor Ternario
   (media >= 5 && freq > 75) ? cout << "Aprovado" : cout << "Reprovado";


    return 0;
}