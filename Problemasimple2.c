#include <stdio.h>
int main()
{
  float radio, area, circunferencia;
  float pi=3.1416;

  printf("====CALCULADORA DE CIRCUNFERENCIAS==== \n");
  printf("Dame el valor de radio de tu circunferencia: \n");
  scanf("%f", &radio);

  area= pi * (radio * radio);
  circunferencia= 2 * pi * radio;

  printf("El area es: %.2f \n", area);
  printf("La circunferencia es: %.2f \n", circunferencia);

  return 0;
}
