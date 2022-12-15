#include<stdio.h>

int main()
{
  int numero1,numero2,contador,num1,num2,soma=0;

  printf("Digite o primeiro numero:");
  scanf("%d",&numero1);
  printf("Digite o segundo numero:");
  scanf("%d",&numero2);
  if(numero1<numero2)
  {
    num1=numero1;
    num2=numero2;
  }
  else
  {
    num1=numero2;
    num2=numero1;
  }
  printf("Soma:");
  for(contador=0;contador!=num1;contador++)
  {
    soma=soma+num2;
    printf("+%d",num2);
  }
  printf("=%d",soma);

  return 0;
}
