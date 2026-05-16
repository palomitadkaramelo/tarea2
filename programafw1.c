#include <stdio.h>
int main()
{
  int num, cont=1, tabla;
  printf("====TABLA DE MULTIPLICAR====\n");
  printf("Ingrese el numero: \n");
  scanf("%d", &num);

  printf("La tabla de multiplicar de %d es: \n", num);
  while(cont<=10)
  {
    tabla= num * cont;
    printf(" %d x %d = %d \n", num, cont, tabla);
    cont++;
  }
  return 0;
}
