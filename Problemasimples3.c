#include <stdio.h>
int main()
{
  float dolares, pesos;
  float dolar=11.96;
  printf("====BANCO CONVERTIDOR==== \n");
  printf("Ingrese la cantidad de dolares para convertir a pesos: \n");
  scanf("%f", &dolares);

  pesos= dolares * dolar;

  printf(" Tienes %.2f pesitos ", pesos);

  return 0;
}
