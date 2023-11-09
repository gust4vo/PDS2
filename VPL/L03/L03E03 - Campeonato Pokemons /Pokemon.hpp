#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Pokemon {
    protected:
        string nome, tipo_ataque;
        double forca_ataque, energia=100;

    public:        
        Pokemon(string, string, double);
        virtual ~Pokemon();
        string get_nome();
        void falar_nome();
        virtual void falar_tipo_ataque();
        void imprimir_status();
        void imprimir_informacoes();
        virtual double calcular_dano() = 0;
        void atacar(Pokemon*);
        void receber_dano(double);
};



#endif