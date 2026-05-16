#include <stdio.h>
int main()
{
  int A, B;
  printf("====VERIFICADOR DE DIVISORES====\n");
  printf("Ingrese el valor del primer numero: \n");
  scanf("%d", &A);

  printf("Ingrese el valor del segundo numero: \n");
  scanf("%d", &B);

  if( A==0 || B==0 )
  {
    printf("ERROR, Los numeros enteros deben ser distintos de 0 \n");
  }
  else
  {
    if( A % B==0)
    {
      printf("%d es divisor de %d \n", B, A);
    }
    else
    {
      if( B % A == 0)
      {
        printf(" %d es divisor de %d \n", A, B);
      }
      else
      {
        printf("Ningun numero es divisor del otro \n");
      }
     }
    }
return 0;
}
