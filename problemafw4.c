#include <stdio.h>
int main()
{
  int num, cont=1, prod=1;
  printf("====CALCULADORA DE FACTORIAL====\n");
  printf("Ingrese hasta que numero quiere la multiplicacion: \n");
  scanf("%d", &num);

  while(cont<= num)
  {
    prod= prod * cont;
     cont= cont +1;
  }
  printf("El producto es: %d \n", prod);
  return 0;
}
