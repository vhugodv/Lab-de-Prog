#include <stdio.h>

int main()
{
  float salario_bruto, valor_hora, salario_liquido, horas_trabalhadas, desconto;

  printf("Digite o valor da hora aula: ");
  scanf("%f", &valor_hora);
  printf("Digite o numero de horas trabalhadas: ");
  scanf("%f", &horas_trabalhadas);
  printf("Digite desconto do INSS(%%): ");
  scanf("%f", &desconto);

  salario_bruto = valor_hora * horas_trabalhadas;
  salario_liquido = salario_bruto - salario_bruto * (desconto / 100);

  printf("Salario bruto: %.2f\n", salario_bruto);
  printf("Salario liquido: %.2f\n", salario_liquido);

  return 0;
}