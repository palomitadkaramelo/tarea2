#include <stdio.h>
int main()
{
  int A, B;
  int sum, rest, multi;

  printf("Escribe el primer numero ");
  scanf("%d", &A);
  printf("Escribe el segundo numero ");
  scanf("%d", &B);

  sum= A + B;
  rest= A - B;
  multi= A * B;

  printf("la suma es: %d \n", suma);
  printf("la resta es: %d \n", rest);
  printf("la multi es: %d \n", multi);

  return 0;
}
