#ifndef TREINADOR_H
#define TREINADOR_H

#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"

class Treinador {
    private:
        vector<Pokemon*> pokemons;
        string nome;
    public:
        Treinador(string);
        ~Treinador();

        vector<Pokemon*> *get_pokemons();
        string get_nome();
        
        void cadastrar_pokemon_eletrico(string, string, double, double);
        void cadastrar_pokemon_aquatico(string, string, double, double);
        void cadastrar_pokemon_explosivo(string, string, double, double);

        Pokemon* usar_pokemon(int);
        void imprimir_informacoes();
};


#endif