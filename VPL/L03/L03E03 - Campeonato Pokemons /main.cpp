#include "avaliacao_basica_pokemon.hpp"

#include "Campeonato.hpp"

int main() {
    Campeonato campeonato;

    char ent;
        
    while(cin >> ent) {
        if(ent == 't') {
            string nome; cin >> nome;
            campeonato.cadastrar_treinador(nome);
        }
        else if(ent == 'i') {
            int index; cin >> index;
            campeonato.imprimir_informacoes_treinador(index);
        }
        else if(ent == 'e') {
            int index; double forca_ataque, potencia_raio; string nome, tipo_ataque;
            cin >> index >> nome >> tipo_ataque >> forca_ataque >> potencia_raio;
            campeonato.cadastrar_pokemon_eletrico(index, nome, tipo_ataque, forca_ataque, potencia_raio);
        }
        else if(ent == 'q') {
            int index; double forca_ataque, litros_jato; string nome, tipo_ataque;
            cin >> index >> nome >> tipo_ataque >> forca_ataque >> litros_jato;
            campeonato.cadastrar_pokemon_aquatico(index, nome, tipo_ataque, forca_ataque, litros_jato);
        }
        else if(ent == 'x') {
            int index; double forca_ataque, temperatura_explosao; string nome, tipo_ataque;
            cin >> index >> nome >> tipo_ataque >> forca_ataque >> temperatura_explosao;
            campeonato.cadastrar_pokemon_explosivo(index, nome, tipo_ataque, forca_ataque, temperatura_explosao);
        }
        else if(ent == 'h') {
            int index_t1, index_p1, index_t2, index_p2;
            cin >> index_t1 >> index_p1 >> index_t2 >> index_p2;
            campeonato.executar_batalha(index_t1, index_p1, index_t2, index_p2);
        }
        else if(ent == 'b') {
            avaliacao_basica();
            break;
        }
    }

    return 0;
}