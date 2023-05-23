#include<stdio.h>

int multiplica(int valor1,int valor2)
{
  int n1,n2,contador,soma=0;

  if(valor1<valor2)
  {
    n1=valor1;
    n2=valor2;
  }
  else
  {
    n1=valor2;
    n2=valor1;
  }
  printf("resultado:");
  for(contador=0;contador!=n1;contador++)
  {
    soma=soma+n2;
    printf("+%d",n2);
  }

  return soma;
}

int main()
{
  int numero1,numero2;

  printf("Digite o primeiro numero:");
  scanf("%d",&numero1);
  printf("Digite o segundo numero:");
  scanf("%d",&numero2);
  printf("=%d",multiplica(numero1,numero2));

  return 0;
}
