#ifndef POKEMON_EXPLOSIVO
#define POKEMON_EXPLOSIVO

#include "Pokemon.hpp"

class PokemonExplosivo : public Pokemon {
    private:
        double temperatura_explosao;
    public:
        PokemonExplosivo(string, string, double, double);
        void falar_tipo_ataque() override;
        double calcular_dano() override;
        double ataque_explosivo();
};

#endif