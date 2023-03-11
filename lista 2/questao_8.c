#include <stdio.h>

int main()
{
  int preco, prest, entrada;
  int div_resto;

  while (preco >= 0)
  {
    puts("Digite o preco do produto ou um numero negativo para encerrar o programa: ");
    scanf("%d", &preco);

    div_resto = preco % 3;
    prest = preco / 3;
    entrada = prest + div_resto;

    printf("O preco de entrada do produto foi: %d\n", entrada);
    printf("O preco das prestacoes do produto foi: %d\n", prest);
  }

  return 0;
}