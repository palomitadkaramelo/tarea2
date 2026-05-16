#include <stdio.h>
int main()
{
  int sum=0, cont=10;
  while (cont<=50)
  {
    sum=sum+cont;
    cont=cont+2;
  }
  printf("La suma de los numeros pares comprendidos entre el 10 y 50 es: %d \n", sum);
return 0;
}
