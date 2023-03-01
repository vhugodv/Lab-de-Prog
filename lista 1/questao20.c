#include <stdio.h>

int main()
{
  int num;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  printf("O numero %d e %s.\n", num, (num % 2 == 0) ? "par" : "ímpar");
  return 0;
}