#include<stdio.h>

int soma(int n1,int n2,int n3)
{
  int s;
  s=n1+n2+n3;

  return s;
}

int main()
{
  int numero1,numero2,numero3;

  printf("Digite o primeiro numero:");
  scanf("%d",&numero1);
  printf("Digite o segundo numero:");
  scanf("%d",&numero2);
  printf("Digite o terceiro numero:");
  scanf("%d",&numero3);
  printf("Soma:%d",soma(numero1,numero2,numero3));

  return 0;
}
