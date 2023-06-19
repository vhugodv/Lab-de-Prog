#include "lib_alg1.h"

void freeImage(Image *image)
{
  for (int i = 0; i < image->height; i++)
  {
    free(image->pixels[i]);
  }
  free(image->pixels);
  free(image);
}