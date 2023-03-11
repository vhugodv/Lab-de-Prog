#include <stdio.h>

int main()
{
  int countp = 0, countr = 0, branco = 0, nulo = 0;
  int voto, dec;
  int total, perc;

  while (voto != -1)
  {
    puts("Bem-vindo a urna eletronica, digite o numero do seu candidato: \n");
    puts("5 -> Paulo");
    puts("7 -> Renata");
    puts("0 -> Voto em branco\n");
    puts("Digite: -1 para encerrar a urna!");
    scanf("%d", &voto);
    puts("Confirmar voto: ");
    puts("1 -> Sim");
    puts("2 -> Nao");
    scanf("%d", &dec);
    switch (voto)
    {
    case 5:
      if (dec == 1)
      {
        puts("Voce votou no candidato Paulo!\n");
        countp += 1;
      }
      else
        puts("Voce nao confirmou o voto. Reiniciando...\n");
      break;
    case 7:
      if (dec == 1)
      {
        puts("Voce votou na candidata Renata!\n");
        countr += 1;
      }
      else
        puts("Voce nao confirmou o voto. Reiniciando...\n");
      break;
    case 0:
      if (dec == 1)
      {
        puts("Voce votou em branco!\n");
        branco += 1;
      }
      else
        puts("Voce nao confirmou o voto. Reiniciando...\n");
      break;
    case -1:
      if (dec == 1)
      {
        puts("Urna encerrada!\n");
        break;
      }
      else
        puts("Voce nao confirmou o encerramento da urna. Reiniciando...\n");
      break;
    default:
      if (dec == 1)
      {
        puts("Seu voto foi anulado! Reiniciando...\n");
        nulo += 1;
      }
      else
        puts("Voce nao confirmou o voto. Reiniciando...\n");
      break;
    }
  }

  total = countp + countr + branco + nulo;
  countp = (countp * 100) / total;
  countr = (countr * 100) / total;
  branco = (branco * 100) / total;
  nulo = (nulo * 100) / total;

  printf("Votos no candidato Paulo: %d%%,\nVotos na candidata Renata: %d%%,\nVotos em branco: %d%%,\nVotos nulos: %d%%\n", countp, countr, branco, nulo);

  return 0;
}