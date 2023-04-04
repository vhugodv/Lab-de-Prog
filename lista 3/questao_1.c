#include <stdio.h>

#define TAM 15

int main()
{
  float vetor[TAM];

  for (int n = 0; n < TAM; n++)
  {
    puts("Digite o numero para o vetor: ");
    scanf("%f", &vetor[n]);
  }

  float maior = vetor[0], menor = vetor[0];

  for (int n = 0; n < TAM; n++)
  {
    if (maior < vetor[n])
      maior = vetor[n];

    if (vetor[n] < menor)
      menor = vetor[n];
  }

  puts("Vetor digitado pelo usuario: ");
  for (int n = 0; n < TAM; n++)
  {
    printf("%.2f ", vetor[n]);
  }
  puts("\n");

  printf("A soma do menor e maior numero foi: %.2f + %.2f = %.2f", menor, maior, menor + maior);

  return 0;
}