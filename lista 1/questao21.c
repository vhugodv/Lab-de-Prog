#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &num1, &num2);

  printf("O numero %d e %s de %d.\n", num1, (num1 % num2 == 0) ? "multiplo" : "nao multiplo", num2);

  return 0;
}