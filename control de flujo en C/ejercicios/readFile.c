#include <stdio.h>
struct Data
{
  int type;      // 0 números, 1 caracteres, 2 strings
  size_t length; // longitud de los datos en bytes
};
int main(void)
{
  FILE *myFile = fopen("datos.bin", "rb");
  if (myFile == NULL)
  {
    printf("\n================\ncannot open file\n================\n");
    return 1;
  }
  printf("\n=============\nsuccess fopen\n=============\n");

  // do
  // {
  //   int ch = fgetc(myFile);
  //   // long pos = ftell(myFile);
  //   //  printf("\n=============\ncursor position:%ld\n=============\n", pos);
  //   if (ch != EOF)
  //   {
  //     printf("%c |", ch);
  //   }

  // } while (!feof(myFile));

  struct Data data;

  // int timesR = fread(&data, sizeof(int), 1, myFile);
  // timesR != 1 ? printf("reading error %i", timesR) : printf("reading success %i\n", timesR);

  // printf("=============\nfile content>>\n=============\n>\n%c\n", data);

  while (fread(&data, sizeof(struct Data), 1, myFile) == 1)
  {
    if (data.type == 0)
    {
      int numero;
      fread(&numero, sizeof(int), 1, myFile);
      printf("%d | ", numero);
    }
    else if (data.type == 1)
    {
      char caracter;
      fread(&caracter, sizeof(char), 1, myFile);
      printf("%c | ", caracter);
    }
    else if (data.type == 2)
    {
      char cadena[100]; // Asumiendo una longitud máxima de cadena de 100 caracteres
      fread(cadena, sizeof(char), data.length, myFile);
      printf("%s | ", cadena);
    }
  }

  printf("\n=============\nclosing file\n=============\n");

  int closeStat = fclose(myFile);

  closeStat != 0 ? printf("error closing file (%i)\n=============\n", closeStat) : printf("success closing file (%i)\n=============\n", closeStat);
  return 0;
}