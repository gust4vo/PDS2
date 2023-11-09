#include "Treinador.hpp"

Treinador::Treinador(string _nome) : nome(_nome) {}

Treinador::~Treinador() {
    for(Pokemon* p: pokemons) delete p;
}

vector<Pokemon*>* Treinador::get_pokemons() {
    return &pokemons;
}

string Treinador::get_nome() {
    return nome;
}

void Treinador::cadastrar_pokemon_eletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio) {
    PokemonEletrico* p = new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
    pokemons.push_back(p);
}

void Treinador::cadastrar_pokemon_aquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato) {
    PokemonAquatico* p = new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato);
    pokemons.push_back(p);
}

void Treinador::cadastrar_pokemon_explosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    PokemonExplosivo* p = new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
    pokemons.push_back(p);
}

Pokemon* Treinador::usar_pokemon(int index) {
    return pokemons[index];
}

void Treinador::imprimir_informacoes() {
    if(!pokemons.size())
        cout << "Nome: " << nome << endl <<  "----------" << endl << "Nenhum Pokemon cadastrado!" << endl << "----------" << endl;
        
    else {
        cout << "Nome: " << nome << endl << "----------" << endl;

        for(Pokemon* p : pokemons) {
            p->imprimir_informacoes();
            cout << "----------" << endl;
        } 
    }


}

