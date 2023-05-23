#include<stdio.h>
#include<stdlib.h>

int main()
{
  float preco[5],valor_arrecadado[5],valor_total;
  int quantidade[5],contador,soma=0;

  for(contador=0;contador<2;contador++)
  {
    printf("Digite o preco do produto R$:");
    scanf("%f",&preco[contador]);
    printf("Digite a quantidade de produtos vendidos:");
    scanf("%d",&quantidade[contador]);
    soma=preco[contador]*quantidade[contador];
    valor_arrecadado[contador]=soma;
  }
  for(contador=0;contador<2;contador++)
  {
    printf("\nValor arrecadado com cada produto:%.1f",valor_arrecadado[contador]);
    valor_total+=valor_arrecadado[contador];
  }
  printf("\nValor total arrecadado:%.1f",valor_total);

  return 0;
}
