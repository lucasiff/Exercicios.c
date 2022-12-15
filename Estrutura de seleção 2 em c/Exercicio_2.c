#include<stdio.h>

int main()
{
  int a,b,c;

  printf("Digite o valor de (a):");
  scanf("%d",&a);
  printf("Digite o valor de (b):");
  scanf("%d",&b);
  printf("Digite o valor de (c):");
  scanf("%d",&c);
  if((a<b)&&(b<c))
  {
    printf("%d %d %d",a,b,c);
  }
  else
  {
    if((a<b)&(a<c))
    {
      printf("%d %d %d",a,c,b);
    }
    else
    {
      if((b<c)&&(a<c))
      {
        printf("%d %d %d",b,a,c);
      }
      else
      {
        if((b<c)&&(c<a))
        {
          printf("%d %d %d",b,c,a);
        }
        else
        {
          if((c<a)&&(b<a))
          {
            printf("%d %d %d",c,b,a);
          }
          else
          {
            if((c<a)&&(a<b))
            {
              printf("%d %d %d",c,a,b);
            }
          }
        }
      }
    }
  }

  return 0;
}
