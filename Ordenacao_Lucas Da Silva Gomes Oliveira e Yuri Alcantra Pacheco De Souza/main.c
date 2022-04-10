#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "OrderSearch.h"

#define const 3

void main()
{
  int opcao, pos=0, i, n=0, aux=9;
  char nomes[const][50], busca[50];
  
  do
  {
  	system("cls");
	printf("1 - INSERIR NOME\n");
    printf("2 - ORDENAR NOME\n");
    printf("3 - PESQUISAR NOME\n");
    printf("4 - EXIBIR NOME\n");
    printf("5 - ENCERRRAR PROGRAMA\n");
    printf("\nQual opcao deseja?: ");
    scanf("%d",&opcao);
    switch (opcao)
    {
        case 1 :
        	    if (pos < const)
        	    {
                    printf("\nEntre com o nome: ");
                    scanf("%s", nomes[pos]);
                    strcpy (busca,nomes[pos]);
                    aux = pesquisabinaria(n, nomes, busca);
                    if(aux==0)
                    {
                        pos++;
                    	printf("\nNome adicionado com sucesso!\n");
                    }
                    else
                    {
                    	printf("\nNome ja existe no vetor!\n");
					}
                }
                else
	            {
		            printf("\nVetor cheio!\n");
	            }
	            n = pos;
                insertsort(nomes, n);
            break;
        case 2 :
				n = pos;
                insertsort(nomes, n);
                printf("\nNomes ordenados com sucesso!\n");
	        break;
        case 3 :
                printf("\nDigite o nome que deseja encontrar: ");
                scanf("%s", busca);
                n=pos;
                aux = pesquisabinaria(n, nomes, busca);
                if(aux==1)
                {
                    printf("\nNome encontrado!\n");
                }
                else
                {
                    printf("\nNome nao encontrado!\n");
                }
	        break;
        case 4 :
                if(pos==0)
                {
                    printf("\nNao ha nomes no vetor.\n");
                }
        
                else
                {
                    n=pos;
                    for(i=0;i!=n;i++)
                    {
                        printf("%s\n", nomes[i]);
                    }
                } 
	        break;
    }
    printf("\nAperte qualquer tecla!");
	getch();
  }while(opcao!=5);
}

