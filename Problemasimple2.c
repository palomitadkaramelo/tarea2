#include <stdio.h>
int main()
{
  float radio, area, circunferencia;
  float pi=3.1416;

  printf("Dame el valor del radio de tu circunferencia: ");
  scanf("%f", &radio);

  area= pi * (radio * radio);
  circunferencia= 2 * pi * radio;

  printf("El area es: %.2f \n", area);
  printf("La circunferencia es: %.2f \n", circunferencia);

  return 0;
}
