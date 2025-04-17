#include <iostream>
#include <vector>
using namespace std;

struct xp {
  int nivel, bonus;
};

int main() {
  vector <xp> v;
  int xp_necessario, xp_total = 0, bonus_adicional, qtd_niveis, i;

  cin >> qtd_niveis;
  v.resize(qtd_niveis);

  for (i = 0; i < qtd_niveis; i++) {
    cin >> v[i].nivel;
    cin >> v[i].bonus;
  }

  cin >> xp_necessario >> bonus_adicional;

  for (i = 0; i < v.size(); i++) {
    xp_total += v[i].nivel * (v[i].bonus + bonus_adicional);
  }

  if (xp_total >= xp_necessario)
    cout << "Upou de Nivel!" << endl;
  else
    cout << "Nao foi dessa vez!" << endl;
}