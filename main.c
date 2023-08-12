#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float n, soma = 0, nFinal;
  int a;

  for (int i = 0; i < 3; i++) {
    printf("Informe a %iª nota:\n", i + 1);
    scanf("%f", &n);
    soma += n;
  }

  nFinal = soma / 3;

  if (nFinal >= 60) {
    printf("Informe a quantos grupos minoritários a pessoa pertence\n");
    scanf("%i", &a);
    if (a >= 3) {
      nFinal *= 1.15;
    } else if (a == 2) {
      nFinal *= 1.10;
    } else if (a == 1) {
      nFinal *= 1.05;
    }
  }

  printf("Nota final: %.2f", nFinal);

  return 0;
}