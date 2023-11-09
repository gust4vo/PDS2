#ifndef POKEMON_ELETRICO_H
#define POKEMON_ELETRICO_H

#include "Pokemon.hpp"

class PokemonEletrico : public Pokemon {
    private:
        double potencia_raio;
    public:
        PokemonEletrico(string, string, double, double);
        void falar_tipo_ataque() override;
        double calcular_dano() override;
        double ataque_eletrico();
};

#endif