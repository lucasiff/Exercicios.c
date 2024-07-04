#include<stdio.h>

int main()
{
  char sexo;

  printf("Digite uma letra ex:(M),(m),(F),(f):");
  scanf("%c",&sexo);
  if(sexo=='M'||sexo=='m')
  {
    printf("Sexo Masculino:\n");
  }
  else
  {
    if(sexo=='F'||sexo=='f')
    {
      printf("Sexo Feminino:\n");
    }
    else
    {
      printf("Sexo invalido:\n");
    }
  }

  return 0;
}
