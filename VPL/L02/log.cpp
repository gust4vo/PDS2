#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<vector<string>> logs;

    string input; cin >> input;

    while (input != "END") {
        vector<string> log;

        while (input != "LOG") {
            if (input == "DEL") {
                log.clear();
                cin >> input;
                continue;
            }
            if (input == "CLS") {
                logs.clear();
                break;
            }
            if (input == "END") break;
        
            log.push_back(input);
            cin >> input;
        }

        if (input == "LOG") logs.push_back(log);
        else if (input == "END") break;
        cin >> input;
    }

    for (int i=0; i<logs.size(); i++) {
        cout << i+1 << ' ' << logs[i].size() << ' ';
        for (int j=0; j<logs[i].size(); j++) cout << logs[i][j] << ' ';
        cout << endl;
    }
}