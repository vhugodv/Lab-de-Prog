#include <stdio.h>

int main()
{
  int num;

  printf("Digite o numero: ");
  scanf("%d", &num);

  printf("Sucessor: %d\n", num + 1);
  printf("Antecessor: %d\n", num - 1);

  return 0;
}