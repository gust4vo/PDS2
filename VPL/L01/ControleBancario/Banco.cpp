#include "Banco.hpp"

void Banco::inicializaBanco(int n){
    contas = new Conta*[n];
    for(int i=0; i<n; i++) contas[i] = nullptr;
}

Conta* Banco::criaConta(int id, string nome){
    for(int i=0; i<num_contas; i++){
        if(contas[i]->id == id) return nullptr;
    }

    Conta* aux = new Conta();

    aux->nome = nome;
    aux-> id = id;
    
    contas[num_contas] = aux;
    num_contas++;

    return aux;
}

Conta* Banco::pesquisa(int id){
    for(int i=0; i<num_contas; i++){
        if(contas[i]->id == id) return contas[i]; 
    }
    return nullptr;
}

