#include <iostream>

using namespace std;

class carro{
    private:

    int ano;
    float valor;
    float km;

    public:

    //Funcao construtor
    //basicamente inicializa o objeto com alguns atributos pre atribuidos de forma padrao
    //ela nao tem retorno e tem o mesmo nome da classe
    carro(int ano = 0, float valor = -1, float km = -1) {//essa funcao é chamada automaticamente na criacao de um objeto(instancia da classe)
         this->ano = ano;
         this->valor = valor;
         this->km = km;
    }

    //get end set
     //get é usado para obter o valor contido em uma variavel de um objeto

     //set é usado para atribuir um valor a uma variavel(atributo) de um objeto

     void setano(int a) {
        ano = a;
        //this->ano = ano; //ser usado dessa forma quando o paramento da funcao tiver o mesmo nome do atributo
     }

     int getano() {
        return ano;
     }

     //valor
     void setValor(float valor){
        this->valor = valor;
     }

     float getValor() {
        return valor;
     }

     //KM

     void setKm(float km) {
        this-> km = km;
     }

     float getKm() {
        return km;
     }

};

int main() {

    carro palio;
    palio.setano(1995);
    palio.setValor(15.000);
    palio.setKm(80.090);

    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;    
    cout << "Valor: " << palio.getValor() << endl;    
    cout << "Kms: " << palio.getKm() << endl;    

    cout << endl;

    carro mercedes;
    mercedes.setano(2000);
    mercedes.setValor(700.000);
    mercedes.setKm(19.000);
    cout << "Mercedes: \n";
    cout << "Ano: " << mercedes.getano() << endl;    
    cout << "Valor: " << mercedes.getValor() << endl;    
    cout << "Kms: " << mercedes.getKm() << endl;  

     cout << endl;

      //uso do construtor  

      //dessa forma nao é necessario usar set diretamente, somente se quiser trocar o valor em outro momento
    carro fusca(1989,30.000,90.0000);

    cout << "Fusca: \n";
    cout << "Ano: " << fusca.getano() << endl;    
    cout << "Valor: " << fusca.getValor() << endl;    
    cout << "Kms: " << fusca.getKm() << endl; 
  
    return 0;
}