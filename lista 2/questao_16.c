#include <stdio.h>

int main()
{
  int n = 0;
  int soma_tres = 0, soma_cinco = 0;

  while (n <= 200)
  {
    if (n <= 100 && n % 3 == 0)
      soma_tres += n;
    if (n > 100 && n <= 200 && n % 5 == 0)
      soma_cinco += n;
    n += 1;
  }

  printf("O somatorio dos numeros divisiveis por 3 sera: %d\n", soma_tres);
  printf("O somatorio dos numeros divisiveis por 5 sera: %d", soma_cinco);

  return 0;
}