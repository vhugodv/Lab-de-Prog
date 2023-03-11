#include <stdio.h>

int main()
{
  int dividendo, divisor, res;

  while (1)
  {
    puts("Digite um numero para ser o dividendo: ");
    scanf("%d", &dividendo);
    puts("Digite um numero para ser o divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
      puts("Numero invalido para o divisor!");
      continue;
    }
    else
      res = dividendo / divisor;
    break;
  }

  printf("O resultado da divisao foi: %d", res);

  return 0;
}