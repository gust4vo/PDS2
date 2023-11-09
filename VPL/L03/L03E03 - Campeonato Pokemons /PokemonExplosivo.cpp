#include "PokemonExplosivo.hpp"

PokemonExplosivo::PokemonExplosivo(string _nome, string _tipo_ataque, double _forca_ataque, double _temperatura_explosao) :
    Pokemon(_nome, _tipo_ataque, _forca_ataque) { temperatura_explosao = _temperatura_explosao; }

void PokemonExplosivo::falar_tipo_ataque() {
    Pokemon::falar_tipo_ataque();
    cout << "Boom!" << endl;
}

double PokemonExplosivo::calcular_dano() {
    return ataque_explosivo();
}

double PokemonExplosivo::ataque_explosivo() {
    return forca_ataque / temperatura_explosao;
}

