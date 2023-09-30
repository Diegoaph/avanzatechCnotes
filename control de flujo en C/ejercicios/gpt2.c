// 2. Escribe una función que reciba un puntero a una cadena de caracteres
// y la invierta usando aritmética de punteros. No puedes usar ninguna
// función de la biblioteca estándar de C.

//?checklist:
//-recibe un puntero a una cadena de caracteres
//-no usar stdlib

#include <stdio.h>
void invert(char *str)
{
  char *end = str;
  while (*end != '\0')
  {
    end++;
  }
  end--;
  while (str < end)
  {
    char aux = *str;
    *str = *end;
    *end = aux;
    str++;
    end--;
  }
}
int main()
{
  char ejemplo[] = "la ruta natural";
  printf("input: %s\n\n\n", ejemplo);
  invert(ejemplo);
  printf("output: %s\n\n\n", ejemplo);

  return 0;
}