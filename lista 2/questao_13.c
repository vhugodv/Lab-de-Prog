#include <stdio.h>

int main()
{
  int soma_par = 0;
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
    if (a % 2 == 0)
    {
      soma_par += a;
    }
    a += 1;
  }

  printf("A soma dos pares sera %d\n", soma_par);

  return 0;
}