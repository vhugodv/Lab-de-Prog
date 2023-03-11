#include <stdio.h>

int main()
{
  int n = 1;
  int menor = 0, maior = 0;

  while (n != 0)
  {
    puts("Digite um numero: ");
    scanf("%d", &n);
    if (n > maior)
    {
      maior = n;
    }
    else if (n < menor, n != 0)
    {
      menor = n;
    }
  }
  puts("PROGRAMA ENCERRADO!");
  printf("O maior numero digitado foi %d e o menor foi %d", maior, menor);

  return 0;
}