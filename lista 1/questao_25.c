#include <stdio.h>

int main()
{
  int segundos, horas, minutos;

  printf("Digite o tempo em segundos: ");
  scanf("%d", &segundos);

  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;

  printf("%d horas, %d minutos e %d segundos", horas, minutos, segundos);
}