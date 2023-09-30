#include <stdio.h>

int main()
{
  int valor = 3;
  int *ptr = &valor;
  printf(" -value > %i;\n -Direction > %p;\n -inDirection(p) > %p\n -inDirection(i) > %i\n -Direction(&) > %p;\n",
         valor, ptr, *ptr, *ptr, &ptr);
  return 0;
}
