#include<stdio.h>

int main()
{
  int contador,v_numero[10];
  float media_N,soma_N=0;

  for(contador=0;contador<10;contador++)
  {
    printf("Digite o numero da posicao %d:",contador);
    scanf("%d",&v_numero[contador]);
    soma_N+=v_numero[contador];
  }
  media_N=soma_N/10.0;
  printf("\nA media dos numeros:%.1f",media_N);
  for(contador=0;contador<10;contador++)
  {
    if(v_numero[contador]>media_N)
    {
      printf("\nnumeros acima da media:numero:%d na posicao:%d",v_numero[contador],contador);
    }
  }

  return 0;
}
