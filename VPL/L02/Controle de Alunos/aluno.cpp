#include "aluno.hpp"

double Aluno::media(){
    double soma = 0.0;
    for(int n: notas) soma += n;

    return soma/notas.size();
}

int Aluno::nota_max(){
    int maximo = -1;
    for(int n: notas) if(n > maximo) maximo = n;

    return maximo;
}

Aluno::Aluno(std::string &nome, int &num_matricula){
    this->nome = nome;
    this->num_matricula = num_matricula;
}