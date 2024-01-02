// cidadebrasil.cpp
#include "cidadebrasil.h"

cidadebrasil::cidadebrasil(int cep, string nomeCidade, string nomeEstado) {
    this->cep = cep;
    this->nomeCidade = nomeCidade;
    this->estadoCidade = nomeEstado;
}

int cidadebrasil::getCep() {
    return cep;
}

void cidadebrasil::setCep(int cep) {
    this->cep = cep;
}

string cidadebrasil::getNomecidade() {
    return nomeCidade;
}

void cidadebrasil::setNomecidade(string nomeCidade) {
    this->nomeCidade = nomeCidade;
}

string cidadebrasil::getEstadocidade() {
    return estadoCidade;
}

void cidadebrasil::setEstadocidade(string estadoCidade) {
    this->estadoCidade = estadoCidade;
}
