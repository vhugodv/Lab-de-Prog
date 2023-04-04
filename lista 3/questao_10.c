#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3
#define MAX 8

int main()
{
  int m[LIN][COL], x, countx = 0;
  srand(time(NULL));

  puts("Digite um numero para ver quantas vezes ele se repete: ");
  scanf("%d", &x);

  for (int i = 0; i < LIN; i++)
  {
    for (int j = 0; j < COL; j++)
    {
      m[i][j] = rand() % MAX;
      if (x == m[i][j])
        countx += 1;
    }
  }
  for (int i = 0; i < LIN; i++)
  {
    for (int j = 0; j < COL; j++)
    {
      printf("%4d", m[i][j]);
    }
    printf("\n");
  }

  if (countx == 0)
    printf("O numero %d nao se repete nenhuma vez na matriz!", x, countx);
  if (countx == 1)
    printf("O numero %d se repete %d vez na matriz!", x, countx);
  if (countx > 1)
    printf("O numero %d se repete %d vezes na matriz!", x, countx);

  return 0;
}