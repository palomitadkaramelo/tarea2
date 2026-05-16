#include <stdio.h>

int main()
{
  int pares[100], indice=0;
  int num = 2;
  printf("==== ARREGLO DE LOS 100 PRIMEROS NUMEROS PARES ====\n");
  for(indice = 0; indice <= 99; indice++)
  {
    pares[indice] = numero; 
    numero = numero + 2;    
  }
  printf("Los 100 primeros numeros pares guardados son:\n");
  for(indice = 0; indice <= 99; indice++)
  {
    printf("%d  ", pares[indice]);
  }
  return 0;
}
