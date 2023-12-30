/*
Desafio: 02
Crie um algoritmo em C++, em que o usuario informa as notas de 
tres provas de um determinado aluno e tambem a media de nota da
turma toda. O algoritmo deve calcular a media deste aluno e 
informar se sua nota é acioma da media, abaixo da media ou 
esta na media.

*/

#include <iostream>

using namespace std;

int main() {

    float nota1, nota2, nota3;
    float mediaNotaAluno; 
    float mediaTurma;


    cout << "Digite a primeira nota do aluno\n";
    cin >> nota1;

    cout << "Digite a segunda nota do aluno\n";
    cin >> nota2;

    cout << "Digite a terceira nota do aluno\n";
    cin >> nota3;


    mediaNotaAluno = (nota1 + nota2 + nota3)/3;


    cout << "Digite a media da turma\n";
    cin >> mediaTurma;

    if(mediaNotaAluno < mediaTurma) {
        cout << "Sua nota esta abaixo da media da turma \n";
    } else if (mediaNotaAluno == mediaTurma) {
        cout << "Sua nota e igual a media da turma \n";
    } else if (mediaNotaAluno > mediaTurma) {
        cout << "Sua nota esta acima da media da turma! \n";
    }

    return 0;
}