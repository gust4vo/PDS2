#include "ContaBancaria.hpp"

void Conta::deposito(float n){
    saldo += n;
}

void Conta::saque(float n){
    if(saldo >= n) saldo -= n;
    else cout << "Saldo insuficiente" << endl;
}

void Conta::pix(Conta *c, float n){
    if(saldo >= n){
        saldo -= n;
        c->saldo += n;
    }
    else cout << "Saldo insuficiente" << endl;
}

void Conta::imprime(){
    cout << id << ' ' << nome << ' ' << fixed << setprecision(2) << saldo << endl;
}