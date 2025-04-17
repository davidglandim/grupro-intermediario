#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct padawan {
  string nome;
  int missoes_atribuidas, missoes_abandonadas;
};

int main() {
  vector <padawan> v;
  int jovens_promessas, i;
  cin >> jovens_promessas;
  v.resize(jovens_promessas);

  for (i = 0; i < jovens_promessas; i++) {
    cin >> v[i].nome >> v[i].missoes_atribuidas >> v[i].missoes_abandonadas;
  }

  sort(v.begin(), v.end(), [](const padawan& a, const padawan& b) {
    return a.nome < b.nome;
  });

  for (const auto& p : v) {
    cout << p.nome << " " << p.missoes_atribuidas - p.missoes_abandonadas << endl;
  }
}