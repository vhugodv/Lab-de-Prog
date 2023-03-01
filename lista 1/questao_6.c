#include <stdio.h>

int main()
{
  float altura, peso;
  char sexo;
  printf("Digite a altura: ");
  scanf("%f", &altura);
  printf("Digite o sexo (m/f): ");
  scanf(" %c", &sexo);

  if (sexo == 'm')
  {
    peso = (72.7 * altura) - 58;
  }
  else
  {
    peso = (62.1 * altura) - 44.7;
  }

  printf("Peso ideal: %.2f", peso);

  return 0;
}