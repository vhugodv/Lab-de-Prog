#include <stdio.h>

#define LIN 3
#define COL 3
#define TAM 3

int main()
{
  int m[LIN][COL], m_diag[TAM];

  for (int i = 0; i < LIN; i++)
  {
    for (int j = 0; j < COL; j++)
    {
      printf("Digite o elemento [%d] [%d] da matriz: ", i, j);
      scanf("%d", &m[i][j]);
      if (i == j)
        m_diag[i] = m[i][j];
    }
    printf("\n");
  }
  for (int i = 0; i < LIN; i++)
  {
    for (int j = 0; j < COL; j++)
    {
      printf("%4d", m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  puts("Vetor da diagonal principal");
  printf("[");
  for (int i = 0; i < TAM; i++)
    printf("%d ", m_diag[i]);
  printf("]");
  return 0;
}