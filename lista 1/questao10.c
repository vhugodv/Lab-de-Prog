#include <stdio.h>

int main()
{
  float comprimento, largura, altura, volume;

  printf("Digite o Comprimento: ");
  scanf("%f", &comprimento);
  printf("Digite a Largura: ");
  scanf("%f", &largura);
  printf("Digite a Altura: ");
  scanf("%f", &altura);

  volume = comprimento * largura * altura;

  printf("Volume = %.2f", volume);

  return 0;
}