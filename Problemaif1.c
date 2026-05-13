#include <stdio.h>
int main ()
{
int Monto, monto_final=0;
  printf("====ALGORITMO PAGO CON DESCUENTO====\n");
  printf("Ingrese el precio del producto que desea adquirir\n");
  scanf("%d",&Monto);
  if(Monto>2500)
  {
    monto_final=Monto-(Monto*0.08);
  } else 
  {
    printf("No aplica descuento para montos menores a 2500$\n");
  }
  
printf("El monto final con descuento aplicado es %d\n$",monto_final);

return 0;
}
