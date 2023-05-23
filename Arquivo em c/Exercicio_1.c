#include<stdio.h>
#include<float.h>

int main()
{
  int aprovados=0,reprovados=0,qtd_alunosR=0;
  float nota,soma_reprovados=0.0,maior_n,menor_n=FLT_MAX,qtd_alunos;
  FILE *arqEntrada,*arqSaida;

  arqEntrada=fopen("Notas.txt","r");
  if(arqEntrada==NULL)
  {
    printf("\nErro na abertura de arquivo!\n\n");
    return 1;
  }
  else
  {
    fscanf(arqEntrada,"%f",&nota);
    while(!feof(arqEntrada))
    {
      if(nota>maior_n)
      {
        maior_n=nota;
      }
      if(nota<menor_n)
      {
        menor_n=nota;
      }
      if(nota>=7.0)
      {
        aprovados++;
      }
      if(nota<7.0)
      {
        soma_reprovados=soma_reprovados+nota;
        qtd_alunosR++;
        reprovados++;
      }
      if(nota<=10.0)
      {
        qtd_alunos++;
      }
      fscanf(arqEntrada,"%f",&nota);
    }
  }
    fclose(arqEntrada);
    arqSaida=fopen("Resultados.txt","w");
    if(arqSaida==NULL)
    {
      printf("\nErro na abertura de arquivo!\n\n");
      return 1;
    }
    else
    {
      fprintf(arqSaida,"Maior nota = %.1f\n\n",maior_n);
      fprintf(arqSaida,"Menor nota = %.1f\n\n",menor_n);
    }
    fclose(arqSaida);
    arqSaida=fopen("Aprovados.txt","w");
    if(arqSaida==NULL)
    {
      printf("\nErro na abertura de arquivo!\n\n");
      return 1;
    }
    else
    {
      fprintf(arqSaida,"Numero de alunos aprovados = %d\n\n",aprovados);
    }
    fclose(arqSaida);
    arqSaida=fopen("Reprovados.txt","w");
    if(arqSaida==NULL)
    {
      printf("\nErro na abertura de arquivo!\n\n");
      return 1;
    }
    else
    {
      fprintf(arqSaida,"Media dos alunos reprovados = %.1f\n\n",soma_reprovados/qtd_alunosR);
    }
    fclose(arqSaida);
    arqSaida=fopen("Porcentagem.txt","w");
    if(arqSaida==NULL)
    {
      printf("\nErro na abertura de arquivo!\n\n");
      return 1;
    }
    else
    {
      fprintf(arqSaida,"Porcentagem de alunos aprovados = %.0f%%\n\n",(aprovados/qtd_alunos)*100);
      fprintf(arqSaida,"Porcentagem de alunos reprovados = %.0f%%\n\n",(reprovados/qtd_alunos)*100);
    }
    fclose(arqSaida);

  return 0;
}
