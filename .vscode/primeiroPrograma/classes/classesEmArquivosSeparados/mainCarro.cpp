#include <iostream>
#include "carro.h"

using namespace std;

int main() {

    carro fusca(1989,30.000,90.0000);

    cout << "Fusca: \n";
    cout << "Ano: " << fusca.getano() << endl;    
    cout << "Valor: " << fusca.getValor() << endl;    
    cout << "Kms: " << fusca.getKm() << endl; 
  

    system("pause");
    return 0 ;
}