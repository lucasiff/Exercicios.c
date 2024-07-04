#include<stdio.h>

int main()
{
  float salario_mensal,reajuste,aumento,novo_salario;

  printf("Digite o seu salario mensal:");
  scanf("%f",&salario_mensal);
  printf("Digite a porcentagem de aumento:");
  scanf("%f",&aumento);
  reajuste=salario_mensal*aumento/100;
  novo_salario=reajuste+salario_mensal;
  printf("O seu novo salario e = %f\n",novo_salario);

  return 0;
}
