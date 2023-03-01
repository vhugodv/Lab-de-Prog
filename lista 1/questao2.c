#include <stdio.h>

int main()
{
  int x;
  puts("Digite um numero: ");
  scanf("%d", &x);

  printf("O valor '%d' em hexadecimal fica: '%x' e em octal fica: '%o'", x, x, x);

  return 0;
}