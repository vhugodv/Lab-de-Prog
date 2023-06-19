#include "lib/lib_alg2.h"

int main()
{
  // Informando diretorio das sub-imagens
  char *diretorio;
  printf("Informe o diretorio das sub-imagens:\n");
  scanf("%s", diretorio);
  const char *imageFilename = "input.pgm";
  const char *subimagesDirectory = diretorio;

  Image *image = readPGM(imageFilename);
  if (image == NULL)
  {
    return 1;
  }

  char **subimageFiles;
  int num_sub_images;

  listFilesInDirectory(subimagesDirectory, &subimageFiles, &num_sub_images);

  for (int i = 0; i < num_sub_images; i++)
  {
    char subimagePath[256];
    sprintf(subimagePath, "%s/%s", subimagesDirectory, subimageFiles[i]);

    Image *subimage = readPGM(subimagePath);
    if (subimage == NULL)
    {
      continue;
    }

    // Achando x e y na imagem original
    int matchX, matchY;
    findMatchingRegion(image, subimage, &matchX, &matchY);
    printf("Sub-imagem: %s\n", subimageFiles[i]);
    printf("Regiao correspondente encontrada na posicao (%d, %d)\n", matchX, matchY);

    // Criando arquivo de texto com as coordenadas de x e y
    coordenadas2(matchX, matchY, num_sub_images);

    freeImage(subimage);
  }

  free(subimageFiles);
  freeImage(image);

  return 0;
}