#include <stdio.h>

int main()
{
  int count = 1, mult = 1;
  int impar;

  while (count <= 10)
  {
    if (count % 2 == 1)
    {
      while (count <= 10)
      {
        mult *= count;
        printf("O fatorial do numero %d sera: %d\n", count, mult);
        count += 1;
      }
    }
    count += 1;
  }

  return 0;
}