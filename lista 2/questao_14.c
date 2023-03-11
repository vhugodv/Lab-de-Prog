#include <stdio.h>

int main()
{
  int divi = 0;
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
    if (a % 3 == 0)
    {
      divi += 1;
    }
    a += 1;
  }

  printf("Os numeros divisiveis por 3 sera: %d\n", divi);

  return 0;
}