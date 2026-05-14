#include <stdio.h>
int main()
{
  float inversion, tasainteres, montototal;

  printf("===== BANCO ======\n");
  printf("Ingrese la cantidad de inversion: \n");
  scanf("%f", &inversion);
  printf("Ingrese la tasa de interes del banco % : \n");
  scanf("%f", &tasainteres);

  montototal=((inversion*tasainteres)/100)+ inversion;

  printf("La ganancia total al final del mes es de: %.2f \n", montototal);

  return 0;
}
