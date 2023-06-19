#include "lib_alg1.h"

void applyMeanFilter(Image *image)
{
  Image *filteredImage = (Image *)malloc(sizeof(Image));
  filteredImage->width = image->width;
  filteredImage->height = image->height;
  filteredImage->max_gray_value = image->max_gray_value;

  // Alocando memória para os pixels da imagem filtrada
  filteredImage->pixels = (int **)malloc(filteredImage->height * sizeof(int *));
  for (int i = 0; i < filteredImage->height; i++)
  {
    filteredImage->pixels[i] = (int *)malloc(filteredImage->width * sizeof(int));
  }

  // Aplicando o filtro da média
  for (int i = 0; i < filteredImage->height; i++)
  {
    for (int j = 0; j < filteredImage->width; j++)
    {
      int sum = 0;
      int count = 0;

      // Percorrendo a janela 3x3
      for (int dx = -1; dx <= 1; dx++)
      {
        for (int dy = -1; dy <= 1; dy++)
        {
          int nx = j + dx;
          int ny = i + dy;

          // Verificando limites da imagem
          if (nx >= 0 && nx < filteredImage->width && ny >= 0 && ny < filteredImage->height)
          {
            sum += image->pixels[ny][nx];
            count++;
          }
        }
      }

      // Calculando valor médio
      int average = sum / count;
      filteredImage->pixels[i][j] = average;
    }
  }

  // Copiando os pixels filtrados de volta para a imagem original
  for (int i = 0; i < filteredImage->height; i++)
  {
    for (int j = 0; j < filteredImage->width; j++)
    {
      image->pixels[i][j] = filteredImage->pixels[i][j];
    }
  }

  // Liberando memória
  freeImage(filteredImage);
}