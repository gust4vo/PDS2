#include "PokemonEletrico.hpp"

PokemonEletrico::PokemonEletrico(string _nome, string _tipo_ataque, double _forca_ataque, double _potencia_raio) :
    Pokemon(_nome, _tipo_ataque, _forca_ataque) { potencia_raio = _potencia_raio; }

void PokemonEletrico::falar_tipo_ataque() {
    Pokemon::falar_tipo_ataque();
    cout << "Bzzzz!" << endl; 
}

double PokemonEletrico::calcular_dano() {
    return ataque_eletrico();
}

double PokemonEletrico::ataque_eletrico() {
    return forca_ataque * potencia_raio;
}


