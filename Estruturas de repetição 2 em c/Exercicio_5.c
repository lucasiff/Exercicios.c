#include<stdio.h>

int main()
{
  int numero,contador,resultado=0;

  printf("Digite um numero:");
  scanf("%d",&numero);
  for(contador=2;contador<=numero/2;contador++)
  {
    if(numero%contador==0)
    {
      resultado++;
      break;
    }
  }
  if(resultado==0)
  {
    printf("O numero %d e primo:",numero);
  }
   else
    {
      printf("\nO numero %d nao e primo:",numero);
    }

  return 0;
}
