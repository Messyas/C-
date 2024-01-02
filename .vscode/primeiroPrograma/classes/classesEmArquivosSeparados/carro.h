#include <iostream>

using namespace std;

class carro{
    private:

    int ano;
    float valor;
    float km;

    public:
     //constructor
     carro(int ano, float valor, float km);

     void setano(int a);

     int getano();

     void setValor(float valor);

     float getValor();

     void setKm(float km);

     float getKm();
};