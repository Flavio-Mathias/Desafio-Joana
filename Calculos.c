#include "Dor_d_cabeca.h"

int par(int n) { return n % 2 == 0; }

int primo(int n) {

  if (n < 2)
    return 0;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return 0;
  return 1;
}

int fibonacci(int n) {

  int a = 0, b = 1;
  for (int i = 0; i < n; i++) {
    int t = a + b;
    a = b;
    b = t;
  }
  return a;
}

int soma_fibonacci(int n) {

  int soma = 0;
  for (int i = 1; i <= n; i++)
    soma += fibonacci(i);
  return soma;
}

int fatorial(int n) {

  int r = 1;
  for (int i = 2; i <= n; i++)
    r *= i;
  return r;
}