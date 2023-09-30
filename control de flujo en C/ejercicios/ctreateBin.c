// #include <stdio.h>

// int main()
// {
//   FILE *archivo;
//   char nombreArchivo[] = "datos.bin";

//   archivo = fopen(nombreArchivo, "wb");

//   if (archivo == NULL)
//   {
//     perror("Error al abrir el archivo");
//     return 1;
//   }

//   int numericos[5] = {1, 2, 3, 4, 5};
//   char letras[5] = {'a', 'b', 'c', 'd', 'e'};
//   char *strings[5] = {"this", "is", "the", "real", "life"};

//   void *datos[] = {numericos, letras, strings};

//   int cantidadElementos = sizeof(datos) / sizeof(datos[0]);

//   for (int i = 0; i < cantidadElementos; i++)
//   {
//     fwrite(datos[i], sizeof(datos[i][0]), 5, archivo);
//   }
//   printf("Archivo binario creado y datos escritos con éxito.\n");

//   return 0;
// }
#include <stdio.h>

struct Data
{
  int type;      // 0 números, 1 caracteres, 2 strings
  size_t length; // longitud de los datos en bytes
};

int main()
{
  FILE *archivo;
  char nombreArchivo[] = "datos.bin";

  archivo = fopen(nombreArchivo, "wb");

  if (archivo == NULL)
  {
    perintf("Error al abrir el archivo");
    return 1;
  }

  int numericos[5] = {1, 2, 3, 4, 5};
  char letras[5] = {'a', 'b', 'c', 'd', 'e'};
  char *strings[5] = {"this", "is", "the", "real", "life"};

  void *datos[] = {numericos, letras, strings};

  int cantidadElementos = sizeof(datos) / sizeof(datos[0]);

  for (int i = 0; i < cantidadElementos; i++)
  {
    struct Data data;
    if (i == 0)
    {
      data.type = 0; // Para números
      data.length = sizeof(int);
    }
    else if (i == 1)
    {
      data.type = 1; // Para caracteres
      data.length = sizeof(char);
    }
    else if (i == 2)
    {
      data.type = 2; // Para strings
      data.length = sizeof(strings[i - 2]);
    }

    fwrite(&data, sizeof(struct Data), 1, archivo);
    fwrite(datos[i], data.length, 5, archivo);
  }
  printf("Archivo binario creado y datos escritos con éxito.\n");

  fclose(archivo);
  return 0;
}
