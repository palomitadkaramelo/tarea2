#include <stdio.h>
int main()
{
  int indice=0, dimension;
  int pos=0, neg=0, nulos=0; 

  printf("====POSITIVOS, NEGATIVOS, NULOS====\n"); 
  printf("¿Cuántos elementos va a tener tu arreglo?: ");
  scanf("%d", &dimension);

  if(dimension>=1)
  {
    int arreglo[dimension];
    for(indice=0; indice<= dimension-1; indice++)
    {
      printf("Introduce el numero entero para el elemento %d: ", indice);
      scanf("%d", &arreglo[indice]);  
    }
    for(indice = 0 ; indice <= dimension-1 ; indice++)
    {
      if(arreglo[indice] > 0)
      {
        pos = pos + 1;
      }
      else
      {
        if(arreglo[indice] < 0)
        {
          neg = neg + 1;
        }
        else
        {
          nulos = nulos + 1; 
        }
      }
    }

    printf("\nResultados del analisis:\n");
    printf("Numeros positivos: %d\n", pos);
    printf("Numeros negativos: %d\n", neg);
    printf("Numeros nulos (ceros): %d\n", nulos);
  }
  else 
  {
    printf("Error: La cantidad de elementos debe ser por lo menos 1.\n"); 
  }

  return 0;
}
