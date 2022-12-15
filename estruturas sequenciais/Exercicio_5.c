#include<stdio.h>

int main()
{
  int so,v,t,s;

  printf("Escreva o valor do espaco inicial:");
  scanf("%d",&so);
  printf("Escreva o valor da velocidade:");
  scanf("%d",&v);
  printf("Escreva o valor de tempo:");
  scanf("%d",&t);
  s=so+v*t;
  printf("O valor do espaco percorrido e:%d\n",s);

  return 0;
}
