#include <stdio.h>

int main()
{
  float consumido, total, taxa = 0.1;

  puts("Digite o valor da conta: ");
  scanf("%f", &consumido);

  total = consumido + (consumido * taxa);

  printf("O total a ser pago: R$ %.2f\n", total);

  return 0;
}