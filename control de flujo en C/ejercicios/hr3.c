//- ejercicio encontrar maximo de 4 enteros

//? el usuario debe ingresar :
//? [entero][enter],
//? [entero][enter],
//? [entero][enter],
//? [entero][enter].
//?  y en seguida, se debe ver en la siguiente linea
//? cual de esos cuatro enteros es el mayor

#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
  // tu codigo aqui:
  double aux = -1.797693e+308;
  // defino un infinito negativo
  if (a > aux)
  {
    aux = a;
  }
  if (b > aux)
  {
    aux = b;
  }
  if (c > aux)
  {
    aux = c;
  }
  if (d > aux)
  {
    aux = d;
  }
  return aux;
}

int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return 0;
}