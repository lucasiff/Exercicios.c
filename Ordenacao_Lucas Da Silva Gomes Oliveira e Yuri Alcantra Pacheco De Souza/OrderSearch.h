#include<stdio.h>
#include<string.h>



char insertsort(char nomes[][50], int n)
{
   int i,j,k;
   char aux[50];

   for(i=0;i<=n-1;i++)
   {
     for(j=i+1;j<=n-1;j++)
     {
       k=strcmp(nomes[i],nomes[j]);
       if(k>0)
       {
         strcpy(aux,nomes[i]);
         strcpy(nomes[i],nomes[j]);
         strcpy(nomes[j],aux);
       }
     }
   } 
}  

int pesquisabinaria(int n, char nomes[][50], char busca[50])
{
    int i, esq, dir, meio, retorno=0;
    insertsort(nomes, n);
    esq=0; dir=n-1;

    while(esq<=dir)
    {
        meio=(esq+dir)/2;
        if (strcmp(busca,nomes[meio])==0)
        {
            retorno++;
            return retorno;
        }

        else if(strcmp(busca,nomes[meio])>0)
        {
            esq=meio+1;
        }

        else
        {
            dir=meio-1;
        }
    }
        return retorno;
 }



