#include <stdio.h>
#define PI 3.14159

int main()
{
  float raio;

  printf("Digite o raio: ");
  scanf("%f", &raio);

  printf("Diametro: %.2f\n", raio * 2);
  printf("Circunferencia: %.2f\n", PI * raio * 2);
  printf("Area: %.2f\n", PI * (raio * raio));

  return 0;
}