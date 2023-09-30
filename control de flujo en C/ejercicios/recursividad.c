// #include <stdio.h>

// unsigned long long fact(int a)
// {
//   unsigned long long acum = 1;
//   if (a < 2)
//   {
//     return acum;
//   }
//   else
//   {
//     acum = a * fact(a - 1);
//   }
//   return acum;
// }
// int main()
// {
//   printf("ingrese el numero para el calculo\n");
//   int x;
//   scanf("%d", &x);
//   printf("%lld\n", fact(x));
//   return 0;
// }

#include <stdio.h>

#define MAX_DIGITS 50

// Estructura para representar números muy grandes en strings
typedef struct
{
  char digits[MAX_DIGITS];
  int length;
} BigNumber;

// Función para inicializar un BigNumber con el valor 1
void initialize(BigNumber *num)
{
  for (int i = 0; i < MAX_DIGITS; i++)
  {
    num->digits[i] = 0;
  }
  num->digits[0] = 1;
  num->length = 1;
}

// Función para multiplicar un BigNumber por un entero
void multiply(BigNumber *num, int multiplier)
{
  int carry = 0;
  for (int i = 0; i < num->length || carry; i++)
  {

    int product = num->digits[i] * multiplier + carry;
    num->digits[i] = product % 10;
    carry = product / 10;
    if (i >= num->length && carry)
    {
      num->length++;
    }
  }
}

// Función para imprimir un BigNumber
void printBigNumber(BigNumber *num)
{
  for (int i = num->length - 1; i >= 0; i--)
  {
    printf("%d", num->digits[i]);
  }
  printf("\n");
}

int main()
{
  int n = 40; // Calcular 40!
  BigNumber result;
  initialize(&result);

  for (int i = 2; i <= n; i++)
  {
    multiply(&result, i);
  }

  printf("El factorial de %d es: ", n);
  printBigNumber(&result);

  return 0;
}