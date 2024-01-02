#include <iostream>

using namespace std;

class cidadebrasil{

    private:
    int cep;
    string nomeCidade;
    string estadoCidade;


    public:
    //constructor
    cidadebrasil(int cep, string nomeCidade, string nomeCidade); 

    void getCep();

    int setCep(int cep);

    //nome cid

    void getNomecidade();

    string setNomecidade(string nomeCidade);

    //estadoCidade

    void getEstadocidade();

    string setEstadocidade(string setEstadocidade);


};