#include<stdio.h>

int main()
{
   int valor_1,valor_2,valor_3,peso_1,peso_2,peso_3,media_final;

   printf("escreva o primeiro valor:");
   scanf("%d",&valor_1);
   printf("escreva o segundo valor:");
   scanf("%d",&valor_2);
   printf("escreva o terceiro valor:");
   scanf("%d",&valor_3);
   printf("esceva o primeiro peso:");
   scanf("%d",&peso_1);
   printf("escreva o segundo peso:");
   scanf("%d",&peso_2);
   printf("escreva o terceiro peso:");
   scanf("%d",&peso_3);
   media_final=((valor_1*peso_1)+(valor_2*peso_2)+(valor_3*peso_3))/(peso_1+peso_2+peso_3);
   printf("media final =%d:\n",media_final);

   return 0;
}
