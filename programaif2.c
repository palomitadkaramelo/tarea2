#include <stdio.h>
int main()
  {
    float sueldo, sueldototal;
    printf("====SUELDO====\n");
    printf("Ingrese la cantidad de su sueldo: \n");
    scanf("%f", &sueldo);
    if(sueldo<1000)
    {
      sueldototal= (sueldo * 0.15)+ sueldo;
      printf("Su sueldo aplica para un aunmento del 15% \n");
      printf("El sueldo total es de: %.2f \n", sueldototal);
    } 
    else
    {
      sueldototal=(sueldo* 0.12) + sueldo;
      printf("Su sueldo aplica para un aunmento del 12% \n");
      printf("El sueldo total es de: %.2f \n", sueldototal);
    }
  return 0;
}
  
