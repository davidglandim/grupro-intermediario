#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> mapa(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mapa[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    if (mapa[X][Y] != 1) {
        cout << 0 << endl;
        return 0;
    }

    int area = 0;
    queue<pair<int, int>> fila;
    fila.push({X, Y});
    mapa[X][Y] = 0; 

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (!fila.empty()) {
        auto atual = fila.front();
        fila.pop();
        area++;

        for (int i = 0; i < 4; i++) {
            int nx = atual.first + dx[i];
            int ny = atual.second + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N && mapa[nx][ny] == 1) {
                fila.push({nx, ny});
                mapa[nx][ny] = 0;
            }
        }
    }

    cout << area << endl;
}