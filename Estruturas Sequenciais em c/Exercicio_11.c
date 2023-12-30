#include<stdio.h>

int main()
{
  float salario_mensal,reajuste,aumento,novo_salario;

  printf("Digite o seu salario mensal:");
  scanf("%f",&salario_mensal);
  printf("Digite a porcentagem de aumento:");
  scanf("%f",&aumento);
  novo_salario=salario_mensal*aumento;
  printf("O seu novo salario e = %.3f\n",novo_salario);

  return 0;
}
