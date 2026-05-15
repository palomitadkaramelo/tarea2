#include <stdio.h>
int main()
{
  int A, B;
  int sum, rest, multi;
  printf("====CALCULADORA====\n");

  printf("Escribe el primer numero: \n");
  scanf("%d", &A);
  printf("Escribe el segundo numero: \n");
  scanf("%d", &B);

  sum= A + B;
  rest= A - B;
  multi= A * B;

  printf("la suma es: %d \n", sum);
  printf("la resta es: %d \n", rest);
  printf("la multi es: %d \n", multi);

  return 0;
}
