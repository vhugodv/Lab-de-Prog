#include <stdio.h>
#include <math.h>

int main()
{
  float p;

  puts("Digite o numero para ser a potencia da base 3: ");
  scanf("%f", &p);

  printf("O resultado da potencia de %.0f na base 3 sera: %.0f", p, pow(3, p));

  return 0;
}