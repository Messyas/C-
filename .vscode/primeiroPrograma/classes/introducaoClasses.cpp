/*
 Uma classe é uma colecao de atributos e metodos que um objeto pode ter
*/

#include <iostream>

using namespace std;

class propaganda { 
    private: 

    public:

    void inscrever() {
         cout << "Se increva no canal do Messyas!" << endl;
    }

    void curta() {
        cout << "Curta esse video e ative o sininho!" << endl;
    }
};

int main() {
    propaganda canal;
    canal.inscrever();
    canal.curta();

  
    return 0;
}