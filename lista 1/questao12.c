#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  printf("Soma: %d\n", num1 + num2);
  printf("Produto: %d\n", num1 * num2);
  printf("Diferenca: %d\n", num1 - num2);
  printf("Quociente: %d\n", ((float)num1) / num2);
  printf("Resto: %d\n", num1 % num2);

  return 0;
}