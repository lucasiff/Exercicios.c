#include<stdio.h>

int main()
{
  float salario_fixo,vendas,salario_total;

  printf("Digite o seu salario:");
  scanf("%f",&salario_fixo);
  printf("Digite o total de vendas:");
  scanf("%f",&vendas);
  if(vendas<=1500)
  {
    salario_total=salario_fixo+vendas*0.03;
    printf("O seu salario totol e = R$%f\n",salario_total);
  }
  else
  {
    salario_total=salario_fixo+vendas*0.05;
    printf("o seu salario total e = R$%f\n",salario_total);
  }

  return 0;
}      
