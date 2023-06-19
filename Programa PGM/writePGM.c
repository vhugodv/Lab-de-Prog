#include "lib_alg1.h"

void writePGM(const char *filename, const Image *image)
{
  FILE *file = fopen(filename, "wb");
  if (file == NULL)
  {
    printf("Erro ao criar arquivo de saída.\n");
    return;
  }

  // Escrevendo cabeçalho
  fprintf(file, "P5\n");
  fprintf(file, "%d %d\n", image->width, image->height);
  fprintf(file, "%d\n", image->max_gray_value);

  // Escrevendo pixels
  for (int i = 0; i < image->height; i++)
  {
    fwrite(image->pixels[i], sizeof(int), image->width, file);
  }

  fclose(file);
}

void freeImage(Image *image)
{
  for (int i = 0; i < image->height; i++)
  {
    free(image->pixels[i]);
  }
  free(image->pixels);
  free(image);
}