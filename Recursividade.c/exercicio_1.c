#include<stdio.h>
#include<math.h>

int pot(int x,int y)
{
  if(y==0)
  {
    return 1;
  }
  else
  {
    if(y==1)
    {
      return x;
    }
    else
    {
      return x*pot(x,y-1);
    }
  }
}

int main()
{
  int numero,potencia;

  printf("Digite um numero:");
  scanf("%d",&numero);
  printf("Digite uma potencia para o numero:");
  scanf("%d",&potencia);
  printf("%d",pot(numero,potencia));

  return 0;
}
