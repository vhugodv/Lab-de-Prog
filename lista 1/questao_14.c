#include <stdio.h>

int main()
{
  int celsius = 0;

  printf("Digite uma temperatura em celsius: ");
  scanf("%i", &celsius);

  printf("A temperatura em Fahrenheit: %.1fF", (9 * celsius + 160) / 5.0);

  return 0;
}