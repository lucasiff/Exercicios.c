#include<stdio.h>

int MDC(int n1, int n2)
{
  if(n1==n2)
  {
    return n1;
  }
  else
  {
    if(n1>n2)
    {
      return MDC(n1-n2,n2);
    }
    else
    {
      if(n2>n1)
      {
        return MDC(n2-n1,n1);
      }
    }
  }
}

int main()
{
  int a,b;

  printf("Digite o primeiro numero:");
  scanf("%d",&a);
  printf("Digite o segundo numero:");
  scanf("%d",&b);
  printf("O MDC e:%d",MDC(a,b));

  return 0;
}
