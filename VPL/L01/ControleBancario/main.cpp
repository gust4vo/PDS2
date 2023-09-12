#include "Banco.hpp"

int main(){
    Banco banco;
    banco.inicializaBanco(20);

    while(true){
        char command; cin >> command;

        if(command == 'C'){
            int id; string nome; cin >> id >> nome;

            if(banco.criaConta(id, nome) == nullptr) cout << "ERRO: conta repetida" << endl;
            else cout << "conta criada" << endl;
        } 

        else if(command == 'D'){
            int id; float valor; cin >> id >> valor;
            Conta* conta = banco.pesquisa(id);
            if(conta == nullptr) cout << "ERRO: conta inexistente" << endl;
            else{
                conta->deposito(valor);
                cout << "deposito efetuado" << endl;
            }
        }

        else if(command == 'S'){
            int id; float valor; cin >> id >> valor;
            Conta* conta = banco.pesquisa(id);
            if(conta == nullptr) cout << "ERRO: conta inexistente" << endl;
            else{
                conta->saque(valor);
                cout << "saque efetuado" << endl;
            }
        }

        else if(command == 'P'){
            int id, dest; float valor; cin >> id >> dest >> valor;
            Conta* conta_envia = banco.pesquisa(id);
            Conta* conta_recebe = banco.pesquisa(dest);

            if(conta_envia == nullptr or conta_recebe == nullptr) cout << "ERRO: conta inexistente" << endl;
            else{
                conta_envia->pix(conta_recebe, valor);
                cout << "pix efetuado" << endl;
            }
        }

        else if(command == 'I'){
            for(int i=0; i<banco.num_contas; i++){
                banco.contas[i]->imprime();
            }
        }
        
        else if(command == 'F') return 0;
        else cout << "Comando não reconhecido, para interromper a execução do programa, digite ""F""" << endl;
    }

}