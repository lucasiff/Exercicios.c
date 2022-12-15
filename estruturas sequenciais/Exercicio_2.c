#include<stdio.h>

int main()
{
    int valor_metros,valor_cm;

    printf("escreva o valor em metros:\n");
    scanf("%d",&valor_metros);
     valor_cm=valor_metros*100;
     printf(" %d centimetros:\n",valor_cm);

    return 0;
}
