/*
 Crie um algoritmo em c++, em que o usuario informe os gastos com
  com alimentacao de 5 familias, calcula a media de gastos e diz
  de cada familias, se seu gasto é baixo da media, acima da media
  ou na media.
*/

#include <iostream>

using namespace std;

int main() {

  const int numFamilias = 5;

  double gastos[numFamilias];//array que recebe as familias
  double totalGastos = 0;

  for(int i = 0; i < numFamilias; i++) {
    cout << "Difite os gastos mensais da sua familias " << i + 1 << ": ";
    cin >> gastos[i];
    totalGastos += gastos[i];
  }

  //calcular media
  double media = totalGastos / numFamilias;

  cout << "A media de gastos das familas e: " << media << endl;

  //classificar cada familias
  for (int i = 0; i < numFamilias; i++) {
      if (gastos[i] < media)
      {
        cout << "Familia " << i + 1 << ": Gasto abaixo da media." << endl;
      } else if (gastos[i] > media)
      {
        cout << "Familia " << i + 1 << ": Gasto acima da media" << endl;
      } else {
          cout << "Familia " << i + 1 << ": Gasto na media" << endl;
      }
      
      
  }
    return 0;
}