// Aquí tienes 10 ejercicios en C que cubren diferentes aspectos,
//  desde punteros hasta recursividad y combinaciones de habilidades.
//  Estos ejercicios son del tipo que a menudo se encuentran en pruebas
//   técnicas y exámenes universitarios:

//- **Punteros:**

//? 1. **Intercambio de valores:**
// Escribe una función que tome dos enteros
//  como argumentos y los intercambie utilizando punteros.

//? 2. **Suma de elementos de un arreglo:**
// Escribe una función que calcule
//  la suma de todos los elementos en un arreglo de enteros utilizando punteros.

//? 3. **Copia de cadenas:**
// Implementa una función que copie una cadena de
//  caracteres en otra utilizando punteros.

//? 4. **Ordenamiento de un arreglo:**
// Escribe una función que ordene un
// arreglo de enteros utilizando punteros y el algoritmo de selección.

//- **Punteros a punteros:**

//? 5. **Ordenamiento de una matriz:**
// Escribe una función que ordene una
// matriz de enteros (bidimensional) utilizando punteros a punteros y el
// algoritmo de burbuja.

//? 6. **Matriz dinámica:**
// Crea una matriz dinámica utilizando punteros a
// punteros y permite al usuario ingresar valores y luego imprímela.

//- **Recursividad:**

//? 7. **Factorial:**
// Implementa una función recursiva para calcular el
// factorial de un número.

//? 8. **Fibonacci:**
// Escribe una función recursiva para calcular el término
//  n-ésimo de la secuencia de Fibonacci.

//- **Combinación de habilidades:**

//? 9. **Inversión de una cadena:**
// Escribe una función que invierta una
// cadena de caracteres utilizando recursión y punteros.

//? 10. **Operaciones en una lista enlazada:**
// Crea una lista enlazada de
// enteros y desarrolla funciones para agregar elementos, eliminar elementos,
// buscar elementos y liberar la memoria utilizando punteros.

// Estos ejercicios deberían proporcionarte una buena práctica en las
// diversas habilidades que mencionaste y te ayudarán a mejorar tus
// habilidades en C. Puedes comenzar con los ejercicios más simples y
// avanzar hacia los más desafiantes a medida que te sientas más cómodo.

//**********************************************************************
// Aquí hay algunos ejercicios que puedes practicar para mejorar tus
// habilidades con los punteros y la recursividad en C:
// 1. Escribe una función recursiva que reciba un puntero a un array de
// enteros y su tamaño, y devuelva la suma de todos los elementos del array.
// 2. Escribe una función que reciba un puntero a una cadena de caracteres
// y la invierta usando aritmética de punteros. No puedes usar ninguna
// función de la biblioteca estándar de C.
// 3. Escribe una función que reciba dos punteros a enteros y los intercambie
// usando punteros a punteros.
// 4. Escribe una función recursiva que reciba un puntero a una cadena de
// caracteres y devuelva un valor booleano indicando si la cadena es un
// palíndromo o no. Un palíndromo es una palabra que se lee igual de
// izquierda a derecha que de derecha a izquierda, como "ana" o "reconocer".
// 5. Escribe una función que reciba un puntero a una estructura que
// contenga un campo entero y un puntero a otra estructura del mismo tipo, y
// devuelva el número de estructuras enlazadas que hay en la lista. Por ejemplo,
// si la estructura es:

// c
// struct nodo {
//   int dato;
//   struct nodo *siguiente;
// };

// y se tiene una lista como esta:

// c
// struct nodo *lista = malloc(sizeof(struct nodo));
// lista->dato = 1;
// lista->siguiente = malloc(sizeof(struct nodo));
// lista->siguiente->dato = 2;
// lista->siguiente->siguiente = malloc(sizeof(struct nodo));
// lista->siguiente->siguiente->dato = 3;
// lista->siguiente->siguiente->siguiente = NULL;

// la función debe devolver 3.
// 6. Escribe una función recursiva que reciba un puntero a un array de enteros y
// su tamaño, y ordene el array de menor a mayor usando el algoritmo de quicksort.
// El algoritmo de quicksort consiste en elegir un elemento del array como pivote,
// y dividir el array en dos subarrays, uno con los elementos menores o iguales al
// pivote y otro con los elementos mayores al pivote. Luego se aplica el mismo
// algoritmo a cada subarray de forma recursiva, hasta que el array esté ordenado.
// 7. Escribe una función que reciba un puntero a una cadena de caracteres y
// devuelva un puntero a otra cadena de caracteres que sea una copia de la original,
// pero sin espacios en blanco. Debes usar memoria dinámica para crear la nueva
// cadena, y liberarla cuando ya no sea necesaria.
// 8. Escribe una función recursiva que reciba un puntero a un array de enteros y su
// tamaño, y devuelva el número de veces que aparece el elemento más frecuente en el
// array. Por ejemplo, si el array es [1, 2, 3, 2, 4, 2, 5], la función debe devolver 3,
// porque el elemento más frecuente es el 2 y aparece 3 veces.
// 9. Escribe una función que reciba un puntero a una estructura que contenga un campo
// entero y un puntero a otra estructura del mismo tipo, y devuelva un puntero a la
// estructura que tenga el mayor valor en el campo entero. Si hay más de una estructura
// con el mismo valor máximo, la función debe devolver la primera que encuentre. Usa el
// mismo tipo de estructura del ejercicio 5.
// 10. Escribe una función recursiva que reciba un puntero a una cadena de caracteres y
// devuelva el número de vocales que contiene la cadena. Las vocales son las letras
// a, e, i, o, u, tanto en mayúscula como en minúscula.

// #include <stdio.h>
// int main()
// {
//   return 0;
// }