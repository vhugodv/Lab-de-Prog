#include <stdio.h>

#define TAM 50

int main()
{
  char str[TAM];
  int count = 0;

  puts("Digite a string: ");
  gets(str);

  for (int c = 0; c < str[c]; c++)
  {
    count += 1;
  }

  printf("A string digitada tem %d caracteres.", count);

  return 0;
}