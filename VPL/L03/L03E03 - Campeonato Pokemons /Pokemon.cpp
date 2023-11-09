#include "Pokemon.hpp"

Pokemon::Pokemon(string _nome, string _tipo_ataque, double _forca_ataque) : 
    nome(_nome), tipo_ataque(_tipo_ataque), forca_ataque(_forca_ataque) {}

Pokemon::~Pokemon() {}

string Pokemon::get_nome() {
    return nome;
}

void Pokemon::falar_nome() {
    cout << nome << '!' << endl;
}

void Pokemon::falar_tipo_ataque() {
    cout << tipo_ataque << '!' << endl;
}

void Pokemon::imprimir_status() {
    Pokemon::falar_nome();
    cout << "Energia: " << energia << endl;
}

void Pokemon::imprimir_informacoes() {
    cout << "Pokemon: " << nome << endl;
    cout << "Tipo ataque: " << tipo_ataque << endl;
    cout << "Dano: " << calcular_dano() << endl;
    cout << "Energia: " << energia << endl; 
}

void Pokemon::atacar(Pokemon* outro_pokemon) {
    falar_nome();
    falar_tipo_ataque();
    
    cout << "Dano: " << calcular_dano() << endl;

    outro_pokemon->receber_dano(calcular_dano());
}

void Pokemon::receber_dano(double valor_dano) {
    energia = max(0.0, energia-valor_dano);
    if(energia == 0.0) cout << nome << " morreu!" << endl;
}


