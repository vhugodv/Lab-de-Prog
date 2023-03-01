#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;

  printf("A = %d\n", a);
  printf("B = %d\n", b);

  return 0;
}