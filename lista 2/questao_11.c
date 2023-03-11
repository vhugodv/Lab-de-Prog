#include <stdio.h>

int main()
{
  int quad;
  int a, b, c;

  puts("Defina o limite de A: ");
  scanf("%d", &a);
  puts("Defina o limite de B: ");
  scanf("%d", &b);

  if (b < a)
  {
    c = a;
    a = b;
    b = c;
  }

  while (a <= b)
  {
    if (a % 4 == 0)
    {
      quad = a * a;
      printf("O quadrado de %d sera %d\n", a, quad);
    }
    a += 1;
  }

  return 0;
}