#include <stdio.h>
#include <string.h>

#define TAM 50

int main()
{
  char str1[TAM], str2[TAM];

  puts("Digite a string 1: ");
  gets(str1);
  puts("Digite a string 2: ");
  gets(str2);

  printf("A concatenacao das duas strings fica: %s", strcat(str1, str2));

  return 0;
}