#include <iostream>
#include "cidadebrasil"

using namespace std;

int main() {

    cidadebrasil manaus(200000, "manaus", "Amazonas");

    cout << "Cep: " << manaus.getCep << endl;
    cout << "Cidade: " << manaus.getNomecidade << endl;
    cout << "Estado: " << manaus.getEstadocidade << endl;


    system("pause");
    return 0;

}