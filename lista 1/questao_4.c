#include <stdio.h>
int main()
{
  int x;
  printf("Digite um numero: ");
  scanf("%d", &x);
  printf("O triplo do numero digitado: %d\n", x * 3);
  printf("O quadrado do numero digitado: %d\n", x * x);
  printf("O meio do numero digitado: %.1f\n", ((float)x) / 2);

  return 0;
}