// 1. Escribe una función recursiva que reciba un puntero a un array de
// enteros y su tamaño, y devuelva la suma de todos los elementos del array.
//*checklist:
//// recibe un puntero a un array de enteros
//// recibe el tamaño del array
//// es recursiva
//// devulve la suma de todas las posiciones

int sumf(int *arr, int arrSz)
{
  if (arrSz == 0)
  {
    return 0;
  }
  return arr[0] + sumf(arr + 1, arrSz - 1);
}

#include <stdio.h>

int main()
{
  printf("\n======================================\nwe are making operations with an array\n======================================\n \nDefine the length of the array:\n");

  int arrSz;
  int myArr[arrSz];
  scanf("%d", &arrSz);
  printf("\nGreat! Now type each positions value, and press the Enter key to type the next one\n");
  int i;
  for (i = 0; i < (arrSz); i++)
  {
    printf("enter the value for the position number %i\n", (i));
    scanf("%i", &myArr[i]);
  }
  printf("\n==========================\narray filled successfully:\n==========================\n Applying Sumf() to >>[");

  for (int i = 0; i < arrSz; i++)
  {
    printf("%d,", myArr[i]);
  }
  int *ptr = myArr;
  printf("]<<\n=>%d\n", sumf(ptr, arrSz));
  return 0;
}