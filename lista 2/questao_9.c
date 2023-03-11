#include <stdio.h>

int main()
{
  int term1 = 1, term2 = 1;
  int countfib = 0;
  int fib = 20;

  puts("Os termos da sequencia fibonacci ate 20 sao: ");

  while (countfib < 18)
  {
    fib = term1 + term2;
    term1 = term2;
    term2 = fib;
    countfib += 1;
    printf("%d| ", term2);
  }

  return 0;
}