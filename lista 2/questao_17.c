#include <stdio.h>

int main()
{
  int c = 10, f;

  while (c <= 100)
  {
    printf("A temperatura de %d graus Celsius sera %d graus Farenheit\n", c, f = (c * 1.8) + 32);

    c += 10;
  }

  return 0;
}