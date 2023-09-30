#include <stdio.h>
#define BLANCO 1 << 0
#define NEGRO 1 << 1
#define AMRILLO 1 << 2
#define AZUL 1 << 3
#define ROJO 1 << 4
#define MORADO 1 << 5
#define VERDE 1 << 6
#define NARANJA 1 << 1

int main()
{
  printf("blanco y negro enmascarado = %u\n", BLANCO | NEGRO);
  //? si hago un OR entre varios de mis elementos enmascarados, obtengo un byte que los contiene a todos
  // char colores = (VERDE & AMARILLO & BLANCO)
  //? si hago un AND entre un byte enmascarado y por ejemplo el amarillo, y obtengo amarillo, significa que el amarillo estaba enmascarado en el valor inicial
  // if(colores & AMARILLO){printf(YES!!)} --> en este caso el output va a ser YES! porque existe el amarillo dentro de colores
  //? si quiero apagar el amarillo dentro de colores, debo hacer un AND de colores con (notAMARILLO)
  // colores&=(~AMARILLO) --> es lo mismo que colores = colores & (~AMARILLO)
  // luego de esto comprobamos
  // if(colores & AMARILLO){printf(YES!!)} --> en este caso el output NO va a ser YES! porque YA NO existe el amarillo dentro de colores
  return 0;
}