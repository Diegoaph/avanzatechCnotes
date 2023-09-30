#include <stdio.h>
int main()
{
  int a = 70;
  float f = 7.5;
  float suma = (float)a + f;
  printf("entero: %i\n float: %.2f\n double: %.4f\n char: %c\n", a, (float)a, (double)a, (char)a);
  printf("suma: %.2f\n", suma);
  printf("suma+1.03: %.2f\n", (float)a + f + 1.03);

  return 0;
}
//- me doy cuenta que sin ponerle el (float) tambien da los resultados bien...
