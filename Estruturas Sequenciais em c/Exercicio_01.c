#include<stdio.h>


int main()
{
        float celsius, fahrenheint, kelvin;

        printf("escreva a temperatura em graus celsius:");
        scanf("%f",&celsius);
        fahrenheint = celsius*9/5+32;
        kelvin = celsius+273;
        printf("temp.fahrenheint = %.2f\n",fahrenheint);
        printf("temp.kelvin = %.2f\n",kelvin);

        return 0;
}
