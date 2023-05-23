#include<stdio.h>

int divisivel(int n1,int n2)
{
  if(n1%n2==0)
  {
    return printf("1");
  }
  else
  {
    return printf("0");
  }
}

  int main()
  {
    int x,y;

    printf("Digite o valor de x:");
    scanf("%d",&x);
    printf("Digite o valor de y:");
    scanf("%d",&y);
    divisivel(x,y);

    return 0;
  }
