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

  if (strcmp(str1, str2) == 0)
    puts("As strings digitadas sao iguais!");
  else
    puts("As string digitadas nao sao iguais!");

  return 0;
}