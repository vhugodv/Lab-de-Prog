#include <stdio.h>

int main()
{
  int f;
  int count = 1;
  int mult = 1;

  puts("Digite um numero inteiro e positivo para calcular seu fatorial: ");
  scanf("%d", &f);

  while (count <= f)
  {
    mult *= count;
    count += 1;
  }

  printf("O fatorial do numero %d foi: %d", f, mult);

  return 0;
}