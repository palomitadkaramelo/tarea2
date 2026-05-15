#include <stdio.h>
int main ()
{
int monto, monto_final=0;
  printf("====PAGO CON DESCUENTO====\n");
  printf("Ingrese el precio del producto que desea adquirir: \n");
  scanf("%d",&monto);
  if(monto>2500)
  {
    monto_final=monto-(monto*0.08);
    printf("Su producto cuenta con descuento: \n");
    printf("El monto final con descuento aplicado es: %d\n$",monto_final);
  }
  else 
  {
    printf("No aplica descuento para montos menores a 2500$\n");
    printf("El monto final es: %d \n", monto);
  }

return 0;
}
