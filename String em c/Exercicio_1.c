#include<stdio.h>
#include<string.h>

int main()
{
  char nome[100],sexo[100],contador=0;
  int totalM=0,totalF=0;

  for(contador=1;contador<=10;contador++)
  {
    printf("Digite o seu nome:");
    scanf("%s",nome);
    printf("Digite o seu sexo:");
    scanf("%s",sexo);

    if(strcmp(sexo,"masculino")==0)
    {
      totalM++;
    }
    else
    {
      if(strcmp(sexo,"feminino")==0)
      {
        totalF++;
      }
    }
  }
  printf("\ntotal de pessoas do sexo masculino:%d\n",totalM);
  printf("\ntotal de pessoas do sexo feminino:%d\n",totalF);

  return 0;
}
