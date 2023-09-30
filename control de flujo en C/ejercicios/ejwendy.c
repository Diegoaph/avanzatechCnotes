//- ejercicio definir
//-las implementaciones de cada metodo

#include <stdio.h>
#include <stdlib.h>

void ins_start(int **array, int *arr_size_ptr, int valor);
void ins_end(int **array, int *arr_size_ptr, int valor);
void ins_i(int *array, int *arr_size_ptr, int valor, int *position);
void remove_start(int *array, int *arr_size_ptr);
void remove_end(int *array, int *arr_size_ptr);
void remove_i(int *array, int *arr_size_ptr, int position);
void act(int *array, int *arr_size_ptr, int position, int valor);
void print(int *array, int *arr_size_ptr);
int find(int *array, int *arr_size_ptr, int valor);
int i, j;

int main()
{
  int arr_size_ptr;
  int cond = 8;
  int val;
  int pos;
  char sure;
  printf("\n======================================\nwe are making operations with an array\n======================================\n \nDefine the length of the array:\n");
  scanf("%i", &arr_size_ptr);

  int *myArr;
  myArr = (int *)calloc(arr_size_ptr, sizeof(int));
  if (myArr == NULL)
  {
    printf("\n===================\n===================\n||something went wrong||\n===================\n===================\n||bufffer overflow! ||\n===================\n===================\n");
    free(myArr);
    return 1;
  }
  printf("\nGreat! now we are working with a >>%lu<< positions array.\n \nNow type each positions value, and press the Enter key to type the next one\n", 1 + ((sizeof(myArr) / sizeof(int))));
  for (i = 0; i < (arr_size_ptr); i++)
  {
    printf("enter the value for the position number %i\n", (i));
    scanf("%i", &myArr[i]);
  }
  printf("\n==========================\narray filled successfully:\n==========================\n>>[");

  for (int i = 0; i < arr_size_ptr; i++)
  {
    printf("%d,", myArr[i]);
  }
  printf("]<<\n");

  while ((cond <= 9) && (cond > 0))
  {
    printf("\n ==================================\n select an option and press Enter key\n ==================================\n--1 => insert a value in the first position\n--2 => insert a value in the last position\n--3 => insert a value in a specific position\n--4 => remove the first position\n--5 => remove the last position\n--6 => remove a specific position\n--7 => update the value of a specific position\n--8 => print the whole array\n--9 => Find the position of a specific value\n--0 => exit\n");
    scanf("%d", &cond);

    switch (cond)
    {
    case 1:
      printf("\ntype a value to insert in the first position of our array, then press Enter key:\n");
      scanf("%i", &val);
      ins_start(&myArr, &arr_size_ptr, val);
      break;
    case 2:
      printf("\ntype a value to insert in the last position of our array, then press Enter key:\n");
      scanf("%i", &val);
      ins_end(&myArr, &arr_size_ptr, val);
      break;
    case 3:
      printf("\ntype a value to insert in our array, then press Enter key:\n");
      scanf("%i", &val);
      printf("\ntype the position number (starts at 0), then press Enter key:\n");
      scanf("%i", &pos);
      // ins_i(myArr, arr_size_ptr, val, pos);
      break;
    case 4:
      printf("\nRemove first position?[y/n]\n");
      scanf("%c", &sure);
      // if (sure == "y")
      // {
      //   remove_start(myArr, arr_size_ptr);
      // };
      break;
    case 5:
      printf("\nRemove last position?[y/n]\n");
      scanf("%c", &sure);
      if (sure == "y")
        // {
        //   remove_end(myArr, arr_size_ptr);
        // };
        break;
    case 6:
      printf("\nRemove a position?[y/n]\n");
      scanf("%c", &sure);
      if (sure == "y")
      {
        printf("\nenter the number of the position to remove (starts at 0)\n");
        scanf("%i", &pos);
        // remove_i(myArr, arr_size_ptr, pos);
      };
      break;
    case 7:
      printf("\nModify a positions value?[y/n]\n");
      scanf("%c", &sure);
      if (sure == "y")
      {
        printf("\nenter the number of the position to modify (starts at 0)\n");
        scanf("%i", &pos);
        // act(myArr, arr_size_ptr, pos, val);
      };
      break;
    case 8:
      printf(">>[");
      for (int i = 0; i < arr_size_ptr; i++)
      {
        printf("%d,", myArr[i]);
      }
      printf("]<<\n");
      break;
    case 9:
      printf("\nfind the position of a value in the array\nenter the value to be searched\n");
      scanf("%i", &val);
      // find(myArr, arr_size_ptr, val);

      break;

    default:
      free(myArr);
      printf("\n -------------\n| free(Array) |\n -------------\n");
      break;
    }
  };

  return 0;
}

void ins_start(int **array, int *arr_size_ptr, int valor)
{
  *array = realloc(*array, ((*arr_size_ptr) + 1) * sizeof(int));
  if (*array == NULL)
  {
    printf("\n===================\n===================\n||something went wrong||\n===================\n===================\n||bufffer overflow! ||\n===================\n===================\n");
    free(*array);
    exit(1);
  }
  for (i = (*arr_size_ptr); i > 0; i--)
  {
    (*array)[i] = (*array)[i - 1];
  };
  (*array)[0] = valor;
  (*arr_size_ptr)++;
}

void ins_end(int **array, int *arr_size_ptr, int valor)
{
  *array = realloc(*array, ((*arr_size_ptr) + 1) * sizeof(int));
  if (*array == NULL)
  {
    printf("\n===================\n===================\n||something went wrong||\n===================\n===================\n||bufffer overflow! ||\n===================\n===================\n");
    free(*array);
    exit(1);
  }
  (*array)[*arr_size_ptr] = valor;
  (*arr_size_ptr)++;
}

// void ins_i(int *array, int *arr_size_ptr, int valor, int *position)
// {
//   *array = realloc(*array, ((*arr_size_ptr) + 1) * sizeof(int));
//   if (*array == NULL)
//   {
//     printf("\n===================\n===================\n||something went wrong||\n===================\n===================\n||bufffer overflow! ||\n===================\n===================\n");
//     free(*array);
//     exit(1);
//   }
//   for (j = (*arr_size_ptr); j > position; j--)
//   {
//     (*array)[j] = (*array)[j - 1];
//   };
//   (*array)[*position] = valor;
//   (*arr_size_ptr)++;
// }

// void remove_start(int *array, int *arr_size_ptr)
// {
// }

// void remove_end(int *array, int *arr_size_ptr)
// {
// }

// void remove_i(int *array, int *arr_size_ptr, int position)
// {
// }

// void act(int *array, int *arr_size_ptr, int position, int valor)
// {
// }

// void print(int *array, int *arr_size_ptr)
// {
// }

// int find(int *array, int *arr_size_ptr, int valor)
// {
// }
