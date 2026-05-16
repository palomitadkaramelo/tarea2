#include <stdio.h>
int main()
{
  int indice=0, dimension, cont=0, num;
  printf("====BUSCAR NUMERO EN ARREGLO====\n");
  printf("Ingrese cuantos elementos tendra su arreglo: \n");
  scanf("%d", &dimension);

  if(dimension>=1)
  {
    int arreglo[dimension];
    for(indice=0; indice<= dimension-1; indice++)
    {
      printf("Introduce el numero entero para el elemento %d del arreglo: \n", indice);
      scanf("%d", &arreglo[indice]);
    }
    printf("¿Qué número entero deseas buscar dentro del arreglo?: \n");
    scanf("%d", &num);
    for (indice = 0 ; indice <= dimension-1 ; indice++) 
    {
      if (arreglo[indice] == num) 
       {
          cont = cont + 1; 
       }
    }
    printf("El numero %d se encuentra %d veces dentro del arreglo.\n", num, cont);
  }
  else 
  {
    printf("Error: La cantidad de elementos debe ser por lo menos 1.\n"); 
  }

  return 0; 
}
