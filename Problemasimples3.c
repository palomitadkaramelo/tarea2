#include <stdio.h>
int main()
{
  float dolares, pesos;
  float dolar=11.96;

  printf(" Dame la cantidad de dolares que tienes para decirte cuanto dinero en pesos tienes: ");
  scanf("%f", &dolares);

  pesos= dolares * dolar;

  printf(" Tienes %.2f pesitos ", pesos);

  return 0;
}
