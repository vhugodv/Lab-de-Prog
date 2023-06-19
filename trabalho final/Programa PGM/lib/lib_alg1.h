#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

typedef struct
{
  int largura;
  int altura;
  int max_gray_value;
  int **pixels;
} Image;

Image *readPGM(const char *);
void writePGM(const char *, const Image *);
void freeImage(Image *);
Image *extractSubimage(const Image *, int, int, int, int);
void applyMeanFilter(Image *);
void coordenadas1(int, int, int);