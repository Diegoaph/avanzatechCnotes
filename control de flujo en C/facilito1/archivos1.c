#include <stdio.h>

int main(/*int argc, char **argv*/)
{
  FILE *ejemplo = fopen("ejemplo.txt", "r");

  if (ejemplo)
    printf("\n =================\n|file ready to use|\n =================\n");
  if (!ejemplo)
  {
    printf("\n =================\n|cannot read file |\n =================\n");
    return 1;
  }

  do
  {
    int charLeido = fgetc(ejemplo);
    if (charLeido != EOF)
    {
      printf("%c", (char)charLeido);
    }
    else
    {
      printf("\n===END===\n");
    }

  } while (!feof(ejemplo));
  fclose(ejemplo);
  return 0;
}