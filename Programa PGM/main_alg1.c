#include "lib_alg1.h"

#define MAX 100
#define MIN 0

int main()
{
  srand(time(NULL));

  // Leitura da imagem
  const char *filename = "input.pgm";
  Image *image = readPGM(filename);
  if (image == NULL)
  {
    return 1;
  }

  // Criação de variáveis
  int numSubimages = 1;
  int width = 100, height = 100;

  // Alocando memória
  int *x = (int *)malloc(numSubimages * sizeof(int));
  int *y = (int *)malloc(numSubimages * sizeof(int));
  char **outputPaths = (char **)malloc(numSubimages * sizeof(char *));

  // Solicitar o diretório de destino ao usuário
  char outputPath[256];
  printf("Informe o diretorio de destino para as sub-imagens: ");
  printf("\n");
  scanf("%s", outputPath);

  for (int i = 0; i < numSubimages; i++)
  {
    // Definindo as coordenadas de x e y
    x[i] = MIN + rand() % MAX;
    y[i] = MIN + rand() % MAX;
    printf("Coordenada de x: %d\n", x[i]);
    printf("Coordenada de y: %d\n\n", y[i]);

    // Criando sub-imagem
    Image *subimage = extractSubimage(image, x[i], y[i], width, height);

    // Aplicando filtro da média
    // applyMeanFilter(subimage);

    // Enviando para o diretório escolhido
    char outputFilename[256];
    sprintf(outputFilename, "%s/output%d.pgm", outputPath, i + 1);
    writePGM(outputFilename, subimage);
    printf("Subimagem %d extraída com sucesso e salva como '%s'.\n", i + 1, outputFilename);

    freeImage(subimage);
  }

  free(x);
  free(y);
  freeImage(image);

  return 0;
}