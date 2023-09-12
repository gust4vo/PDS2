#include <iostream>
#include <string>

using namespace std;

int main(){
    string ent, cifra; 
    getline(cin, ent), getline(cin, cifra);

    cout << ent << endl;
    int ent_t = ent.size(), cifra_t = cifra.size();

    for(int i=0; i<ent_t; i++){
        if(ent[i] > 'z' or ent[i] < 'a'){
            cout << ent[i];
            continue;
        }
        char aux = (ent[i] + cifra[i%cifra_t] - 'a'*2)%26 + 'a';
        cout << aux;
    }
    
    cout << endl;
}
