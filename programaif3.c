#include <stdio.h>
int main()
{
  float precio, preciototal, distancia, distanciatotal, estancia;

  printf ("==== COTIZACIÓN DE VIAJE==== \n");
 
  printf ("Ingrese la distancia de ida del viaje km: \n");
  scanf ("%f", &distancia );
  distanciatotal= distancia * 2;
  printf("ingrese los días de estancia: \n");
  scanf("%f", &estancia);
  if(estancia>7 && distanciatotal>800)
  {
    precio=distanciatotal*0.23;
    preciototal=precio-(precio*0.30);
    printf ("Felicidades!, su boleto cuenta con descuento \n");
    printf ("El precio del ticket de ida y vuelta es de: %.2f\n", preciototal);
  }
  else
  {
     preciototal=distanciatotal*0.23;
     printf("El precio del ticket de ida y vuelta es de:%.2f \n", preciototal);
  }
 
return 0;
}
