#include <bits/stdc++.h>

using namespace std;


class Nck {
    private:
        static int obj_num;
        static int aux;
        int id;

    public:
        Nck();
        ~Nck();
        
        static int getNumObj();

        int getId();
        Nck* getAdress();
};

int Nck::obj_num = 0;
int Nck::aux = 1;

Nck::Nck() {
    this->id = aux;
    obj_num++;
    aux++;
}

Nck::~Nck() {
    obj_num--;
}


int Nck::getId() {
    return this->id;
}

int Nck::getNumObj() {
    return obj_num;
}

Nck* Nck::getAdress() {
    return this;
}

int main() {
    vector<Nck*> objetos;

    while(true) {
        char ent; cin >> ent;

        if(ent == 'A') {
            Nck* obj = new Nck(); objetos.push_back(obj);

            cout << obj->getId() << ' ' << obj->getAdress() << endl;
        }

        else if(ent == 'R') {
            if(objetos.size()) {
                cout << objetos.front()->getId() << ' ' << objetos.front()->getAdress() << endl;
                delete objetos[0];
                objetos.erase(objetos.begin()); 

            } else {
                cout << "ERRO" << endl;
            }
        }

        else if(ent == 'C') {
            cout << Nck::getNumObj() << endl;
        }

        else if(ent == 'P') {
            int num; cin >> num;
            if(num > objetos.size() or num < 0) {
                cout << "ERRO" << endl;
            } else {
                cout << objetos[num-1]->getId() << ' ' << objetos[num-1]->getAdress() << endl;
            }
        }
        else if(ent == 'L') {
            for(Nck* i: objetos) {
                cout << i->getId() << ' ' << i->getAdress() << endl;
            }
        }
        else if(ent == 'E') break;
    }

    for(Nck* i: objetos) delete i;
}
