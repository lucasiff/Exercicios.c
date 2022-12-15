#include<stdio.h>

int main()
{
  float altura;
  int peso,peso_ideal;
  char sexo;

  printf("Digite o seu sexo:Ex M ou m (para masculino) F ou f (para feminino):");
  scanf("%c",&sexo);
  printf("Digite a sua altura:Ex 1.80:");
  scanf("%f",&altura);
  printf("Digite o seu peso atual:Ex 80kg:");
  scanf("%d",&peso);
  if(sexo=='M'||sexo=='m')
  {
    peso_ideal=(72.7*altura)-58;
    printf("\nO seu peso ideal e = %dkg",peso_ideal);
  }
  else
  {
    if(sexo=='F'||sexo=='f')
    {
      peso_ideal=(62.1*altura)-44.7;
      printf("O seu peso ideal e = %dkg\n",peso_ideal);
    }
  }
      if(peso>peso_ideal+1)
      {
        printf("\nVoce esta acima do seu peso ideal:");
      }
      else
      {
        if(peso<peso_ideal-1)
        {
          printf("\nVoce esta abaixo do seu peso ideal:");
        }
        else
        {
          if(peso==peso_ideal||peso==peso_ideal+1||peso==peso_ideal-1)
          {
            printf("\nVoce esta dentro do seu peso ideal:");
          }
        }
      }

  return 0;
}
