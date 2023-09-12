#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

struct Conta{
    int id; 
    float saldo=0;
    string nome;

    void deposito(float n);
    void saque(float n);
    void pix(Conta *c, float n);
    void imprime();
};

#endif
