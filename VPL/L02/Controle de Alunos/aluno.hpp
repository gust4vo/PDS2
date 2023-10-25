#include <vector>
#include <string>

struct Aluno{
    std::string nome;
    int num_matricula;
    std::vector<int> notas;

    double media();
    int nota_max();
    Aluno(std::string &nome, int &num_matricula);
};