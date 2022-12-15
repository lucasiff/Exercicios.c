#include<stdio.h>

int main()
{
  int numero,contador,totaln=0;
  float soma;

  for(contador=1;contador<=20;contador++)
  {
    printf("Digite um numero:");
    scanf("%d",&numero);
    if(numero>=0)
    {
      soma+=numero;
    }
    else
    {
      totaln++;numero;
    }
  }
  printf("A soma dos numeros positivos:%.2f",soma);
  printf("\nO total de numeros negativos:%d",totaln);

  return 0;
}
