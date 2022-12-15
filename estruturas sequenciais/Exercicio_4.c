#include<stdio.h>

int main()
{
  int a,b,c;

  printf("Escreva o valor de a:");
  scanf("%d",&a);
  printf("Escreva o valor de b:");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("Valor de a:%d\nValor de b:%d\n\n",a,b);

  return 0;
}
