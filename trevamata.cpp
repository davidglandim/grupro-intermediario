#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct amigos {
  int peso;
  string nome;
};

int main() {
  vector <amigos> v;
  vector <string> gordinhos;
  amigos amigo;

  int numero_amigos, carga_total, i;
  cin >> numero_amigos;

  for (i = 0; i < numero_amigos; i++) {
    cin >> amigo.nome >> amigo.peso;
    v.push_back(amigo);
  }

  cin >> carga_total;
  for (i = 0; i < numero_amigos; i++) {
    if (carga_total < v[i].peso)
      gordinhos.push_back(v[i].nome);
  }

  if (gordinhos.size() == 0)
    cout << "Vamos todos encontrar a montanha!" << endl;
  else {
    cout << "Vamos virar almoço de aranhas gigantes!" << endl;
    for (i = 0; i < gordinhos.size(); i++) {
      cout << gordinhos[i] << endl;
    }
  }
}