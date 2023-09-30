// 3. Escribe una función que reciba dos punteros a enteros y los intercambie
// usando punteros a punteros.

#include <stdio.h>
void swap(int *x, int *y)
{
  printf("\nInput:\n a: %i\n b: %i\n", *x, *y);
  int **xx = &x;
  int **yy = &y;
  int aux = *y;
  **yy = *x;
  **xx = aux;
  printf("\nOutput:\n a: %i\n b: %i\n", **xx, **yy);
}
int main()
{
  int a, b, *pa, *pb;
  a = 1;
  b = 9;
  pa = &a;
  pb = &b;

  swap(pa, pb);
  return 0;
}