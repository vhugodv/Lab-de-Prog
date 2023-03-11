#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dia;

  do
  {
    puts("Digite um numero de 1 a 7 para escolher o dia, ou 0 para fechar o programa: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
      puts("O dia escolhido foi domingo!\n");
      break;
    case 2:
      puts("O dia escolhido foi segunda!\n");
      break;
    case 3:
      puts("O dia escolhido foi terca!\n");
      break;
    case 4:
      puts("O dia escolhido foi quarta!\n");
      break;
    case 5:
      puts("O dia escolhido foi quinta!\n");
      break;
    case 6:
      puts("O dia escolhido foi sexta!\n");
      break;
    case 7:
      puts("O dia escolhido foi sabado!\n");
      break;
    case 0:
      puts("PROGRAMA ENCERRADO!");
      exit(1);
    default:
      printf("O dia digitado: (%d) nao foi valido!", dia);
    }

  } while (dia <= 7);

  return 0;
}