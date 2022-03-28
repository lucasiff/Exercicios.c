#include<stdio.h>

int fibonacci(int n)
{
  if(n==1||n==2)
  {
    return 1;
  }
  else
  {
    return fibonacci(n-1)+fibonacci(n-2);
  }
}

int main()
{
  int contador;

  for(contador=1;contador<=10;contador++)
  {
    printf("\n%d\n",fibonacci(contador));
  }

return 0;
}
