#include <stdio.h>
int main()
{
  int num, pos=0, neg=0, nulo=0, cont=1;
  printf("====POSITIVO, NEGATICO, NULO====\n");
  printf("Ingrese el numero \n");
  
  while(cont<=100)
  {
    scanf("%d", &num);
    if (num>0)
    {
      pos=pos+1;
    }
    else
    {
      if(num<0)
      {
        neg=neg+1;
      }
      else
      {
        nulo=nulo+1;
      }
    }
    
  cont++;
  }
  printf("Dentro de los 100 valores se encuentran: \n");
  printf("numeros positivos: %d \n", pos);
  printf("numeros negativos: %d \n", neg);
  printf("numeros nulos: %d \n", nulo);
  
  return 0;
}
