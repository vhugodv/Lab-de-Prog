/*
Aluno: Victor Hugo Santos Silva
Matricula: 20222045050310
Avaliacao 04: Trabalho Final
2023.1 - Prof. Daniel Ferreira
Compilador: gcc versao 6.3.0-1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

#define MAX 100
#define MIN 0

typedef struct
{
  int largura;
  int altura;
  int max_gray_value;
  int **pixels;
} Image;

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
  fscanf(file, "%d %d\n", &image->largura, &image->altura);
  fscanf(file, "%d\n", &image->max_gray_value);

  // Alocando memória para os pixels
  image->pixels = (int **)malloc(image->altura * sizeof(int *));
  for (int i = 0; i < image->altura; i++)
  {
    image->pixels[i] = (int *)malloc(image->largura * sizeof(int));
  }

  // Lendo os pixels da imagem
  for (int i = 0; i < image->altura; i++)
  {
    fread(image->pixels[i], sizeof(int), image->largura, file);
  }

  fclose(file);
  return image;
}

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
  fprintf(file, "%d %d\n", image->largura, image->altura);
  fprintf(file, "%d\n", image->max_gray_value);

  // Escrevendo pixels
  for (int i = 0; i < image->altura; i++)
  {
    fwrite(image->pixels[i], sizeof(int), image->largura, file);
  }

  fclose(file);
}

void freeImage(Image *image)
{
  for (int i = 0; i < image->altura; i++)
  {
    free(image->pixels[i]);
  }
  free(image->pixels);
  free(image);
}

Image *extractSubimage(const Image *image, int x, int y, int largura, int altura)
{
  Image *subimage = (Image *)malloc(sizeof(Image));
  subimage->largura = largura;
  subimage->altura = altura;
  subimage->max_gray_value = image->max_gray_value;

  // Alocando memória para os pixels da subimagem
  subimage->pixels = (int **)malloc(altura * sizeof(int *));
  for (int i = 0; i < altura; i++)
  {
    subimage->pixels[i] = (int *)malloc(largura * sizeof(int));
  }

  // Copiando os pixels da área selecionada
  for (int i = 0; i < altura; i++)
  {
    for (int j = 0; j < largura; j++)
    {
      subimage->pixels[i][j] = image->pixels[y + i][x + j];
    }
  }

  return subimage;
}

void applyMeanFilter(Image *image)
{
  Image *filteredImage = (Image *)malloc(sizeof(Image));
  filteredImage->largura = image->largura;
  filteredImage->altura = image->altura;
  filteredImage->max_gray_value = image->max_gray_value;

  // Alocando memória para os pixels da imagem filtrada
  filteredImage->pixels = (int **)malloc(filteredImage->altura * sizeof(int *));
  for (int i = 0; i < filteredImage->altura; i++)
  {
    filteredImage->pixels[i] = (int *)malloc(filteredImage->largura * sizeof(int));
  }

  // Aplicando o filtro da média
  for (int i = 0; i < filteredImage->altura; i++)
  {
    for (int j = 0; j < filteredImage->largura; j++)
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
          if (nx >= 0 && nx < filteredImage->largura && ny >= 0 && ny < filteredImage->altura)
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
  for (int i = 0; i < filteredImage->altura; i++)
  {
    for (int j = 0; j < filteredImage->largura; j++)
    {
      image->pixels[i][j] = filteredImage->pixels[i][j];
    }
  }

  // Liberando memória
  freeImage(filteredImage);
}

void coordenadas1(int *x, int *y, int num_sub_images)
{
  char coords[1000];

  // Abrindo o arquivo em modo escrita
  FILE *file;
  file = fopen("coordenadas1.txt", "w+");
  fclose(file);

  file = fopen("coordenadas1.txt", "w");
  if (file == NULL)
  {
    puts("Erro ao abrir o arquivo.");
    exit(2);
  }

  // Escrevendo coordenadas no arquivo
  for (int k = 0; k < num_sub_images; k++)
  {
    sprintf(coords, "sub_imagem%d, coord_x%d: %d, coord_y%d: %d \n", k + 1, k + 1, x[k], k + 1, y[k]);
    printf("%s", coords);

    fputs(coords, file);
  }

  // Fechando arquivo
  fclose(file);
}

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
  int num_sub_images = 1;
  int largura = 100, altura = 100;

  // Alocando memória
  int *x = (int *)malloc(num_sub_images * sizeof(int));
  int *y = (int *)malloc(num_sub_images * sizeof(int));

  // Solicitando e criando o diretório de destino
  char outputPath[256];
  printf("Informe o diretorio de destino para as sub-imagens: ");
  printf("\n");
  scanf("%s", outputPath);
  CreateDirectory(outputPath, NULL);

  for (int i = 0; i < num_sub_images; i++)
  {
    // Definindo as coordenadas de x e y
    x[i] = MIN + rand() % MAX;
    y[i] = MIN + rand() % MAX;
    printf("Coordenada de x: %d\n", x[i]);
    printf("Coordenada de y: %d\n\n", y[i]);

    // Criando sub-imagem
    Image *subimage = extractSubimage(image, x[i], y[i], largura, altura);

    // Aplicando filtro da média
    // applyMeanFilter(subimage);

    // Enviando para o diretório escolhido
    char outputFilename[256];
    sprintf(outputFilename, "%s/sub_imagem%d.pgm", outputPath, i + 1);
    writePGM(outputFilename, subimage);
    printf("Subimagem %d extraida com sucesso e salva como '%s'.\n", i + 1, outputFilename);

    // Criando arquivo de texto com as coordenadas de x e y
    coordenadas1(x, y, num_sub_images);

    freeImage(subimage);
  }

  free(x);
  free(y);
  freeImage(image);

  return 0;
}