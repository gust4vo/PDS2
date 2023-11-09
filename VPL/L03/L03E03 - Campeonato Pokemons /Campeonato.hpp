#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include "Treinador.hpp"

class Campeonato {
    private: 
        vector<Treinador*> treinadores;
    public:
        ~Campeonato();

        void cadastrar_treinador(string);
        void cadastrar_pokemon_eletrico(int, string, string, double, double);
        void cadastrar_pokemon_aquatico(int, string, string, double, double);
        void cadastrar_pokemon_explosivo(int, string, string, double, double);

        void imprimir_informacoes_treinador(int);

        void executar_batalha(int, int, int, int);
};

#endif