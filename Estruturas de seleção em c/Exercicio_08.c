#include<stdio.h>

int main()
{
  int salario,emprestimo;
  float valor_prestacao;

  printf("Digite o seu salario bruto:");
  scanf("%d",&salario);
  printf("Digite o valor da prestacao:");
  scanf("%f",&valor_prestacao);
  if(valor_prestacao<=(salario*30)/100)
  {
    printf("O seu emprestimo foi aprovado:\n");
  }
  else
  {
    printf("O seu emprestimo nao foi aprovado:\n");
  }

  return 0;
}
