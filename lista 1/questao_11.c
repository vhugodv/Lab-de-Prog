#include <stdio.h>

int main()
{
  float cotacao, real, dolar;

  printf("Digite a cotacao do dolar: ");
  scanf("%f", &cotacao);
  printf("Digite a quantidade de reais: ");
  scanf("%f", &real);

  dolar = real / cotacao;

  printf("%.2f dolares", dolar);

  return 0;
}