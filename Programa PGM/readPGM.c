#include "lib_alg1.h"

Image *readPGM(const char *filename)
{
  FILE *file = fopen(filename, "rb");
  if (file == NULL)
  {
    printf("Erro ao abrir o arquivo.\n");
    return NULL;
  }

  // Leitura do cabeçalho
  char magic[3];
  fscanf(file, "%2s\n", magic);
  if (magic[0] != 'P' || magic[1] != '5')
  {
    printf("Formato de arquivo inválido.\n");
    fclose(file);
    return NULL;
  }

  Image *image = (Image *)malloc(sizeof(Image));
  fscanf(file, "%d %d\n", &image->width, &image->height);
  fscanf(file, "%d\n", &image->max_gray_value);

  // Alocando memória para os pixels
  image->pixels = (int **)malloc(image->height * sizeof(int *));
  for (int i = 0; i < image->height; i++)
  {
    image->pixels[i] = (int *)malloc(image->width * sizeof(int));
  }

  // Lendo os pixels da imagem
  for (int i = 0; i < image->height; i++)
  {
    fread(image->pixels[i], sizeof(int), image->width, file);
  }

  fclose(file);
  return image;
}