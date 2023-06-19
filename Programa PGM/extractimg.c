#include "lib_alg1.h"

Image *extractSubimage(const Image *image, int x, int y, int width, int height)
{
  Image *subimage = (Image *)malloc(sizeof(Image));
  subimage->width = width;
  subimage->height = height;
  subimage->max_gray_value = image->max_gray_value;

  // Alocando memória para os pixels da subimagem
  subimage->pixels = (int **)malloc(height * sizeof(int *));
  for (int i = 0; i < height; i++)
  {
    subimage->pixels[i] = (int *)malloc(width * sizeof(int));
  }

  // Copiando os pixels da área selecionada
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < width; j++)
    {
      subimage->pixels[i][j] = image->pixels[y + i][x + j];
    }
  }

  return subimage;
}