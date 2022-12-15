#include<stdio.h>

int main()
{
  float peso_terra,peso_planeta;
  int numero;

  printf("Digite o valor de um peso:");
  scanf("%f",&peso_terra);
  printf("Digite o numero de um planeta: Mercurio(1),Venus(2),Marte(3),Jupiter(4),Saturno(5),Urano(6):");
  scanf("%d",&numero);
  if(numero== 1)
  {
    peso_planeta=(peso_terra/10)*0.37;
    printf("O valor desse peso em Mercurio e:%.2f\n",peso_planeta);
  }
  else
  {
    if(numero== 2)
    {
      peso_planeta=(peso_terra/10)*0.88;
      printf("O valor desse peso em Venus e:%.2f\n",peso_planeta);
    }
    else
    {
      if(numero== 3)
      {
        peso_planeta=(peso_terra/10)*0.38;
        printf("O valor desse peso em Marte e:%.2f\n",peso_planeta);
      }
      else
      {
        if(numero== 4)
        {
          peso_planeta=(peso_terra/10)*2.64;
          printf("O valor desse peso em Jupiter e:%.2f\n",peso_planeta);
        }
        else
        {
          if(numero== 5)
          {
            peso_planeta=(peso_terra/10)*1.15;
            printf("O valor desse peso em Saturno e:%.2f\n",peso_planeta);
          }
          else
          {
            if(numero== 6)
            {
              peso_planeta=(peso_terra/10)*1.17;
              printf("O valor desse peso em Urano e:%.2f\n",peso_planeta);
            }
          }
        }
      }
    }
  }
  return 0;
}
