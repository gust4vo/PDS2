#ifndef BANCO_H
#define BANCO_H

#include "ContaBancaria.hpp"
using namespace std;

struct Banco{
    int num_contas = 0;
    Conta **contas = nullptr;
    
    void inicializaBanco(int n);
    Conta* criaConta(int id, string nome);
    Conta* pesquisa(int id);
};


#endif