#include "PokemonAquatico.hpp"

PokemonAquatico::PokemonAquatico(string _nome, string _tipo_ataque, double _forca_ataque, double _litros_jato) :
    Pokemon(_nome, _tipo_ataque, _forca_ataque) { litros_jato = _litros_jato; }

void PokemonAquatico::falar_tipo_ataque() {
    Pokemon::falar_tipo_ataque();
    cout << "Splash!" << endl;
}

double PokemonAquatico::calcular_dano() {
    return ataque_aquatico();
}

double PokemonAquatico::ataque_aquatico() {
    return forca_ataque + litros_jato;
}

