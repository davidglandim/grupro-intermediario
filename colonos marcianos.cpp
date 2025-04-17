#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Candidato {
    int nota;
    int id;
};

bool compararCandidatos(const Candidato &a, const Candidato &b) {
    if (a.nota == b.nota) {
        return a.id < b.id;
    }
    return a.nota > b.nota;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<Candidato> candidatos(Q);

    for (int i = 0; i < Q; i++) {
        cin >> candidatos[i].nota >> candidatos[i].id;
    }

    sort(candidatos.begin(), candidatos.end(), compararCandidatos);

    vector<Candidato> selecionados(candidatos.begin(), candidatos.begin() + N);

    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int notaConsulta, idConsulta;
        cin >> notaConsulta >> idConsulta;

        bool encontrado = false;
        for (const Candidato &c : selecionados) {
            if (c.nota == notaConsulta && c.id == idConsulta) {
                encontrado = true;
                break;
            }
        }

        if (encontrado) {
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }
}