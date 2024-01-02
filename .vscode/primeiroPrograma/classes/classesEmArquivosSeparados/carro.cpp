 #include <iostream>
 #include "carro.h"

 using namespace std;

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

