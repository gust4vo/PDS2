#include <iostream>
#include <set>

using namespace std;

int main ()
{
    set<int> s1, s2;
    set<int> uniao, intersecao; 

    for (int i=0; i<2; i++)
    {
        int ent; cin >> ent;

        while(ent != -1)
        {
            int tam = uniao.size();

            (i==0)? s1.insert(ent):s2.insert(ent);

            uniao.insert(ent);

            if(uniao.size() == tam) intersecao.insert(ent);

            cin >> ent;
        }
    }

    for(int x: s1) cout << x << ' ';         cout << endl;
    for(int x: s2) cout << x << ' ';         cout << endl;
    for(int x: uniao) cout << x << ' ';      cout << endl;
    for(int x: intersecao) cout << x << ' '; cout << endl;

}