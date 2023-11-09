#include "Campeonato.hpp"

Campeonato::~Campeonato() {
    for(Treinador* t : treinadores) delete t;
}

void Campeonato::cadastrar_treinador(string nome) {
    Treinador* t = new Treinador(nome);
    treinadores.push_back(t);
}
void Campeonato::cadastrar_pokemon_eletrico(int index, string nome, string tipo_ataque, double forca_ataque, double potencia_raio) {
    treinadores[index]->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
}

void Campeonato::cadastrar_pokemon_aquatico(int index, string nome, string tipo_ataque, double forca_ataque, double litros_jato) {
    treinadores[index]->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
}

void Campeonato::cadastrar_pokemon_explosivo(int index, string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    treinadores[index]->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
}

void Campeonato::imprimir_informacoes_treinador(int index) {
    treinadores[index]->imprimir_informacoes();
}

void Campeonato::executar_batalha(int index_t1, int index_p1, int index_t2, int index_p2) {
    cout << "### Batalha ###" << endl << treinadores[index_t1]->get_nome() << " (";
    cout << (*treinadores[index_t1]->get_pokemons())[index_p1]->get_nome() << ')' << ' ';
    cout << "vs. " << treinadores[index_t2]->get_nome() << " (";
    cout << (*treinadores[index_t2]->get_pokemons())[index_p2]->get_nome() << ')' << endl;

    (*treinadores[index_t1]->get_pokemons())[index_p1]->atacar((*treinadores[index_t2]->get_pokemons())[index_p2]);
    (*treinadores[index_t2]->get_pokemons())[index_p2]->imprimir_status();
    
    cout << "#########" << endl;
}
