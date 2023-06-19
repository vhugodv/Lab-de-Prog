#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct
{
  int width;
  int height;
  int max_gray_value;
  int **pixels;
} Image;

Image *readPGM(const char *);
void writePGM(const char *, const Image *);
void freeImage(Image *);
Image *extractSubimage(const Image *, int , int , int , int );
void applyMeanFilter(Image *);
void coordenadas(int , int , int );