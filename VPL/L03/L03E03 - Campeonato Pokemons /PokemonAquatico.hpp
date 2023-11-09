#ifndef POKEMON_AQUATICO
#define POKEMON_AQUATICO

#include "Pokemon.hpp"

class PokemonAquatico : public Pokemon {
    private:
        double litros_jato;
    public:
        PokemonAquatico(string, string, double, double);
        void falar_tipo_ataque() override;
        double calcular_dano() override;
        double ataque_aquatico();
};

#endif