#include <stdio.h>

int main()
{
  int g = 1, somag = 0;
  int quadro;

  for (quadro == 2; quadro < 64; quadro++)
  {
    g *= 2;
    somag += g;
  }
  printf("No %d quadro terao %d graos de trigo\n", quadro, somag);

  return 0;
}