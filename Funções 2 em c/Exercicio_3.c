#include<stdio.h>
#include<string.h>


char lista_nomes(char lista[][15],char *b)
{
  int i;

  for(i=0;*lista[i];i++)
  {
    if(strcmp(b,lista[i])==0)
    {
      return printf("\nO nome %s esta na posicao %d:",b,i);
      break;
    }
  }
  if(strcmp(b,lista[i])!=0)
  {
    return printf("-1");
  }
}

int main()
{
  char nomes[5][15],buscar[15];
  int contador;

  for(contador=0;contador<5;contador++)
  {
    printf("Digite nome da posicao %d:",contador);
    scanf("%s",nomes[contador]);
  }
  printf("Digite o nome que esta procurando:");
  scanf("%s",buscar);
  lista_nomes(nomes,buscar);

  return 0;
}
