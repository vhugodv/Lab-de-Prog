#include <stdio.h>

#define TAM 50

int main()
{
  char str[TAM], ch;

  puts("Digite a string: ");
  gets(str);

  puts("Digite o caractere: ");
  scanf("%c", &ch);

  for (int c = 0; c < TAM; c++)
  {
    if (ch == str[c])
    {
      puts("O caractere digitado esta na STRING!");
      break;
    }
    else if (ch != str[c] && c == TAM - 1)
      puts("O caractere digitado NAO esta na STRING!");
  }

  return 0;
}