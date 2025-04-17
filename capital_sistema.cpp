#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, pair<string, int>> sistemas;
    map<string, int> capitais;

    for (int i = 0; i < N; i++) {
        string sistema, mundo;
        int populacao;
        cin >> sistema >> mundo >> populacao;

        if (capitais.find(sistema) == capitais.end() || populacao > capitais[sistema]) {
            capitais[sistema] = populacao;
            sistemas[sistema] = {mundo, populacao};
        }
    }

    string capitalSistema;
    int capitalPopulacao = 0;

    for (const auto &sistema : sistemas) {
        if (sistema.second.second > capitalPopulacao) {
            capitalSistema = sistema.first;
            capitalPopulacao = sistema.second.second;
        }
    }

    cout << capitalSistema << " " << capitalPopulacao << endl;

    for (const auto &sistema : sistemas) {
        cout << sistema.first << " " << sistema.second.second << endl;
    }

    return 0;
}