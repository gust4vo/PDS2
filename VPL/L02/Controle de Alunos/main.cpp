#include "aluno.hpp"
#include <set>
#include <iomanip>
#include <iostream>

struct cmp{
    bool operator() (const Aluno *a, const Aluno *b) const{
        return a->nome < b->nome;
    }
};

int main(){
    std::set <Aluno*, cmp> alunos;

    std::string nome; getline(std::cin, nome);

    while(nome != "END"){
        int num_matricula; std::cin >> num_matricula;
        
        Aluno *a = new Aluno(nome, num_matricula);
    
        int nota; std::cin >> nota;
        
        while(nota != -1){
            a->notas.push_back(nota);
            std::cin >> nota;
        }

        std::cin.ignore();
        
        alunos.insert(a);

        getline(std::cin, nome);
    }



    for(Aluno* a: alunos){
        std::cout << a->num_matricula << ' ' << a->nome << ' ';
        for(int n: a->notas) std::cout << n << ' '; 
        std::cout << std::endl << std::fixed << std::setprecision(2) << a->media() << ' ' << a->nota_max() << std::endl;

        delete a;
    }

}