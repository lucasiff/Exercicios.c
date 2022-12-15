#include<stdio.h>

int main()
{
   float valor_1,valor_2,valor_3,peso_1,peso_2,peso_3,resultado_final;

   printf("escreva o primeiro valor:");
   scanf("%f",&valor_1);
   printf("escreva o segundo valor:");
   scanf("%f",&valor_2);
   printf("escreva o terceiro valor:");
   scanf("%f",&valor_3);
   printf("esceva o primeiro peso:");
   scanf("%f",&peso_1);
   printf("escreva o segundo peso:");
   scanf("%f",&peso_2);
   printf("escreva o terceiro peso:");
   scanf("%f",&peso_3);
   resultado_final=valor_1*peso_1+valor_2*peso_2+valor_3*peso_3/peso_1+peso_2+peso_3;
   printf("resultado =%f:\n",resultado_final);

   return 0;
}
