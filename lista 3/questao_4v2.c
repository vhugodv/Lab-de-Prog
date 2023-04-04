#include <stdio.h>

#define TAM 50

int main()
{
  char str1[TAM], str2[TAM];

  puts("Digite a string 1: ");
  gets(str1);
  puts("Digite a string 2: ");
  gets(str2);

  for (int c = 0; c < TAM; c++)
  {
    if (str1[c] == str2[c])
    {
      puts("A string 1 foi igual a string 2");
      break;
    }
    else
    {
      puts("A string 1 nao foi igual a string 2");
      break;
    }
  }

  return 0;
}