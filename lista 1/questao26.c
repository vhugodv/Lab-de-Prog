#include <stdio.h>
#include <math.h>

int main()
{
  float x1, x2, y1, y2, distancia;

  printf("Digite as coordenadas do primeiro ponto (xy): ");
  scanf("%f %f", &x1, &y1);
  printf("Digite as coordenadas do segundo ponto (xy): ");
  scanf("%f %f", &x2, &y2);

  distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("Distancia entre os dois pontos: %f", distancia);
}