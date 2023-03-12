#include <stdio.h>

int main()
{
  int counts = 0, countn = 0;
  int a, b, c;

  puts("Digite um valor para A: ");
  scanf("%d", &a);
  puts("Digite um valor para B: ");
  scanf("%d", &b);

  if (b < a)
  {
    c = a;
    a = b;
    b = c;
  }

  while (a <= b)
  {
    counts += a;
    countn += 1;
    a += 1;
  }

  printf("A media aritmetica dos valores pedidos sera: %d", counts / countn);

  return 0;
}