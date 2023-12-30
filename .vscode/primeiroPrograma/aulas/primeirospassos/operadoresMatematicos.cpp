#include <iostream>
#include <math.h>


using namespace std;

int main() {

    int a = 5, b = 4  ;
    int soma = a + b;
    cout << "Soma: " << soma << endl;

    //ou faca a operacoa direto na impressao do codigo
    cout << "Soma: " << a + b << endl;

    cout << "subtracaoL:  " << a - b << endl;

    cout << "Multiplicao: " << a * b << endl;

    // obtem o cociente da divicao
    int quocdiv = a / b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    // mostra o resto da divisao
    int restodiv = a%b;
    cout << "Resto da divisao: " << restodiv << endl;

    //representar dicisao de nao inteiros
    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;


    // biblioteca para calculos matematicos
    float pot = pow(a,b);
    cout << "Potencia: " << pot << endl;

    //Incremento e Decremento

    cout << "a antigo" << a << endl;
    a = a+1;
    //essas sao outras formas de fazer incremento
    //ou
    //a+=3; adiciona mais 3 a variavel
    //a++

    //para decremento
    // a = a - 1;
    // a -= 4; subtrai 4 do valor atual
    // a--; retira 1 do valor atual

    //multiplicao tambem funciona
    a*=2; // o valor contido na variavel a sera multiplicado por 2
    cout << "a novo: " << a << endl;

    


    return 0;
}
