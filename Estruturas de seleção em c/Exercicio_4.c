#include<stdio.h>

int main()
{
  char letra;

  printf("Digite uma letra:");
  scanf("%c",&letra);
  if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
  {
    printf("A letra e uma vogal:\n");
  }
  else
  {
    printf("A letra e uma consoante\n");
  }

  return 0;
}
