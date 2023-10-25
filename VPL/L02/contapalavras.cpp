#include <bits/stdc++.h>


using namespace std;

bool is_alfa(char &c) {
    return (c > 64 and  c < 91) or (c > 96 and c < 123) or (c > 47 and c < 58);
}

char lower(char &c){
    if (c > 64 and c < 91) c+=32;
    return c;
}

int main(){
    map <string, int> words;

    string input; getline(cin, input);

    string base = "";
    for(char c : input){
        if(is_alfa(c)) base += lower(c);
        else if(base != ""){
            (words.count(base)) ? words[base]++ : words[base] = 1;
            base.erase();
        } 
    }
    
    map<string, int>::iterator it = words.begin();

    while(it != words.end()){
        cout << it->first  << ' ' << it->second << endl;
        ++it;
    }
}

