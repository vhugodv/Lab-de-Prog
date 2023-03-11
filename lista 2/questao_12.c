#include <stdio.h>

int main()
{
  int n, countn = 1;

  puts("Escolha um numero para calcular sua tabuada: ");
  scanf("%d", &n);
  printf("Tabuada de %d\n", n);

  while (countn < 11)
  {
    printf("%d X %d = %d\n", n, countn, n * countn);
    countn += 1;
  }

  return 0;
}