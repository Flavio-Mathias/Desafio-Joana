#include "Dor_d_cabeca.h"
#include <stdio.h>

char apostador[5][20];
int n;
int contador;

int main() {

  for (contador = 0; contador < 5; contador++) {
    printf("Digite seu nome apostador %d: ", contador + 1);
    scanf("%s", apostador[contador]);
    printf("Digite seu numero apostador %d: ", contador + 1);
    scanf("%d", &n);
    printf("\n");
  }

  for (contador = 0; contador < 3; contador++) {
    printf("%d Lugar: %s\n", contador + 1, apostador[contador]);
  }

  return 0;
}
