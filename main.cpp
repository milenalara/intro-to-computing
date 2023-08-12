#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double n, soma = 0, nFinal;
  int a;

  for(int i = 0; i < 3; i++) {
    cout << "Informe a "<<(i+1)<<" nota:\n";
    cin >> n;
    soma += n;
  }
  nFinal = soma / 3;

  if (nFinal >= 60) {
    cout << "Informe a quantos grupos minoritários a pessoa pertence\n";
    cin >> a;
    if (a >= 3) {
      nFinal *= 1.15;
    } else if (a == 2) {
      nFinal *= 1.10;
    } else if (a == 1) {
      nFinal *= 1.05;
    }
  }

  cout << fixed;
  cout << setprecision(2);
  cout << "Nota final: "<< nFinal;
}