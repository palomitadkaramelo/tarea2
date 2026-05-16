#include <stdio.h>
int main()
{
  int num, indice=0, suma=0;
  printf("==== SUMA DE UN ARREGLO CON TAMANO VARIABLE ====\n");
  printf("¿Cuantos elementos va a tener tu arreglo?: ");
  scanf("%d", &num);

  if(num>=1)
{
  int arreglo[num];
  for (indice = 0 ; indice <= num-1 ; indice++) 
  { 
    printf("Dar un numero entero para el elemento %d: ", indice);
    scanf("%d", &arreglo[indice]);
  }
  for (indice = 0 ; indice <= num-1 ; indice++) 
  {
    suma = suma + arreglo[indice]; 
  }
  printf("\nLa suma de los %d elementos es: %d\n", num, suma);
}
  else 
  {
    printf("Error: La cantidad de elementos debe ser por lo menos 1.\n"); 
  }

    return 0; 
}
