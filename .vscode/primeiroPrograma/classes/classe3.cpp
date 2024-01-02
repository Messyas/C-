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

int main() {

    carro fusca(1989,30.000,90.0000);

    cout << "Fusca: \n";
    cout << "Ano: " << fusca.getano() << endl;    
    cout << "Valor: " << fusca.getValor() << endl;    
    cout << "Kms: " << fusca.getKm() << endl; 

    
    return 0;
}

//colocando o nome da classe e :: antes no nome da funcao 
//é possivel sobrescrever os metodos da classe carro
   carro::carro(int ano = 0, float valor = -1, float km = -1) {
         this->ano = ano;
         this->valor = valor;
         this->km = km;
    }

    //ano
     void carro::setano(int a) {
       this->ano = ano;
     }

     int carro::getano() {
        return ano;
     }

     //valor
     void carro::setValor(float valor){
        this->valor = valor;
     }

     float carro::getValor() {
        return valor;
     }

     //KM

     void carro::setKm(float km) {
        this-> km = km;
     }

     float carro::getKm() {
        return km;
     }

