#include<stdio.h>

int main()
{
  int limite_inferior,limite_superior,contador;
  float soma;

  printf("Digite o limite inferior:");
  scanf("%d",&limite_inferior);
  printf("Digite o limite superior:");
  scanf("%d",&limite_superior);
    if(limite_inferior==limite_superior)
    {
      printf("Valores iguais\n");
    }
    else
    {
      if(limite_inferior<limite_superior)
      {
        printf("\nNumeros pares entre %d e %d\n\n",limite_inferior,limite_superior);
        for(contador=limite_inferior+1;contador<limite_superior;contador++)
          {
            if(contador%2==0)
             {
               printf("%d\n",contador);
               soma=limite_inferior+limite_superior;
              }
           }
        printf("\nSoma = %.2f\n",soma);
       }
     }

 return 0;
}
