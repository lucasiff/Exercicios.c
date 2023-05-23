#include<stdio.h>

int main()
{
  char nome_delegacao[5][15];
  int linha,coluna,numero_delegacoes=5;
  float altura[10][5],maior_altura;

  for(coluna=0;coluna<5;coluna++)
  {
    printf("Digite o nome de delegacao %d/%d:",coluna+1,numero_delegacoes);
    scanf("%s",nome_delegacao[coluna]);
     for(linha=0;linha<10;linha++)
     {
       printf("Digite a altura do atleta:");
       scanf("%f",&altura[linha][coluna]);
     }
  }
  for(coluna=0;coluna<5;coluna++)
  {
    maior_altura=0;
    printf("\nDelegacao:%s\n",nome_delegacao[coluna]);
    for(linha=0;linha<10;linha++)
    {
      if(altura[linha][coluna]>maior_altura)
      {
        maior_altura=altura[linha][coluna];
      }
    }
    printf("Maior altura:%.2f\n",maior_altura);
  }

  return 0;
}
