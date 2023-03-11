#include <stdio.h>

int main()
{
  int quad;
  int n = 15;

  while (n <= 90)
  {
    if (n % 4 == 0)
    {
      quad = n * n;
      printf("O quadrado de %d sera %d\n", n, quad);
    }
    n += 1;
  }

  return 0;
}