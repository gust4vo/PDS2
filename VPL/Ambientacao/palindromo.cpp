#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);

    int dir = s.size()-1, esq = 0;

    while(esq < dir){
        if(s[esq] != s[dir]){
            cout << "NAO" << endl; 
            return 0;
        } esq++, dir--;
    }
    
    cout << "SIM" << endl;
}


