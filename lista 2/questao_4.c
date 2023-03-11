#include <stdio.h>

int main()
{
  int jose = 150;
  int pedro = 110;
  int countp = 0;

  while (jose > pedro)
  {
    jose += 2;
    pedro += 3;
    countp += 1;
  }

  printf("Pedro ultrapassara a altura de jose em %d anos", countp);

  return 0;
}