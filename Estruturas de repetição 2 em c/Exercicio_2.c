#include<stdio.h>

int main()
{
  int numero,contador,totalpar=0,totalimpar=0;

  for(contador=1;contador<=20;contador++)
  {
    printf("Digite um numero:");
    scanf("%d",&numero);
    if(numero%2==0)
    {
      totalpar++;numero;
    }
    else
    {
      totalimpar++;numero;
    }
  }
  printf("Total de numeros pares:%d",totalpar);
  printf("\nTotal de numeros impares:%d",totalimpar);

  return 0;
}
