#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    float* seq = new float[t];

    float media = 0.0;
    for(int i=0; i<t; i++){
        cin >> seq[i];
        media += seq[i];
    }
    media /= t;

    float desvio=0;
    for(int i=0; i<t; i++){
        desvio += pow(seq[i] - media, 2);
    }
    desvio /= t;

    cout << fixed << setprecision(4) << media << '\n' << sqrt(desvio) << endl;

}