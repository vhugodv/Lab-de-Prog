#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3
#define MAX 19
#define MED 3

int main()
{
  int v[TAM], cont_arit = 0, arit;
  float geo, cont_geo = 1;
  srand(time(NULL));

  for (int k = 0; k < TAM; k++)
  {
    v[k] = rand() % MAX;
    cont_arit += v[k];
    cont_geo *= v[k];
  }
  printf("[");
  for (int k = 0; k < TAM; k++)
  {
    printf("%d ", v[k]);
  }
  printf("]\n");
  arit = cont_arit / MED;
  geo = pow(cont_geo, 1.0 / MED);

  printf("---------\n");
  printf("A media aritmetica da matriz sera: %d\n", arit);
  printf("A media geometrica da matriz sera: %.2f\n", geo);

  return 0;
}