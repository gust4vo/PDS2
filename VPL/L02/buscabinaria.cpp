#include <vector>
#include <iostream>


std::vector<int> busca_binaria(std::vector<int> &v, int x){
    int i = 0, j = v.size()-1;
    int op = 0;
    while (i != j){
        int aux = (i+j)/2;
        if(v[aux] > x) j = aux-1;
        else if(v[aux] < x) i = aux +1;
        else return {aux, op+1};
        op++;
    }

    if(v[i] == x) return {i, op};
    return {-1, op};

}

int main(){
    std::vector<int> v = {4, 12, 19, 27, 33, 41, 47, 56, 64, 70, 78, 86, 95, 102, 110, 118, 124, 133, 139, 147, 156, 
    163, 172, 181, 187, 194, 201, 210, 218, 227, 233, 241, 250, 259, 267, 275, 283, 291, 298, 307, 316, 322, 330, 339, 
    347, 355, 364, 372, 379
    };

    std::cout << busca_binaria(v, 379)[0] << '\t' << busca_binaria(v, 379)[1] << std::endl;

    return 0;
}
    
